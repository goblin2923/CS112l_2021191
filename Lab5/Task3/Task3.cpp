#include <iostream>
#include <string>
using namespace std;

class stringType
{
private:
	string str1, str2;

public:

	void setValues(string str1, string str2);
	void printValues();
	int maxLength();
	int compare(string s1, string s2);
	void copy(string source, string destination);
	string concatenate(string s1, string s2);
	int searchWord(string word);
	int searchChar(char ch);
};

int main()
{
	cout << "\n\tHi!\n\nWelcome to my program!";
	cout << "\n    Please enjoy:]\n\n";
	system("pause");
	stringType s;

	int select=0,t;
	string str1, str2, temp;
	char ch;
	bool inp = 0;

	while (select != 10)
	{
		system("cls");
		cout << "\n1.  Set values";
		cout << "\n2.  Print all";
		cout << "\n3.  Find max length";
		cout << "\n4.  Compare string 1 and 2";
		cout << "\n5.  Copy";
		cout << "\n6.  Concatenate";
		cout << "\n7.  Search Word";
		cout << "\n8.  Search Character";
		cout << "\n10. Exit";
		cout << "\nWhat would you like to do?>>\t";
		cin >> select;
		cin.ignore();

		switch (select)
		{
		case 1:
			cout << "\nPlease enter 1st string\n>>\t";
			getline(cin, str1);
			cout << "\nPlease enter 2nd string\n>>\t";
			getline(cin, str2);
			s.setValues(str1,str2);
			cout << "\nValues successfully set";
			cout << endl;
			system("pause");
			inp = 1;
			break;

		case 2:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}
			s.printValues();
			cout << endl;
			system("pause");
			break;

		case 3:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}
			cout<<((s.maxLength())? "\nString 2 is longer":"\nString 1 is longer");
			cout << endl;
			system("pause");
			break;

		case 4:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}

			t = s.compare(str1,str2);

			if (t == 0)
				cout << "\nBoth are same";
			else if (t == -1)
				cout << "\nString 1 is less than string 2";
			else
				cout << "\nString 1 is greater than string 2";
			cout << endl;

			system("pause");
			break;

		case 5:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}

			while (1)
			{
				cout << "\nPress 1 to copy string 2 into string 1\nPress 2 to copy string 1 into string 2\n>>\t";
				cin >> t;cin.ignore();
				if ((t == 1) || (t == 2))
					break;
			}
			if (t == 1)
				s.copy(str1, str2);
			else
				s.copy(str2, str1);
			cout << endl;
			system("pause");
			break;

		case 6:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}
			temp = s.concatenate(str1, str2);
			s.setValues(temp, str2);
			cout << "\nConcatenated value of str1 is : " << temp;
			cout << endl;
			system("pause");
			break;

		case 7:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}
			cout << "\nPlease enter word to search\n>>\t";
			getline(cin, temp);

			t = s.searchWord(temp);

			if (t == 1)
				cout << "\nWord in string 1";
			else if (t == 2)
				cout << "\nWord in string 2";
			else if (t >= 3)
				cout << "\nWord both in string 1 and string 2";
			else
				cout << "\nWord not found";
			cout << endl;
			system("pause");
			break;

		case 8:
			if (inp == 0)
			{
				cout << "\nPlease set values of string first";
				cout << "\nPress 1 to set values\n\n";
				system("pause");
				break;
			}
			cout << "\nPlease enter character to search\n>>\t";
			cin.get(ch);
			t=s.searchChar(ch);

			if (t == 1)
				cout << "\nCharacter in string 1";
			else if (t == 2)
				cout << "\nCharacter in string 2";
			else if (t >= 3)
				cout << "\nCharacter both in string 1 and string 2";
			else
				cout << "\nCharacter not found";

			cout << endl;
			system("pause");
			break;

		case 10:
			cout << "\nThank you!\nGoodbye!:)\n\n\n";
			break;

		default:
			cout << "\nPlease Enter a valid input!";
			cout << endl;
			system("pause");
			break;
		}
	}


	return 0;
}

void stringType::setValues(string str, string stR)
{
	str1 = str;
	str2 =stR;
}

void stringType::printValues()
{
	cout << "\nString 1 is : " << str1;
	cout << "\nString 2 is : " << str2;
}

int stringType::maxLength()
{
	int i = 0, j = 0;
	for (;str1[i] != '\0';i++);
	for (;str1[j] != '\0';j++);
	
	if (i > j)
	{
		cout << "\nMax length is : " << i;
		return 1;
	}
	else
	{
		cout << "\nMax length is : " << j;
		return 0;
	}

	return i;
}

int stringType::compare(string str1, string str2)
{
	if (str1 == str2)
		return 0;
	else if (str1 > str2)
		return 1;
	else
		return -1;
}

void stringType::copy(string source, string destination)
{
	destination = source;
	setValues(destination, source);
	cout << "\nCopied successfully!";
}

string stringType::concatenate(string s1, string s2)
{
	s1 = s1 + " " + s2;
	return s1;
}

int sizeOfStr(string s)
{
	int i = 0;
	for (;s[i] != '\0';i++);
	return i;
}

int stringType::searchWord(string word)
{
	int count = 0, count1 = 0, j = 0;
	int found = 0, found1 = 0;

	for (; word[count] != '\0'; count++)
	{
		for (int i = 0; str1[i] != '\0'; i++)
		{
			if (str1[i] == word[j])
			{
				j++;
				count1++;
				if (count1 == count)
					found = 1;
			}
			else 
			{
				count1 = 0;
				j = 0;
			}
		}
	}

	count = 0, count1 = 0, j = 0;

	for (; word[count] != '\0'; count++)
	{
		for (int i = 0; str2[i] != '\0'; i++)
		{
			if (str2[i] == word[j])
			{
				j++;
				count1++;
				if (count1 == count)
					found1 = 1;
			}
			else
			{
				count1 = 0;
				j = 0;
			}
		}
	}

	if (found > 0 && found1 > 0) 
		return 3;

	else if (found > 0) 
		return 1;

	else if (found1 > 0) 
		return 2;

	else return 0;
}

int stringType::searchChar(char ch)
{
	int c = 0;

	for (int i = 0; ((str1[i] != '\0') || (str2[i]) != '\0');i++)
	{
		if (str1[i] == ch)
			c += 1;
		if (str2[i] == ch)
			c += 2;

		if (c >= 1)
			break;
	}

	return c;
}