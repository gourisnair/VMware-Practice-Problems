#include<bits/stdc++.h>
using namespace std;
int minDifference(int a[], int l) {
    int min = INT_MAX, diff = 0;
    sort(a, a+l);
    for(int i = 0; i < l; i++) {
        diff = abs(a[i+1] - a[i]);
        if(min > diff) {
            min = diff;
        }
    }
    return min;
    
}
int main() {
	int n, t;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    int diff = minDifference(a, n);
	    cout << diff << endl;
	}
	return 0;
}
