load(
    "//settings:configure_copts.bzl",
    "PROJECT_DEFAULT_COPTS",
    "PROJECT_TEST_COPTS",
)

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "ppm",
    hdrs = [
        "types.h",
        "color.h",
        "ppm.h",
    ],
    srcs = [
        "color.cc",
        "ppm.cc"
    ],
    copts = PROJECT_DEFAULT_COPTS,
)

TEST_FILES = [
    "color",
    "ppm",
]

[cc_test(
    name = test_file + "-test",
    srcs = [
        test_file + "_test.cc"
    ],
    copts = PROJECT_DEFAULT_COPTS,
    defines = ["CATCH_CONFIG_MAIN"],
    deps = [
        ":ppm",
        "@catch2//:catch2"
    ],
) for test_file in TEST_FILES]
