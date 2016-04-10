#ifndef WORLD
#define WORLD
#include "Room.h"
#include "Player.h"
#include "Globals.h"


class World
{
public:
	Room* room = nullptr;
	Player* player = nullptr;

public:
	World();
	~World();
	void Create_world() const;

	//Print the current room on the game
	void print_room() const;

	//movement prototypes
	void move(direction);
	
	//Open prototypes
	void open_north_exit();
	void open_south_exit();
	void open_weast_exit();
	void open_east_exit();
	void open_down_exit();

	//Close prototypes
	void close_north_exit();
	void close_south_exit();
	void close_weast_exit();
	void close_east_exit();
	void close_down_exit();
};

#endif // !WORLD
