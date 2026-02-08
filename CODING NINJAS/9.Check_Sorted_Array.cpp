int isSorted(int n, vector<int> a) {
  /*
  traverses through the array and checks if the previous element 
  is smaller or equal to the next element and return 1 if true 
  else returns 0 is false.
  Time Complexity=O(n) due to for loop 
  space complexity=O(1) no extra variable used
  */
    for ( int i =1;i<n;i++){ 
        if ( a[i-1]<=a[i]){
        }
        else return 0;
    }
    return 1;
}
