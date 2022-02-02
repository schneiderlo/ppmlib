#ifndef PPM_COLOR_H
#define PPM_COLOR_H

#include <iostream>

#include "ppmlib/types.h"

namespace ppm {

// Read a color from a stream.
// 
// The beginning of the stream should be of the form "23 233 55". Where 23
// represents the red channel, 233 the green channel and 55 the blue channel.
[[nodiscard]] Color read(std::istream& is);

// Write a Color to an output stream.
void write(std::ostream& os, const Color& color);

}  // namespace ppm

#endif  // PPM_COLOR_H
