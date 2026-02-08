// Moves all the Zeros to the end of the array.
/*
OPTIMAL APPROACH : Using two pointer approach
TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1) 
*/
void pushZeroesEnd(int *input, int size)
{
    int j=-1;
    for( int i=0;i<size;i++){
        if(input[i] == 0){
            j=i;
            break;
        }
    }
    if( j==-1){
        return ;
    }

    for( int i=j+1;i<size;i++){
        if(input[i] != 0){
            swap(input[i],input[j]);
            j++;
        }
    }
}
/*
BRUTE FORCE APPROACH : Using temp storage array 
TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(x) where x is the number of non zero elements.
*/
#include <bits/stdc++.h>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
  // Temporary array to store non-zero elements
    vector <int> temp;
    for( int i =0; i<size;i++){
        if (input[i] != 0){
            temp.emplace_back(input[i]);
        }
    }
  // copying elements back to the original array
    for(int i=0;i<temp.size();i++){
        input[i]=temp[i];
    }
  // making rest of the elements zero
    for(int i =temp.size();i<size;i++){
        input[i]=0;
    }
}
