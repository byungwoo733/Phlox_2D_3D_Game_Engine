#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"

#define ANIM_SPEED 100

class Warrior : public Character {

    public:
        Warrior(Properties* props);

        virtual void Draw();
        virtual void Clean();
        virtual void Update(float dt);

    private:
        int m_Row, m_Frame;
        int m_NumFrame;
        int m_AnimSpeed;
};

#endif // WARRIOR_H
