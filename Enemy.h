#ifndef ENEMY_H
#define ENEMY_H
#include "Character.h"


class Enemy : public Character {
public:
    Enemy();

    void attack(Weapon) override;
    void defense() override;

    void getName();

protected:
    void setHealth(int) override;
    void setMaxHealth(int) override;
    void setName(string) override;
};
#endif //ENEMY_H