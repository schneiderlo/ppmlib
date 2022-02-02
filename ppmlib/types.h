#ifndef PPM_TYPES_H
#define PPM_TYPES_H

namespace ppm {

using color_t = unsigned char;

struct Color {
  color_t r;
  color_t g;
  color_t b;
};

} // namespace ppm

#endif // PPM_TYPES_H
