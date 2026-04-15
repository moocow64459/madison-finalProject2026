 #ifndef WEAPON_H
#define WEAPON_H
#include <string>

using namespace std;

class Weapon {
public:
    Weapon();

    void modifyDamage(int) const;
    void modifyDefense(int) const;

private:
    string name;
    int damageModifier;
    int defenseModifier;
};


#endif //WEAPON_H