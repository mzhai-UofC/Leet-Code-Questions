class Solution {
public:
    double myPow(double x, int n) {
        double ans =1;
        if(n==0){ans=1;}
        
        else if(n>0){  
            for(int i=0;i<n;i++){
                 ans*=x;
             }
         }
        else{
            n=-n;
            for(int i=0;i<n;i++){
                ans*=x;
            }
            ans=1/ans;
        }
        return ans;
    }
};