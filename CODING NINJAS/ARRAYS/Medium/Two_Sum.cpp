#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
// brute method
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n){
	vector<pair<int,int>> nums;
	vector<bool> used(n,false);
	for(int i =0 ;i<n;i++){
		if(used[i] == true){ continue ;}
		for(int j=i+1;j<n;j++){
			if( (used[j] == false) &&((arr[i]+arr[j]) ==  target)){
				nums.push_back({arr[i],arr[j]});
				used[i]=true;
				used[j]=true;
				break;
			}
		}
	}
	if(nums.size() == 0){
		nums.push_back({-1,-1});
		}
	return nums;
}
