// CODE:
class Solution {
public:
    int numWaterBottles(int t, int e) {
        int ans=t;
        int c=0;
        while(t>=e ){
           
        ans = ans+ t/e;
        t= t/e + t%e;
       
        }
    
return ans;

        
        
    }
};
