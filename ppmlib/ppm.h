#ifndef PPM_PPM_H
#define PPM_PPM_H

#include <iostream>
#include <vector>

#include "ppmlib/color.h"
#include "ppmlib/types.h"

namespace ppm {

class PPM {
 public:
  PPM() = default;
  PPM(const size_t width, const size_t height, const Color& fill_value);

  // Read an image from a stream.
  void read(std::istream& is);

  // Write the image to an output stream.
  void write(std::ostream& os) const;

  size_t width() const;
  size_t height() const;

  Color at(const size_t i, const size_t j) const;
  Color& at(const size_t i, const size_t j);

 private:
  // The color of the image.
  //
  // They are stored in row-major order.
  std::vector<std::vector<Color>> data_;

  // Maximum value for each color.
  constexpr static color_t max_value_ = 255;
};

[[nodiscard]] PPM read_image(const std::string& path);

void write_image(const PPM& src, const std::string& path);

}  // namespace ppm

#endif  // PPM_COLOR_H
