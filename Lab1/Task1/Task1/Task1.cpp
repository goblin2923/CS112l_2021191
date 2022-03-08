#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct students
{
    string name, program, reg;
    int co;
    double cgpa;
};

double marks(int mark)
{
    if (mark >= 86)
        return 4;
    else if ((mark >= 82) && (mark < 86))
        return 3.67;
    else if ((mark >= 78) && (mark < 82))
        return 3.3;
    else if ((mark >= 74) && (mark < 78))
        return 3;
    else if ((mark >= 70) && (mark < 74))
        return 2.67;
    else if ((mark >= 64) && (mark < 70))
        return 2.33;
    else if ((mark >= 50) && (mark < 64))
        return 2;
    else 
        return 1;

}



int main()
{
    students s[20], *sptr;

    sptr = s;
    //s[0].name = "Hammad"; s[0].program = "BSCS"; s[0].reg = 2021191; s[0].co = 5;

    for (int i = 0;i < 3;i++)
    {
        cout << "\nEnter the record of student no : " << i + 1 << endl << endl;
        cout << "\nEnter name:\t";
        getline(cin, s[i].name);
        cout << "\nEnter reg:\t";
        getline (cin, s[i].reg);
        cout << "\nEnter program:\t";
      // cin.ignore();
        getline(cin, s[i].program);
        cout << "\nEnter no of courses:\t";
        cin >> s[i].co;
      // cin.ignore();
        double x, y=0;
        for (int j = 0; j < s[i].co; j++)
        {
            
            cout << "\nEnter marks of course no " << j+1 << " : ";
            cin >> x;
            cin.ignore();
            y = marks(x) + y;
        }
        s[i].cgpa = (y * 3) / (s[i].co * 3);
    }

    cout << "\nS.No.\t\tName\t\tReg. No.\t\tDegree\t\tSGPA";
    for (int i = 0;i < 20;i++)
    {
        if (s[i].name == "\0")
            continue;
        else
        {
            cout << "\n    " << i + 1 << "\t\t" << s[i].name<<"\t\t" << s[i].reg << "\t\t\t" << s[i].program << "\t\t" << s[i].cgpa;
        }
    }


    for (int j = 0;j < 30;j++)
    {
        if (s[j].name == "\0")
            continue;

        for (int i = 0;i < 19;i++)
        {
            if (s[i].cgpa < s[i + 1].cgpa) 
            {
                students temp = s[i];
                s[i] = s[i+1];
                s[i + 1] = temp;
            }
        }

    }

    cout << "\nSorted list is: \n\n";
    cout << "\nS.No.\t\tName\t\tReg. No.\t\tDegree\t\tSGPA";
    for (int i = 0;i < 20;i++)
    {
        if (s[i].name == "\0")
            continue;
        else
        {
            cout << "\n    " << i + 1 << "\t\t" << s[i].name << "\t\t" << s[i].reg << "\t\t\t" << s[i].program << "\t\t" << s[i].cgpa;
        }
    }

    cout << "\nThe best student is";
    cout << "\n\n" << s[0].name << "\t\t" << s[0].reg << "\t\t" << s[0].program << "\t\t" << s[0].cgpa;

    return 0;
}
