#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "\nEnter size of array\n>>\t";
    cin >> size;
    int* a1 = new int[size];

    cout << "\nEnter array\n";
    for (int i = 0;i < size;i++)
    {
        cout << ">>\t";
        cin >> a1[i];
    }

    int big, sbig, small, ssmall;
    big = sbig = a1[-1];
    cout << a1[-1];
    small = ssmall = a1[size / 2];

    for (int i = 0;i < size;i++)
    {
        if (big < a1[i])
            big = a1[i];
    }

    for (int i = 0;i < size;i++)
    {
        if ((sbig < a1[i])&&(a1[i]!=big))
            sbig = a1[i];
    }


    for (int i = 0;i < size;i++)
    {
        if (small > a1[i])
            small = a1[i];
    }

    for (int i = 0;i < size;i++)
    {
        if ((ssmall > a1[i]) && (a1[i] != small))
            ssmall = a1[i];
    }

    cout << "\nSecond highest  : " << sbig;
    cout << "\nSecond smallest : " << ssmall;


    delete[] a1;
    return 0;
}
