#include <spdlog/spdlog.h>
#include <limits>
#include <string>
#include <fstream>

#include <ppmlib/ppm.h>

ppm::PPM gradient(const size_t width, const size_t height) {
  const float max_value = std::numeric_limits<ppm::color_t>::max();
  const float width_scaler{max_value / static_cast<float>(width)};
  const float height_scaler{max_value / static_cast<float>(height)};
  ppm::PPM src(width, height, ppm::Color(0, 0, 0));
  for (size_t i = 0; i != height; i++) {
    if (i % 10 == 0) {
      spdlog::info("Scanlines remaining: {}", i);
    }
    for (size_t j = 0; j != width; j++) {
      src.at(i, j) = ppm::Color(
        static_cast<ppm::color_t>(i * height_scaler),
        static_cast<ppm::color_t>(j * width_scaler),
        0);
    }
  }
  return src;
}

int main() {
  const std::string file("gradient.ppm");
  const size_t width{256};
  const size_t height{128};
  const auto src = gradient(width, height);

  std::ofstream ofs(file);
  src.write(ofs);
  return 0;
}
