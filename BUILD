package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "tangle_accelerator",
    srcs = ["server.cc"],
    deps = ["@boost//:beast"],
)

cc_library(
    name = "apis",
    hdrs = ["apis.h"],
    visibility = ["//visibility:public"],
    deps = [
        ":common_core",
        "//serializer",
        "@entangled//cclient:api",
    ],
)

cc_library(
    name = "common_core",
    srcs = ["common_core.c"],
    hdrs = ["common_core.h"],
    visibility = ["//visibility:public"],
    deps = [
        ":ta_config",
        "//request",
        "//response",
        "@com_github_uthash//:uthash",
        "@entangled//cclient:api",
        "@entangled//cclient/types",
    ],
)

cc_library(
    name = "ta_config",
    hdrs = ["config.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "test_common_core",
    srcs = [
        "test/test_common_core.c",
        "test/test_common_core.h",
    ],
    deps = [
        ":common_core",
        "@unity",
    ],
)
