/*
This problem removes duplicates from the Sorted Array.
*/

/* Optimal Approach 
Two Pointer Approach
Time Complexity =O(n)
Space Complexity=O(1)
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for (int j=1;j<nums.size();j++){
            if(nums[j] != nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }   
        return i+1;
    }
};
/*
Brute Force Approach: Use of set to store unique elements.
Time Complexity=O(nlogn)+O(n)
Space Complexity=O(n)
*/
# include <bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int index=0;
        for(auto it:st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};
