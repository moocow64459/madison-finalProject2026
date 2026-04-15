#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"


class Player: public Character {
public:
    Player();

    void attack(Weapon) override;
    void defense() override;

    void getPlayerName();

protected:


private:

};


#endif //PLAYER_H