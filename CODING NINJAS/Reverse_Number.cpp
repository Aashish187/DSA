  // CODE IS USED FOR EXTRACTING ALL DIGITS OF A NUMBER AND REVERSE IT.
    /*
    The logic is to divide the number with 10 and the remainder will be the last digit
    then update the the number to extract the next digit .
    Time complexity is O(n) due to while loop
    Space complexity is O(1) the variable gets updated but there is only one temp variable
    */
#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	long long int reverse= 0;
	while ( n>0){
		int lastDigit=n%10;
		reverse=reverse*10+lastDigit;
		n=n/10;
	}
	return reverse;
}
