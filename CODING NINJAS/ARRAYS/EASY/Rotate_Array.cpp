// Rotates the array by k places 
/*
Time Complexity:O(n)
Space Complexity:O(1)

*/
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
vector<int> rotateArray(vector<int>arr, int k) {
    int n =arr.size();
    k=k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
     return arr;
}


/*
brute force Approach 
Time Complexity:O(n)
Space Complexity:O(n)
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    k=k % n;
    vector<int> temp;
    for( int i=0;i<k;i++){
        temp.emplace_back(arr[i]);
    }
    for( int i=k;i< n;i++){
        arr[i-k]=arr[i];
    }
    for ( int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
    return arr;
}
