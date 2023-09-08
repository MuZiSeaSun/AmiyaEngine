#ifndef __WINDOW_H__
#define __WINDOW_H__

#include "SDL.h"
#include "Renderer.h"

class Window final
{
    friend class Renderer;
private:
    SDL_Window* mWindow;
public:
    Window();
    Window(Uint32 w, Uint32 h);
    Window(Uint32 w, Uint32 h, Uint32 flag);
    Window(Uint32 w, Uint32 h, Uint32 x, Uint32 y);
    Window(Uint32 w, Uint32 h, Uint32 x, Uint32 y, Uint32 flag);
    Window(const Window& other) = delete;
    ~Window();
};

#endif //__WINDOW_H__