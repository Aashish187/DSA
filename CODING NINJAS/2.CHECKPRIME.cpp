// Time complexity : O(sqrt(n)) iterations in loop are reduced
// Space Complexity : O(1) uses only one extra variable Count and Updates it 


bool isPrime(int n)
{
	// counter for storing divisors
	int count =0;
	// looping through just half values to reduce time complexity 
	/*
 	ex n=12
     	factors:
	 1*12
    	2*6
	3*4
 from here factors start repeating by n/i 
	4*3
	6*2
	12*1	
 */
	for ( int i =1;i*i<=n;i++){
		if ( n%i==0){
			count ++;
			if (n/i !=i){ // avoiding counting duplicate values 
				count++;
			}
		}
	}
	// retuns true if number is prime else returns false
	return (count ==2);
}
