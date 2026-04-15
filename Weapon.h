#ifndef WEAPON_H
#define WEAPON_H
#include <string>

using namespace std;

class Weapon {
public:
    Weapon();

    void modifyDamage(int);
    void modifyDefense(int);

private:
    string name;
};


#endif //WEAPON_H