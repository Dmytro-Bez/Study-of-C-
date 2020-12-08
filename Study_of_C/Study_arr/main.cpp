#include"main.h"
void add_arr(int* &arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void show_arr(int* &arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{
	int size = 3;
	int* first_arr = new int[size];
	int* second_arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		first_arr[i] = second_arr[i];
	}
	delete[]first_arr;
	delete[]second_arr;
	return 0;
}