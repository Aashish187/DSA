#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for ( int i =1;i<n;i++){
        int key=arr[i];
        int j =i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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

    insertionsort(arr, n);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
