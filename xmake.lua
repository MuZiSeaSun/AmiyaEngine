add_rules("mode.debug", "mode.release")

includes("thirdparty")

add_requires("sdl2")

target("hello")
    set_kind("binary")
    add_includedirs("include/croe/view", "include/croe/app")
    add_files("src/*.cpp")
    add_files("src/**/*.cpp")
    add_packages("sdl2")
    