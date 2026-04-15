#include "Weapon.h"

Weapon::Weapon() {
    name = "WEAPON NAME";
    damageModifier = 0;
    defenseModifier = 0;
}

void Weapon::modifyDamage(int baseDamage) const {
    baseDamage += damageModifier;
}

void Weapon::modifyDefense(int baseDamage) const {
    baseDamage += defenseModifier;
}
