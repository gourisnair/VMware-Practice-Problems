#include <bits/stdc++.h>
using namespace std;
#define m 1000000007 //for bigger Ns, the value can be really big. So to avoid that, it was asked in the question to take modulu with 1000000007


// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        vector<long long int>dparr(n+1, 0); //(n+1) to take care of the first fibonacci number 0;
        dparr[1] = 1;
        dparr[2] = 1;
        for(int i = 3; i <= n; i++) {
            dparr[i] = (dparr[i-1]%m+dparr[i-2]%m)%m;
        }
        return dparr[n];
    }
};
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonaccy(n) <<endl;
    }
    return 0;
}
