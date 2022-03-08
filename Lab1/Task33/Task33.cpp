
#include <iostream>
#include <string>
using namespace std;

struct info
{
    string name, city, month;
    int age, year,day;
};

int main()
{
    info u[20];
    for (int i = 0;i < 2;i++)
    {
        cout << "\nEnter record of student no " << i + 1;

        cout << "\nEnter name: \t";
        getline(cin, u[i].name);
        cout << "\nEnter age: \t";
        cin >> u[i].age;
        cin.ignore();
        cout << "\nEnter city: \t";
        getline(cin, u[i].city);
        cout << "\n\nEnter D.O.B";
        cout << "\nEnter day: \t";
        cin >> u[i].day;
        cin.ignore();
        cout << "\nEnter month: \t";
        getline(cin, u[i].month);
        cout << "\nEnter year: \t";
        cin >> u[i].year;
        cin.ignore();
    }

    int day, year;
    string month;
    cout << "\n\nEnter D.O.B to check";
    cout << "\nEnter day: \t";
    cin >> day;
    cin.ignore();
    cout << "\nEnter month: \t";
    getline(cin, month);
    cout << "\nEnter year: \t";
    cin >> year;
    cin.ignore();


    for (int i = 0;i < 20;i++)
    {
        if ((u[i].day == day) && (u[i].month == month))
        {
            cout << "\nIt is " << u[i].name << "'s birthday. Happy birthday " << u[i].name;
        }
    }

    return 0;
}
