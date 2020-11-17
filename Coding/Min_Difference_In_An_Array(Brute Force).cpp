#include<bits/stdc++.h>
using namespace std;
int minDifference(int a[], int l) {
    int min = INT_MAX, diff = 0;
    for(int i = 0; i < l; i++) {
        for(int j = i+1; j < l; j++) {
            diff = abs(a[i] - a[j]);
            if(min > diff) {
                min = diff;
            }
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
