/*
Time Complexity : O(n**2) we used 2 for loops
Space Complexity : O(1) 
*/
#include<bits/stdc++.h>
using namespace std;
int missing(vector<int> &arr, int n ){
    // outer loop itertes from 1 to n+1 elements to check which element is missing
    for(int i =1;i<=n+1;i++){
        // if the element is found in the array , we set it to true and if it remains false the missing number is returned
        bool flag=false;
        // inner loop check the number in the array 
        for(int j=0;j<n;j++){
            if(arr[j] == i){
                flag=true;
                break;
            }
        }
        // if the number is not found , it is returned as missing number
        if(flag == false){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n ;
    cout<<"Enter the Number of Elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Array Elements: ";
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Missing Number is: "<<missing(arr,n);
    return 0;
}