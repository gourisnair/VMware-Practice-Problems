#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int>a) {
    int l = a.size();
    int max_so_far = 0, max_end_here = 0;
    for(int i = 0; i < l; i++) {
        max_end_here += a[i];
        if(max_end_here < 0) {
            max_end_here = 0;
        }
        if(max_so_far < max_end_here) {
            max_so_far = max_end_here;
        }
    }
    return max_so_far;
    
}
int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) {
        cin >>a[i];
    }
    int sum = maxSubArraySum(a);
    cout <<sum;
    return 0;
}
