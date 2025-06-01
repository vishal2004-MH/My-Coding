#include<iostream>
using namespace std;

int Divide(int array[], int start, int end)
{
    int pivot = array[end];
    int p = start;

    for (int i = start; i < end; i++)
    {
        if (array[i] < pivot)
        {
            int temp = array[p];
            array[p] = array[i];
            array[i] = temp;
            p++;
        }
    }

    int temp1 = array[end];
    array[end] = array[p];
    array[p] = temp1;

    return p;
}

void Quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p_index = Divide(arr, start, end);

        Quicksort(arr, start, p_index - 1);
        Quicksort(arr, p_index + 1, end);

    }

}

int main()
{
    int array[5] = { 20, 10, 50, 40, 30 };
    int start = 0, end = 4;

    Quicksort(array, start, end);

    cout << "Sorted Array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arrray[i] << " ";
    }

    cout << endl << endl;

    return 0;

}