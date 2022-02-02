#include <fstream>
#include <string>

#include "ppmlib/ppm.h"

namespace ppm {

PPM::PPM(const size_t width, const size_t height, const Color& fill_value)
    : data_(height, std::vector<Color>(width, fill_value)) {}

void PPM::read(std::istream& is)
{
  // TODO(lschneid): to implement.
}

void PPM::write(std::ostream& os) const
{
  os << "P3\n";
  os << width() << " " << height() << '\n';
  os << static_cast<int>(max_value_) << '\n';
  for (const auto& row: data_) {
    for (const auto& color: row) {
      ppm::write(os, color);
      os << '\n';
    }
  }
}

size_t PPM::width() const
{
  return data_[0].size();
}

size_t PPM::height() const
{
  return data_.size();
}


Color PPM::at(const size_t i, const size_t j) const
{
  return data_[i][j];
}

Color& PPM::at(const size_t i, const size_t j)
{
  return data_[i][j];
}

PPM read_image(const std::string& path)
{
  std::ifstream ifs(path);
  ppm::PPM src;
  src.read(ifs);
  return src;
}

void write_image(const PPM& src, const std::string& path)
{
  std::ofstream ofs(path);
  src.write(ofs);
}

}  // namespace ppm
