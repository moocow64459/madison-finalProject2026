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
    void setPlayerName(string);

private:
    string playerName;
};


#endif //PLAYER_H