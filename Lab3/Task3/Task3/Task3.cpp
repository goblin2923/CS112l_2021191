#include <iostream>
using namespace std;


int main()
{
    int size;
    cout << "\nEnter size of array\n>>\t";
    cin >> size;
    int* a1 = new int[size];
    int* neg = new int[size];
    int* pos = new int[size];


    cout << "\nEnter array\n";
    for (int i = 0;i < size;i++)
    {
        cout << ">>\t";
        cin >> a1[i];
    }
    
    int negc = 0, posc = 0;
    for (int i = 0;i < size;i++)
    { 
        if (a1[i] < 0)
        {
            neg[negc] = a1[i];
            a1[i] = 0;
            negc++;
            continue;
        }
        if (a1[i] >= 0)
        {
            pos[posc] = a1[i];
            posc++;
            continue;
        }
    }

    for (int i = 0;i < posc;i++)
        a1[i] = pos[i];
    

    for (int i = posc;i < (posc+negc);i++)
        a1[i] = neg[i-posc];  
    
    
    for (int i = 0;i < size;i++)
        cout << a1[i] << " ";
    
    

    delete[] a1;
    delete[] pos;
    delete[] neg;

    return 0;
}
