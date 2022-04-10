#pragma once
#include <list>
#include <vector>
#include<string>
#include "Entity.h"

class Entity;


class World
{
public:
	World();
	~World();
	string ParseCommand(string input);
	void Command(string input);
	void UserInput();
	void Move(string direction);
	bool door_opened;
	bool mission_completed;

private:
	vector<Entity*>entities;
	vector<string> commands;


	string input_text;
	
};

