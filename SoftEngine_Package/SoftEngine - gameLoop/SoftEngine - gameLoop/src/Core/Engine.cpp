#include "Engine.h"

Engine* Engine::s_Instance = nullptr;

bool Engine::Init(){
    return m_IsRunning = true;
}

void Engine::Update(){
    SDL_Log("updating...");
}

void Engine::Render(){

}

void Engine::Events(){

}

bool Engine::Clean(){

}

void Engine::Quit(){

}
