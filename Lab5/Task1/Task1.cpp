#include <iostream>
using namespace std;

class heater
{
private:
	signed int temp;

public:
	heater() : temp(15) {}
	void warmer();
	void cooler();
	void print();
};

int main()
{
	heater tt;

	int c;
	while (1)
	{
		tt.print();
		cout << "\nWhat would you like to do?\nPress 1 to increase\nPress 2 to decrease";
		cout << "\nOr press 3 to exit\n>>\t";
		cin >> c;cin.ignore();
		if (c == 1)
			tt.warmer();
		else if (c == 2)
			tt.cooler();
		else if (c == 3)
			break;
		else
			cout << "\nPlease enter valid input";
	}
	cout << "\nGoodbye!";
	return 0;
}

void heater::warmer() 
{
	temp += 5;
}

void heater::cooler() 
{
	temp -= 5;
}

void heater::print()
{
	cout << "\nTemperature is = " << temp;
}