#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
    public:
        static Engine* GetInstance(){
            return s_Instance = (s_Instance != nullptr)? s_Instance : new Engine();
        }

        bool Init();
        bool Clean();
        void Quit();

        void Update();
        void Render();
        void Events();

        inline bool Isrunning(){return m_IsRunning;}

    private:
        Engine()()
        bool m_IsRunning;
        static Engine* s_Instance;
};

#endif // ENGINE_H
