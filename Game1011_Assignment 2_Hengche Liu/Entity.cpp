#include "Entity.h"

Entity::Entity(string name, Entity* parent=NULL):name(name),parent(parent)
{
	if (parent != NULL)
		parent->container.push_back(this);
}

Entity::~Entity()
{
}
