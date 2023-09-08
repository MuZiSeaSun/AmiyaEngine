{
    depfiles_gcc = "Window.o: src\\croe\\view\\Window.cpp include\\croe\\view/Window.h  include\\croe\\view/Renderer.h include\\croe\\view/Window.h\
",
    files = {
        [[src\croe\view\Window.cpp]]
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