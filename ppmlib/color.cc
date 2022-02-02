
#include "ppmlib/color.h"

namespace ppm {

Color read(std::istream& is) {
  int r, g, b;
  is >> r >> g >> b;
  Color result(static_cast<color_t>(r), static_cast<color_t>(g),
               static_cast<color_t>(b));
  return result;
}

void write(std::ostream& os, const Color& color) {
  os << static_cast<int>(color.r) << " " << static_cast<int>(color.g) << " "
     << static_cast<int>(color.b);
}

}  // namespace ppm
