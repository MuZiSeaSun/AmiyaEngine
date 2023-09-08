-- define toolchain
toolchain("mygcc")

    -- mark as standalone toolchain
    set_kind("standalone")

    -- set toolset
    set_toolset("cc", "gcc")
    set_toolset("cxx", "gcc", "g++")
    set_toolset("ld", "clang++", "clang")
    set_toolset("sh", "clang++", "clang")
    set_toolset("ar", "ar")
    set_toolset("ex", "ar")
    set_toolset("strip", "strip")

    add_defines("MYGCC")