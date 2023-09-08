{
    files = {
        [[build\.objs\hello\windows\x64\release\src\hello.cpp.obj]],
        [[build\.objs\hello\windows\x64\release\src\croe\log\Log.cpp.obj]],
        [[build\.objs\hello\windows\x64\release\src\croe\view\Renderer.cpp.obj]],
        [[build\.objs\hello\windows\x64\release\src\croe\view\Window.cpp.obj]]
    },
    values = {
        "g++",
        {
            "-m64",
            [[-LE:\AmiyaEngine\thirdparty\sdl\lib]],
            "-lSDL2"
        }
    }
}