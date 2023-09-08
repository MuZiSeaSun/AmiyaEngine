#ifndef __RENDERER_H__
#define __RENDERER_H__

#include "SDL.h"
#include "Window.h"

class Window;

class Renderer final
{
private:
    SDL_Renderer* mRenderer;
    SDL_Color mColor;
public:
    Renderer(const Window&);
    Renderer(const Window& window, Uint32 index);
    Renderer(const Window& window, Uint32 index, Uint32 flag);
    Renderer(const Renderer& other) = delete;
    ~Renderer();

    SDL_Color GetColor();
    void SetColor(SDL_Color color);

    void CleanAll();
    void CleanAll(const SDL_Color color);
    void DrawLine(const SDL_Point a, const SDL_Point b);
    void DrawLine(const SDL_Point a, const SDL_Point b, const SDL_Color color);
    void DrawPoint(const SDL_Point a);
    void DrawPoint(const SDL_Point a, const SDL_Color color);
    void DrawRect(const SDL_Rect* rect);
    void DrawRect(const SDL_Rect* rect, const SDL_Color color);
    void DrawFillRect(const SDL_Rect* rect);
    void DrawFillRect(const SDL_Rect* rect, const SDL_Color color);

    void DrawOnScreen();
};

#endif //__RENDERER_H__
