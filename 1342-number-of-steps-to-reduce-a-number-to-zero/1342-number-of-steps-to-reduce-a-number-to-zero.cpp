class Solution {
public:
    int numberOfSteps(int num) {
        
        int numOfSteps = 0;
        while(num) {
            
            if(num & 1) {
                num--;
            }
            else {
                num = num >> 1;
            }
            numOfSteps++;
        }
        return numOfSteps;
    }
};