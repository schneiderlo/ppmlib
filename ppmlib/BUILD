load(
    "//settings:configure_copts.bzl",
    "PROJECT_DEFAULT_COPTS",
    "PROJECT_TEST_COPTS",
)

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "utils",
    hdrs = [
        "utils.h",
    ],
    srcs = [
        "utils.cc",
    ],
    copts = PROJECT_DEFAULT_COPTS,
)

cc_binary(
    name = "main",
    srcs = [
        "main.cc",
    ],
    copts = PROJECT_DEFAULT_COPTS,
    deps = [
        ":utils",
    ],
)

cc_test(
    name = "main-test",
    srcs = [
        "main_test.cc",
    ],
    copts = PROJECT_DEFAULT_COPTS,
    deps = [
        ":utils",
    ],
)
