/*
For Finding The Largest Element in the array
1.Brute Force Approach: Sort the Array and return the n-1 element which is not equal to the largest 
2.Optimal Approach: Consider the first element as largest and traverse the array finding greater element than it and update the largest
at the end of the array we will be left with the largest element.
Time Complexity=0(n)
Space Complexity=0(1)
*/

// OPTIMAL APPROACH
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int largest=arr[0];
    for ( int i =1;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
