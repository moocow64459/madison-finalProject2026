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

    virtual int takeDamage(int) = 0;

    // public getters & protected setters
    virtual int getHealth();
    virtual int getMaxHealth();

protected:
    virtual void setHealth(int) = 0;
    virtual void setMaxHealth(int) = 0;
    virtual void setName(string) = 0;

private:
    // TODO - can this health int be private? how would derived classes interact with it?
    int currentHealth = 0;
    int maxHealth = 0;

    string name;
    Weapon weapon;
};


#endif //CHARACTER_H