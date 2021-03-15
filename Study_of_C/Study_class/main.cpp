#include"main.h"

/*CLASS objeckt*/
class Human
{	
public:
	int age;
	string name;

	void print()
	{
		cout << name << " " << age << endl;
	}
};

/*Get and Send OOP*/
class Objeckt
{
public:
	int get_first(int firstObj)
	{
		return this->firstObj + firstObj;
	}
	void set_first()
	{
		cout << "Hello!" << endl;
	}
private:
	int firstObj = 0;
	
};

/*Destructer class*/
class First
{
	int a;
public:
	First(int data)
	{
		this ->a = data;
		cout << "Constructer" << a << endl;
	}

	~First()
	{
		cout << "Destructer" << this << endl;
	}
};

/*Costr. copy*/
class Constuct
{
public:
	int* data;

	Constuct(int size)
	{
		this->SIZE = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Construct " << this <<endl;
	}

	Constuct(const Constuct &other)
	{
		this->SIZE = other.SIZE;
		this->data = new int[other.SIZE];
		for (int i = 0; i < other.SIZE; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	~Constuct()
	{
		delete[]data;
		cout << "Destruct " << this <<endl;
	}

private:
	int SIZE;
};

/*Class Point*/
class Point
{
public:
	Point()
	{
		x = 0;
		y = 0;
		cout << this << " Constructor 1 " << endl;
	}

	Point(int valX,int valY)
	{
		this->x = valX;
		this->y = valY;
	}

	void GetX(int valX,int valY)
	{
		x = valX;
		y = valY;
		cout << this << " Constructor 2 " << endl;
	}
	/*Pereg. ==*/
	bool operator ==(const Point &other)
	{
		return this->x == other.x && this->y == other.y;
		cout << "Pereg. == " << endl;
	}
	/*Pereg. !=*/
	bool operator !=(const Point &other)
	{
		return !(this->x == other.x && this->y == other.y);
		cout << "Pereg. != " << endl;
	}
	/*Pereg. +*/	
	Point operator +(const Point &other)
	{
		 Point temp;
		 temp.x = this->x + other.x;
		 temp.y = this->x + other.y;
		 return temp;
		 cout << "Pereg. + " << endl;
	}
	friend void ChangX(Point &value);

	~Point()
	{
		cout << this << " Destructor " << endl;
	}
private:
	int x;
	int y;

};

/*Using friend funkiting*/
void ChangX(Point &value)
{
	value.x = 1;
}

/*Friend metod class*/


int main()
{
	
	cout  << endl;
	return 0;
}