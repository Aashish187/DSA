// Time complexity is O(2^n) because every recursive call again gets called 2 times until base condition or value is achieved
// Space Complexity is O(n) due to recursive stack
class Solution {
public:
    int fib(int n) {
        if (n<=1){
            return n;
        }
      // using multiple recursion 
        return fib(n-1)+fib(n-2);   
    }
};
