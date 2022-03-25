
#include <iostream>
#include <string>

#define nMax 2
using namespace std;

class officer
{
private:
    int ID;
    string name, rank;
    static int counter;

public:
    //officer();
    ~officer();
    void setter();
    void check(int &);
    void t_officers();
};

int officer::counter;

//officer::officer()
//{
//    setter();
//}


int main()
{
    int inp, n=1, max_o=2;
    string contr;
    officer *p= new officer[max_o];

    bool sentinel = 1;
    for (int i = 0;sentinel;i++)
    {
        cout << "\nPress 1 to enter ID of officer";
        cout << "\nPress 2 to get total no of officers";
        cout << "\nPress 3 to exit";
        cout << "\n>>\t";
        cin >> inp;cin.ignore();
        switch (inp)
        {
        case 1:
            p[i].setter();
            p[i].check(i);

            system("pause");
            break;

        case 2:
            p[i].t_officers();
            system("pause");
            break;

        case 3:
            sentinel = 0;
            system("pause");
            break;

        default:
            cout << "\nPlease enter a valid input\n";
            break;
        }
        if (i + 1 == max_o)                           //checks if array will be able to accomodate data in next iteration
        {
            max_o += nMax;                            //dynamically increases officer array if needed
            officer* temp = new officer[max_o];
            for (int k = 0;k < max_o - nMax;k++)
                temp[k] = p[k];
            delete [] p;
            p = temp;
        }
    }
    return 0;
}


officer::~officer()
{
    counter--;
}

int pain(int no)
{
    int num = no;
    int digit = 0, palin = 0;
    while (num != 0)
    {
        digit = num % 10;
        palin = (palin * 10)+digit;
        num /= 10;
    }
    
    if (palin == no)
        return 0;
    else
        return 1;
}

void officer::setter()
{
    string n, r;
    string id;
    while (1)
    {
        cout << "\nEnter ID of officer\n>>\t";
        getline(cin, id);
        if (isdigit(id[0]))
        {
            ID = stoi(id);
            break;
        }
        else
            cout << "\nPlease enter a valid id";
    }

    cout << "\nEnter name of officer\n>>\t";
    getline(cin, n);
    cout << "\nEnter rank of officer\n>>\t";
    getline(cin, r);

    name = n;
    rank = r;

}

void officer::check(int &i)
{
    if (pain(ID))
    {
        cout << "\nThe officer is allowed to enter the restricted area\n";
        counter++;
    }
    else
    {
        cout << "\nThe officer is not allowed to enter the restricted area\n";
        i--;
    }
}

void officer::t_officers()
{
    cout << "\nTotal number of officers are : " << counter << endl;
}