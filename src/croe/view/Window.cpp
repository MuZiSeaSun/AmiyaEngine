#include "Window.h"

Window::Window()
{
    mWindow = SDL_CreateWindow(
        "hello",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, 
        100, 100, 
        SDL_WINDOW_SHOWN);
}

Window::Window(Uint32 w, Uint32 h)
{
    mWindow = SDL_CreateWindow(
        "",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, 
        w, h, 
        SDL_WINDOW_SHOWN);
}

Window::Window(Uint32 w, Uint32 h, Uint32 flag)
{
    mWindow = SDL_CreateWindow(
        "",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, 
        w, h, 
        flag);
}

Window::Window(Uint32 w, Uint32 h, Uint32 x, Uint32 y)
{
    mWindow = SDL_CreateWindow(
        "",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, 
        w, h, 
        SDL_WINDOW_SHOWN);
}

Window::Window(Uint32 w, Uint32 h, Uint32 x, Uint32 y, Uint32 flag)
{
    mWindow = SDL_CreateWindow(
        "",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, 
        w, h, 
        flag);
}

Window::~Window()
{
    SDL_DestroyWindow(mWindow);
}