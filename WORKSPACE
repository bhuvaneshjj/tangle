load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")

git_repository(
    name = "rules_iota",
    commit = "b15744b9ea520717752c866d5afc769c3b6b68f3",
    remote = "https://github.com/iotaledger/rules_iota.git",
)

git_repository(
    name = "entangled",
    commit = "8d847ffcecd50f8f3760bfee07d7ed33ecc067bf",
    remote = "https://github.com/iotaledger/entangled.git",
)

git_repository(
    name = "served",
    commit = "757172e1d8aa7e273e800ce8ec91974c90a2a8b1",
    remote = "https://github.com/meltwater/served.git",
)

git_repository(
    name = "io_bazel_rules_docker",
    remote = "https://github.com/bazelbuild/rules_docker.git",
    tag = "v0.6.0",
)

load("@rules_iota//:defs.bzl", "iota_deps")
load("@io_bazel_rules_docker//cc:image.bzl", _cc_image_repos = "repositories")

iota_deps()

_cc_image_repos()
