{
    depfiles_gcc = "hello.o: src\\hello.cpp include\\croe\\view/Window.h  include\\croe\\view/Renderer.h include\\croe\\view/Window.h  include\\croe\\view/Renderer.h\
",
    files = {
        [[src\hello.cpp]]
    },
    values = {
        "gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            [[-Iinclude\croe\view]],
            "-fexceptions",
            "-isystem",
            [[E:\AmiyaEngine\thirdparty\sdl\include\SDL2]],
            "-DNDEBUG"
        }
    }
}