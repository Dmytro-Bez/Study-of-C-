#include"main.h"

class Human
{
	
public:
	int age;
	string name;

	void print()
	{
		cout << name << " " << age << endl;
	}
private:

};

int main()
{
	Human fistHuman;
	fistHuman.age = 2;
	fistHuman.name = "Vasily";
	fistHuman.print();

	_getch();
	return 0;
}