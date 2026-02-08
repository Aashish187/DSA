#include <iostream>
using namespace std;
// Swap Function
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Diving the array to two sub arrays
int partition(int a[], int low, int high)
{
    int pivot = a[low], i = low, j = high;
    while (i < j)
    {
        while (a[i] <= pivot && i <= high)
        {
            i++;
        }
        while (a[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[j], a[low]);
    return j;
}
// Divide and conquer the sub arrays
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pos = partition(arr, low, high);
        quicksort(arr, low, pos - 1);
        quicksort(arr, pos + 1, high);
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

    quicksort(arr, 0, n - 1);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}

