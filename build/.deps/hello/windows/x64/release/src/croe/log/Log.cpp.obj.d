{
    depfiles_gcc = "Log.o: src\\croe\\log\\Log.cpp\
",
    files = {
        [[src\croe\log\Log.cpp]]
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