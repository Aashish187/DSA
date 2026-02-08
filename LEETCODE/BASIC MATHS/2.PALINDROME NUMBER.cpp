class Solution {
public:
    bool isPalindrome(int x) {
        // Store a Temp variable to compare the initial Value 
        int temp=x;
        long reverse=0;
        // Discards Negative Numbers
        if (temp<0){return false;}
        while(x!=0){
           int lastDigit= x%10;
           reverse=(reverse*10)+lastDigit;
           x=x/10;
        }
        // 32 bit int overflow restriction
        if (temp>INT_MAX || temp<INT_MIN){
            return 0;}
        // check if the number is equal to its reverse 
        // PALINDROME CONDTION
        return temp==reverse;
        }
        
};
