#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Human
{
private:
	string name;
	int age;

public:
	Human() // Конструктор по умолчанию
	{
		age = 0; // Инициализация
		cout << "Конструктор по умолчанию" << endl;
	}

	Human(string humansName, int humansAge) // Перегруженный
	{
		name = humansName;
		age = humansAge;
		cout << "Перегруженный конструктор создал: ";
		cout << name << " с возрастом " << age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Human firstMan;               // Конструктор по умолчанию
	Human firstWoman("Ева", 20); // Перегруженный конструктор
	_getch();
}