#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	
	fstream file;
	string input;

	file.open("Intro.txt", ios::in);
	if (file.fail())
	{
		cout << "File open error !" << endl;
		return 1;
	}

	getline(file, input);

	while (!file.fail())
	{
		cout << input<<endl;
		getline(file, input);

	}
	
	file.close();

	return 0;
}
