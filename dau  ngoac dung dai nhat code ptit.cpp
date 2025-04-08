#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    stack<int> st;
    st.push(-1);  // Đẩy một giá trị mặc định vào để tính toán chiều dài
    int ans = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i); 
        } else {
            st.pop();  
            if (!st.empty()) {
                ans = max(ans, i - st.top());
            } else {
                st.push(i);
            }
        }
    }

    return ans;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        cout << solve(s) << endl;
    }
}
