/*
Used to remove duplicates from a sorted array.
*/

/*
Optimal Approach By Using Two Pointer Method : 
Time Complexity=O(n)
Space Complexity=O(1)
*/
int removeDuplicates(vector<int> &arr, int n) {
	int i =0;
	for (int j=1;j<n;j++){
		if(arr[j] != arr[i]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
/*
 Brute Force Approach
 Time Complexity =O(nlogn+n)
 Space Complexity =O(n)
 */
# include <bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	set <int> st;
	for(int i =0; i<n;i++){
		st.insert(arr[i]);
	}
	int index=0;
	for (auto it: st){
		arr[index]=it;
		index++;
	}
	return index;
}
