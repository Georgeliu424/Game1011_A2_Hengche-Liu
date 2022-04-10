#pragma once
#include<vector>
#include<string>
#include<list>

using namespace std;

enum EntityType
{
	PLAYER,
	ROOM,
	ITEM,
	EXIT

};



class Entity
{
public:
	Entity(string name, Entity* parent);
	virtual ~Entity();

	EntityType type;
	string name;

	Entity* parent;
	list<Entity*> container;
};

