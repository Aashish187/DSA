// My Code
// Time Complexity =0(n)
// Space Complexity =0(1)
int linearSearch(int *arr, int n, int x)
{
    int i = -1;
    for(int j=0;j<n;j++){
        if(arr[j]==x){
            i=j;
            break;
        }
    }
    return i;
}

// Striver Approach
int linearSearch(int *arr, int n, int x)
{
    for( int i =0;i<n;i++){
        if(arr[i]==x){
            return i;
        }    
    }
            return -1;
}
