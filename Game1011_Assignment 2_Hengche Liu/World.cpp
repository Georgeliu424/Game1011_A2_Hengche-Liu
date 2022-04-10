#include "World.h"
#include <iostream>
#include <string>
#include<fstream>

using namespace std;

World::World()
{
	mission_completed = false;
	door_opened = false;

	commands = { "Get Item","Go South","Go North","Go West","Go East","Search around" };
	

	fstream file;
	string input;

	file.open("Intro.txt", ios::in);
	if (file.fail())
	{
		cout << "File open error !" << endl;

	}

	getline(file, input);

	while (!file.fail())
	{
		cout << input << endl;
		getline(file, input);

	}

	file.close();






}

World::~World()
{
}

string World::ParseCommand(string input)
{
	return string();
}

void World::Command(string input)
{
}

void World::UserInput()
{
}

void World::Move(string direction)
{
}
