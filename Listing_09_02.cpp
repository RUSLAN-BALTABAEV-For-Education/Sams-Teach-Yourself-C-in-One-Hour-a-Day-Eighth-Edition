#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Human
{
private:
	// Закрытые данные-члены:
	int age;

public:
	void SetAge(int inputAge)
	{
		age = inputAge;
	}

	// Человек лжет о своем возрасте (если ему за 30)
	int GetAge()
	{
		if (age > 30)
			return (age - 2);
		else
			return age;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Human firstMan;
	firstMan.SetAge(35);

	Human firstWoman;
	firstWoman.SetAge(22);

	cout << "Возраст firstMan " << firstMan.GetAge() << endl;
	cout << "Возраст firstWoman " << firstWoman.GetAge() << endl;

	_getch();
	return 0;
}