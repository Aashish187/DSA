/*
 Optimal Approach
Time complexity:O(n)
Space complexity:O(1)
reverse the array at it's place without additional memory.
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
