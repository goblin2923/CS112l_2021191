#include <iostream>
using namespace std;


int main()
{
    int size;
    cout << "\nEnter size of array\n>>\t";
    cin >> size;
    int* a1 = new int[size];
    int* a2 = new int[size];

    cout << "\nEnter array: [ ";
    for (int i = 0;i < size;i++)
        cin >> a1[i];
    cout << "]";

    cout << "\nResultant array: [ ";
    for (int i = 0;i < size-1;i++)       
        cout << a1[i + 1] - a1[i] << " ";
    cout << "]";


    delete[] a1;
    delete[] a2;

    return 0;
}
