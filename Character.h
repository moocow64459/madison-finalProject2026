#ifndef CHARACTER_H
#define CHARACTER_H
#include "Weapon.h"

// reminder that a pure virtual class will have different behaviors for the same function in derrived classes
// common behaviors can be defined in .cpp as regular functions within this class (?)
class Character {
public:
    // TODO - define different behavior in derived classes
    virtual void attack(Weapon) = 0;
    virtual void defense() = 0;

    virtual int takeDamage(int);

    // public getters & protected setters
    virtual int getHealth();
    virtual int getMaxHealth();

protected:
    virtual void setHealth(int);
    virtual void setMaxHealth(int);

private:
    // TODO - can this health int be private? how would derived classes interact with it?
    int currentHealth = 100;
    int maxHealth = 100;

    Weapon weapon;
};


#endif //CHARACTER_H