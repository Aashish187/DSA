// DIVIDE AND CONQUER TECHNIQUE
#include <iostream>
using namespace std;
// Forward Declaration
void merge(int arr[], int start, int mid, int end);
// Mergesort Function
void mergesort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
void merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, k = start;
    int temp[k];
    // Loop Till one subarray is completely traversed
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    // Loop for left subarray
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    // loop for right subarray
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    // copying to original array from temp array
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i];
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

    mergesort(arr, 0, n - 1);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
    }
    return 0;
}
