#include <iostream>
using namespace std;

class small_set
{
public:
	void set(int item);
	void clear(int item);
	int test(int num);

private:
	int arr[31] = { 0 };
	static int counter;
};

int main()
{
	small_set a_set;

	bool sentinel = 1;
	int x, inp;
	while (sentinel)
	{
		system("cls");
		cout << "\nPress 1 to add to set";
		cout << "\nPress 2 to delete from set";
		cout << "\nPress 3 to test if value is in set";
		cout << "\nPress 4 to exit";
		cout << "\n>>\t";
		cin >> x;cin.ignore();
		switch (x)
		{
		case 1:
			while (1)
			{
				cout << "\nEnter value you would like to put in set\n>>\t";
				cin >> inp;cin.ignore();

				if ((inp >= 0) && (inp <= 31))
				{
					a_set.set(inp);
					break;
				}

				else cout << "\nEnter value between 0 and 31";
			}
			cout << "\nValue added succesfully!\n";
			system("pause");
			break;

		case 2:
			while (1)
			{
				cout << "\nEnter value you would like to clear from set\n>>\t";
				cin >> inp;cin.ignore();

				if ((inp >= 0) && (inp <= 31))
				{
					a_set.clear(inp);
					break;
				}

				else cout << "\nEnter value between 0 and 31";
			}
			cout << "\nValue cleared succesfully!\n";
			system("pause");
			break;

		case 3:
			cout << "\nEnter value you would like to test\n>>\t";
			cin >> inp;cin.ignore();

			if ((inp >= 0) && (inp <= 31))
				cout<<((a_set.test(inp))? "\nValue in set": "\nValue not in set");

			cout << endl;
			system("pause");
			break;

		case 4:
			sentinel = false;
			break;

		default:
			cout << "\nKindly enter a valid input >:(\n";
			system("pause");
		}
	}

	system("cls");
	cout << "\nGoodbye:)";

	system("pause>0");
	return 0;
}

void small_set::set(int item)
{
	int counter = 0;

	for (int i = 0;i < 31;i++)
	{
		if (arr[i] == item)
			return;
	}
	for (int i = 0;i < 31;i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = item;
			counter++;
			cout << arr[i];
			break;
		}
	}

	if (counter == 0)
		cout << "\nSet is full";
}

void small_set::clear(int item)
{
	int counter = 0;

	for (int i = 0;i < 31;i++)
	{
		if (arr[i] == item)
		{
			arr[i] = 0;
			return;
		}
	}
}

int small_set::test(int num)
{
	for (int i = 0;i < 31;i++)
	{
		if (arr[i] == num)
			return 1;
	}

	return 0;
}
