#define m 1000000007


// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        vector<long long int>dparr(n+2, 0);
        dparr[1] = 1;
        dparr[2] = 1;
        for(int i = 3; i <= n; i++) {
            dparr[i] = (dparr[i-1]%m+dparr[i-2]%m)%m;
        }
        return dparr[n];
    }
};
