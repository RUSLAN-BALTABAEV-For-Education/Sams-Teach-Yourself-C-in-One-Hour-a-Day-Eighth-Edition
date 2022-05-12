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
	Human(string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
		cout << "Перегруженный конструктор создал: ";
		cout << name << " с возрастом " << age << endl;
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
	Human firstMan("Адам", 25);
	Human firstWoman("Ева", 28);

	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();
	_getch();
}