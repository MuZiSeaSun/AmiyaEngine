#ifndef __APP_H__
#define __APP_H__

#include "Window.h"
#include "Renderer.h"
#include "SDL.h"

class App final
{
private:
    Window mMainWindow;
    Renderer mMainRenderer;

    bool isQuit = false;
    bool isPause = false;
    
public:
    App(/* args */);
    ~App();

    void Init();
    void Run();
    void Quit();

    void DrawUpdate();
    void LogicUpdate();
    void EventHandle(const SDL_Event* event);
};

App::App(/* args */): mMainWindow(720, 720), mMainRenderer(mMainWindow){}

App::~App(){}

void App::Init()
{
    //初始化资源。。。。
}

void App::Run()
{
    while (!isQuit)
    {
        if (!isPause)
        {
            LogicUpdate();
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                EventHandle(&event);
            }
        }
        DrawUpdate();
        SDL_Delay(33);
    }
    
}

void App::Quit()
{
    //卸载资源。。。。
}

void App::DrawUpdate()
{

}

void App::LogicUpdate()
{

}

void App::EventHandle(const SDL_Event* event)
{

}



#endif //__APP_H__