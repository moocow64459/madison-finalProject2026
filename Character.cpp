#include "Character.h"

int Character::getHealth() {
    return currentHealth;
}

void Character::setHealth(const int currentHealth) {
    this->currentHealth = currentHealth;
}

int Character::getMaxHealth() {
    return maxHealth;
}

void Character::setMaxHealth(const int maxHealth) {
    this->maxHealth = maxHealth;
}

string Character::getName() {
    return this->name;
}

void Character::setName(string name) {
    this->name = name;
}

int Character::takeDamage(const int damage) {
    return currentHealth -= damage;
}