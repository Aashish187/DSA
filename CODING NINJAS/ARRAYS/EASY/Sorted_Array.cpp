/*
It checks if the array is sorted or not
Time Complexity=O(n)
Space Complexity=O(1)
*/
int isSorted(int n, vector<int> a) {
    for ( int i =1;i<n;i++){
        if ( a[i-1]<=a[i]){
        }
        else return 0;
    }
    return 1;
}
