#include <iostream>
#include  <string>
using namespace std;

class coordinator;

class person
{
private:
    string compame;


public:
    void setter();

    friend class coordinator;

};

class coordinator
{
private:
    static int room;
public:
    person p1, p2;

    void set()
    {
        p1.setter();
        p2.setter();
    }
    void chegg();
};

int coordinator::room=10;
void person::setter() 
{
    string cop;
    cout << "\nEnter the competition and university name\n>>\t";
    getline(cin, cop);
    compame = cop;
}

int finder(string s)
{
    int i = 0;
    int j = 0;
    
    for (;s[i] != ' ';i++)
    {
        if (s[i] == '\0')
            return -1;
    }

    return i;
}
void coordinator::chegg()
{
    char uni1[50] = {};
    char uni2[50] = {};


    int i = finder(p1.compame), j= finder(p2.compame);

    if (i == -1 || j == -1)
    {
        cout << "\nPlease enter both competition and university name";
        return;
    }

    int k = 0, l = 0;
    for (;p1.compame[i] != '\0';i++,k++)
        uni1[k] = p1.compame[i];
    uni1[k] = '\0';
    for (;p2.compame[j] != '\0';j++,l++)
        uni2[l] = p2.compame[j];
    uni2[l] = '\0';

    if (!strcmp(uni1,uni2))
    {
        cout << "\nMessage from coordinator: Person1 and Person2 are roommates, and room number is " << room;
        room++;
    }
    else
        cout << "\nMessage from coordinator: Person1 and Person2 are not roommates";

}

int main()
{
    string cop, a;
    person p1, p2;
    coordinator c1;
    while (1)
    {
        c1.set();
        c1.chegg();
        cout << "\nWould you like to try again?\tY/N\n>>\t";
        getline(cin, a);

        if (a == "n" || a == "N")
            break;
        
    }
    return 0;
}

