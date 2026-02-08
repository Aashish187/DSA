/*
BRUTE FORCE APPROACH : Using temp storage array 
TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(x) where x is the number of non zero elements.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> temp;
        for( int i =0; i<nums.size();i++){
            if(nums[i] != 0){
                temp.emplace_back(nums[i]);
            }
        }
        
        for (int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        for ( int i=temp.size();i<nums.size();i++){
            nums[i]=0;
        }
    }
};
