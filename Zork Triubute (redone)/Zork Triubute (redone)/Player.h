#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Creature.h"
#include "Room.h"



class Player : public Creature
{
public:
	Room* currentRoom;


public:
	Player(const char* name, const char* des, EntityType id, Room* startRoom);
	~Player();

	void Look();
	ExitState move(Direction dir);
	bool open(Direction dir);
	bool close(Direction dir);
	void ShowStats();

	//States, are in bool because you can have more than once active at time
	bool Yandere;
	bool Tsundere;
	bool Kuudere;
	bool Dendere;

};


#endif // !__PLAYER_H__
