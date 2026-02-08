/*
It Finds the second Largest and Second Smallest Element in an array.
This is the optimal Approach, Better Approach is below this You can have a look of it.
Time Complexity : o(n)
Space Complexity : o(1)
*/

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest=a[0];
    int slargest=-1;
    for( int i=1;i<a.size();i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];

        }
        else if(a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }

    int smallest=a[0];
    int ssmall=INT_MAX;
    for ( int i =1;i<a.size();i++){
        if(a[i]<smallest){
            ssmall=smallest;
            smallest=a[i]; 
        }
        else if (a[i]!=smallest && a[i]<ssmall){
            ssmall=a[i];
        }
    }
    
    return {slargest,ssmall};


}



// Better Solution

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Better Approach
    int largest = arr[0];
    for ( int i =1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int s_largest=-1;
    for(int i =0;i<n;i++){
        if(arr[i]>s_largest && arr[i] !=largest){
            s_largest=arr[i];
        }
    }
    int smallest = arr[0];
    for ( int i =1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    int s_smallest=INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<s_smallest && arr[i] != smallest){
            s_smallest=arr[i];
        }
    }

    return {s_largest,s_smallest};

    


    
}

