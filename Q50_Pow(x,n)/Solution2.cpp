class Solution2 {
public:
    double myPow(double x, int n) {
        long long N=n;
        return N>=0 ? quickMul(x,N): 1.0/quickMul(x,-N);
    }

    double quickMul(double x, long long N){
        double ans=1.0;
        double x_contribute =x; //each time N%2 =1, (eg.y*y*x) x is the current contribute

        //calculate the ans while bi-divide N
        while(N>0){
            if(N%2==1){
                // if the binary number in the min pos is 1, add to contribute
                ans*=x_contribute;
            }
            x_contribute*=x_contribute;
            N/=2;
        }
        return ans;
    }
};

//TC:O(LOG N)
//SC:O(1)