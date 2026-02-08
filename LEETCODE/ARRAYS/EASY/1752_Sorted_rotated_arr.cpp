/*
This checks for array to be sorted or can be sorted by rotating it by any position once
by checking the breaks where the order breaks.
Time Complexity=O(n)
Space Complexity=O(1)
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        vector <int> b;
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
        }
        if (count==0){
            return true;
        }
        else if(count > 1){
            return false;
        }
        else{
          // checks if the last element is smaller than the first element so that rotation can be done.
            return nums[nums.size()-1]<=nums[0];
            }
        
        
    }
};
