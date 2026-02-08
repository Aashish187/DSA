#include <iostream>
using namespace std;
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        int temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter the Number of elements: ";
    cin >> n;
    cout << "Enter the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionsort(arr, n);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
