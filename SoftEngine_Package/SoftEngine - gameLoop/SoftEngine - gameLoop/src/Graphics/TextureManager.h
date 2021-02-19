#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include <string>
#include "SDL.h"
#include <map>

class TextureManager
{
    public:
        static TextureManager* GetInstance(){ return s_Instance = (s_Instance != nullptr)? s_Instance : new TextureManager();}

        bool Load(std::string id, std::string filename);
        void Drop(std::string id);
        void Clean();

        void Draw(std::string id, int x, int y, int width, int heigt, SDL_RendererFlip flip=SDL_FLIP_NONE);
        void DrawFrame(std::string id, int x, int y, int width, int heigt, int row, int frame, SDL_RendererFlip flip=SDL_FLIP_NONE);

    private:
        TextureManager(){}
        std::map<std::string, SDL_Texture*> m_TextureMap;
        static TextureManager* s_Instance;
};

#endif // TEXTUREMANAGER_H
