/*
Time Complexity = O(n**2)
Space Complexity = O(1)
*/

#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for( int i =0; i<n;i++){
        for( int j =0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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

    bubblesort(arr,n);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j]<<" ";
    }
    return 0;
}
