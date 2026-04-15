#include "Player.h"

// TODO- is this efficient/correct? using Player:: before everything
// and also using the getters and setters in the constructor?

Player::Player() {
    // TODO - set weapon type to basic sword
    // Player::setWeapon();

    attackDamage = 10;
}

Player::Player(const int damage) {
    // TODO

    attackDamage = damage;
}

void Player::attack(int attackDamage, const Weapon& currentWeapon) {
    attackDamage = getAttackDamage();
}

void Player::defense(const Weapon& currentWeapon) {

}

int Player::getAttackDamage() const {
    return attackDamage;
}

void Player::setAttackDamage(int damage) {
    attackDamage = damage;
}
