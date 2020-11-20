#include"main.h"

class Human
{
public:
	int age;
	string name;

private:

};

int main()
{
	Human fistHuman;
	fistHuman.age = 2;
	fistHuman.name = "Vasily";
	cout << fistHuman.age << endl;
	cout << fistHuman.name << endl;

	_getch();
	return 0;
}