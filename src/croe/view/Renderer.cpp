#include "Renderer.h"

Renderer::Renderer(const Window& window): mColor{0,0,0,255}
{
    mRenderer = SDL_CreateRenderer(window.mWindow, -1, 0);
    SDL_SetRenderDrawColor(mRenderer, mColor.r, mColor.g, mColor.b, mColor.a);
}

Renderer::Renderer(const Window& window, Uint32 index): mColor{0,0,0,255}
{
    mRenderer = SDL_CreateRenderer(window.mWindow, index, 0);
    SDL_SetRenderDrawColor(mRenderer, mColor.r, mColor.g, mColor.b, mColor.a);
}

Renderer::Renderer(const Window& window, Uint32 index, Uint32 flag): mColor{0,0,0,255}
{
    mRenderer = SDL_CreateRenderer(window.mWindow, index, flag);
    SDL_SetRenderDrawColor(mRenderer, mColor.r, mColor.g, mColor.b, mColor.a);
}

Renderer::~Renderer()
{
    SDL_DestroyRenderer(mRenderer);
}

SDL_Color Renderer::GetColor()
{
    return mColor;
}

void Renderer::SetColor(const SDL_Color color)
{
    mColor = color;
}


void Renderer::CleanAll()
{
    SDL_RenderClear(mRenderer);
}

void Renderer::CleanAll(const SDL_Color color)
{
    SDL_Color _color;
    SDL_GetRenderDrawColor(mRenderer, &_color.r, &_color.g, &_color.b, &_color.a);
    SDL_SetRenderDrawColor(mRenderer, color.r, color.g, color.b, color.a);
    SDL_RenderClear(mRenderer);
    SDL_SetRenderDrawColor(mRenderer, _color.r, _color.g, _color.b, _color.a);
}

void Renderer::DrawLine(const SDL_Point a, const SDL_Point b)
{
    SDL_RenderDrawLine(mRenderer, a.x, a.y, b.x, b.y);
}

void Renderer::DrawLine(const SDL_Point a, const SDL_Point b, const SDL_Color color)
{
    SDL_Color _color;
    SDL_GetRenderDrawColor(mRenderer, &_color.r, &_color.g, &_color.b, &_color.a);
    SDL_SetRenderDrawColor(mRenderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawLine(mRenderer, a.x, a.y, b.x, b.y);
    SDL_SetRenderDrawColor(mRenderer, _color.r, _color.g, _color.b, _color.a);
}

void Renderer::DrawPoint(const SDL_Point a)
{
    SDL_RenderDrawPoint(mRenderer, a.x, a.y);
}

void Renderer::DrawPoint(const SDL_Point a, const SDL_Color color)
{
    SDL_Color _color;
    SDL_GetRenderDrawColor(mRenderer, &_color.r, &_color.g, &_color.b, &_color.a);
    SDL_SetRenderDrawColor(mRenderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawPoint(mRenderer, a.x, a.y);
    SDL_SetRenderDrawColor(mRenderer, _color.r, _color.g, _color.b, _color.a);
}

void Renderer::DrawRect(const SDL_Rect* rect)
{
    SDL_RenderDrawRect(mRenderer, rect);
}

void Renderer::DrawRect(const SDL_Rect* rect, const SDL_Color color)
{
    SDL_Color _color;
    SDL_GetRenderDrawColor(mRenderer, &_color.r, &_color.g, &_color.b, &_color.a);
    SDL_SetRenderDrawColor(mRenderer, color.r, color.g, color.b, color.a);
    SDL_RenderDrawRect(mRenderer, rect);
    SDL_SetRenderDrawColor(mRenderer, _color.r, _color.g, _color.b, _color.a);
}

void Renderer::DrawFillRect(const SDL_Rect* rect)
{
    SDL_RenderFillRect(mRenderer, rect);
}

void Renderer::DrawFillRect(const SDL_Rect* rect, const SDL_Color color)
{
    SDL_Color _color;
    SDL_GetRenderDrawColor(mRenderer, &_color.r, &_color.g, &_color.b, &_color.a);
    SDL_SetRenderDrawColor(mRenderer, color.r, color.g, color.b, color.a);
    SDL_RenderFillRect(mRenderer, rect);
    SDL_SetRenderDrawColor(mRenderer, _color.r, _color.g, _color.b, _color.a);
}

void Renderer::DrawOnScreen()
{
    SDL_RenderPresent(mRenderer);
}
