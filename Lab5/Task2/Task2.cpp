#include <iostream>

using namespace std;

class parity
{
private:
    static int size;
    int* a1 = new int[size];

public:
    parity() 
    {
        size = 1;
        for (int i = 0;i < size;i++)
        {
            a1[i] = 0;
        }
    }

    void put(int);
    void print(void);
    void del(int);
    int test(void);

    ~parity()
    {
        delete[] a1;
    }

};

int parity::size = 50;

int main()
{
    parity p;
    int x,y;
    while (1)
    {
        int x;
        system("cls");
        cout << "\nPress 1 to input\nPress 2 to delete\nPress 3 to display\nPress 4 to view if odd even \nPress 5 to exit\n>>\t";
        cin >> x;
        while (!(x > 0 && x <= 5))
        {
            cout << "\nPlease enter a valid input\n>>\t";
            cin >> x;
        }
        cin.ignore();
        switch (x)
        {
        case 1:
            cout << "\nEnter element to input\n>>\t";
            cin >> y;cin.ignore();
            p.put(y);
            cout << "\nAdded successfuly!";
            cout << endl;
            system("pause");
            break;

        case 2:
            /*cout << "\nEnter element to delete\n>>\t";
            cin >> y;cin.ignore();*/
            p.del(y);
            cout << "\nLast element sucessfully deleted!\n";
            system("pause");
            break;

        case 3:
            p.print();
            system("pause");
            break;

        case 4:
            cout << ((p.test()) ? "\nArray is even" : "\nArray is odd");
            cout << endl;
            system("pause");
            break;


        case 5:
            system("cls");
            cout << "\nThank you!";
            return 0;

        }

    }
    return 0;
}

void parity::put(int num)
{
   if (size == 1)
    {
        a1[0] = num;
        size++;
        return;
    }

    int* temp = new int[size];

    for (int i = 0; i < (size-1); i++)
        temp[i] = a1[i];

    delete[] a1;
    a1 = temp;
    a1[size-1] = num;
    size++;
    
}

void parity::print()
{
    cout << size;
    cout << "\nArray is:\n [ ";
    for (int i = 0;i < size-1;i++)
    {
        cout << a1[i] << " ";
    }
    cout << "]\n";
}

void parity::del(int num)
{
    if (size == 0)
    {
        cout << "\nArray empty :(";
        return;
    }
    size--;
    int* temp2 = new int[size];

    for (int i = 0; i < (size - 1); i++)
        temp2[i] = a1[i];
    delete[] a1;
    a1 = temp2;
}

int parity::test(void)
{
    if ((size-1) % 2 == 0)
        return 1;
    else 
        return 0;
}
