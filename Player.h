#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"

class Player: public Character {
public:
    Player();
    Player(int);

    void attack(int, const Weapon&) override;
    void defense(const Weapon&);   // TODO - do I still need "= 0" in base class if I overload instead so player can use weapon modifier

    int getAttackDamage() const;
    //Weapon getWeapon();

protected:
    void setHealth(int) override;
    void setMaxHealth(int) override;
    void setName(string) override;
    void setAttackDamage(int);
    //void setWeapon(Weapon);

private:
    int attackDamage;
};


#endif //PLAYER_H