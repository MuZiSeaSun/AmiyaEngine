#include <iostream>
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <SDL_syswm.h>
#include "App.h"

void Init(){
    SDL_Init(SDL_INIT_VIDEO);
    std::cout << "Init SDL" << std::endl;
}

void Quit(){
    SDL_Quit();
}

int main(int argc, char* argv[]){
    Init();
    {
        App app = App();
        app.Init();
    }
    Quit();
    return 0;
}