#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string s) {
    stack<char>st;
    char tmp;
    int l = s.length();
    for(int i = 0; i < l; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
            continue;
        }
        if(st.empty()) {
            return false;
        }
        switch(s[i]) {
            case ')': tmp = st.top();
            st.pop();
            if(tmp == '{' || tmp == '[') {
                return false;
            }
            break;
            case '}': tmp = st.top();
            st.pop();
            if(tmp == '(' || tmp == '[') {
                return false;
            }
            break;
            case ']': tmp = st.top();
            st.pop();
            if(tmp == '(' || tmp == '{') {
                return false;
            }
            break;
        }
    }
    return(st.empty());
}
int main() {
    string s;
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        if(isBalanced(s)) {
            cout << "Balanced" << endl;
        } else {
            cout << "Not Balanced" << endl;
        }
    }
    return 0;
}
