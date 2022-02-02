#include <catch2/catch.hpp>

#include "ppmlib/color.h"

TEST_CASE("Explicit construction", "[Color]")
{
  ppm::Color c(10, 225, 5);
  REQUIRE(c.r == 10);
  REQUIRE(c.g == 225);
  REQUIRE(c.b == 5);
}

TEST_CASE("Read color from input stream", "[Color]")
{
  std::istringstream is("255 55 13   ");
  ppm::Color c = ppm::read(is);
  REQUIRE(c.r == 255);
  REQUIRE(c.g == 55);
  REQUIRE(c.b == 13);
}

