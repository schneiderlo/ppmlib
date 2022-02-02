load(
    "//settings:configure_copts.bzl",
    "PROJECT_DEFAULT_COPTS",
    "PROJECT_TEST_COPTS",
)

cc_binary(
    name = "gradient",
    srcs = [
        "gradient.cc"
    ],
    copts = PROJECT_DEFAULT_COPTS,
    deps = [
      "//ppmlib:ppm",
      "@spdlog//:spdlog"
    ]
)

