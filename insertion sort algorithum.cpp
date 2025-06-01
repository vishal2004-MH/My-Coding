#include<iostream>
using namespace std;

for main()
{
    int array[5] = { 15, 14, 17, 8, 9};
    int i, key, j;

    for (int i = 1; i < 5; i++)
    {
        key = array[i];
        j = i - 1;

        while(j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;

        }

        array[j + 1] = key;
    }

    cout << "sorted array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";

    }

    cout << endl;

    return 0;
}