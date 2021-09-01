#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int a[mid - l + 1], b[r - mid]; //temp arrays
    int i = 0, j = 0, k = l;

    for (int i = 0; i < mid - l + 1; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < r - mid; i++)
        b[i] = arr[mid + 1 + i];

    while (i < mid - l + 1 && j < r - mid)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < mid - l + 1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < r - mid)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // return 0;
}

//time complexity

//