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
	Human() // Конструктор
	{
		age = 0; // Инициализация
		cout << "Конструирование объекта Human" << endl;
	}

	void SetName(string humansName)
	{
		name = humansName;
	}

	void SetAge(int humansAge)
	{
		age = humansAge;
	}

	void IntroduceSelf()
	{
		cout << "Я " + name << " и мне ";
		cout << age << " лет" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Human firstWoman;
	firstWoman.SetName("Ева");
	firstWoman.SetAge(28);

	firstWoman.IntroduceSelf();

	_getch();
}