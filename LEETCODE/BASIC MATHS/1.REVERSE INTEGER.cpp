class Solution {
public:
    int reverse(int x) {
        // VARIABLE TO STORE REVERSED NUMBER
        long revNum=0; 
        while(x!=0){  // TAKES BOTH POSITIVE AND NEGATIVE NUMBER EXCEPT ZERO
            // EXTRACTS LAST DIGIT        
            int lastDigit=x%10; 
            //UPDATES X 
            x/=10;
            revNum=(revNum*10)+lastDigit;
        }
      // TO CHECK FOR INT OVERFLOW AND LIMIT THE SIZE TO 32 BIT INT
        if (revNum> INT_MAX || revNum<INT_MIN){
            return 0;
        }
        return revNum;
        
    }
};
