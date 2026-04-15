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

int Character::takeDamage(const int damage) {
    return currentHealth -= damage;
}