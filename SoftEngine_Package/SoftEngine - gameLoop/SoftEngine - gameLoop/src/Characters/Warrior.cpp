#include "Warrior.h"
#include "SDL.h"
#include "TextureManager.h"


Warrior::Warrior(Properties* props): Character(props){
    m_AnimSpeed = ANIM_SPEED;
    m_NumFrame = 6
    m_Row = 0;

}



void Warrior::Draw(){

}

void Warrior::Update(float dt){
    m_Frame = (SDL_GetTicks()/m_AnimSpeed) % m_NumFrame;
}

void Warrior::Clean(){

}
