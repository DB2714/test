#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int balance;
	int* balptr;
	int value;
	balance = 3200;
	balptr = &balance;
	cout << "Баланс равен:" << balance << '\n';
	return 0;
}