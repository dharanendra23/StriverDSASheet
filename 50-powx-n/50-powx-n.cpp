class Solution {
public:
    double myPow(double x, long n ) {
        
        double ans = 1;
        long val = n;
        bool isNegative = false;
        if(n < 0) {
            val = -n;
            isNegative = true;
        }

        while(val > 0) {
            
           if(val%2 == 0) {
               
               x = x * x;
               val /= 2;
           } 
            else {
                
                ans *= x;
                val--;
            }
        }
        
        if(isNegative) return 1 / ans;
        return ans;
    }
};