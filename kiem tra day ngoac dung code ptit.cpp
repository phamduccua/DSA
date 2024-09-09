#include <bits/stdc++.h>
using namespace std;
	bool kt(string s,stack<char> st){
		for(int i = 0;i < s.length();i++){
			if(s[i] == '[' || s[i] == '{' || s[i] == '(') st.push(s[i]);
			else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
				if(st.empty()) return false;
				else{
					if(s[i] == ')' && st.top() == '(') st.pop();
					else if(s[i] == ']' && st.top() == '[') st.pop();
					else if(s[i] == '}' && st.top() == '{') st.pop();
					else return false;
				}
			}
		}
		if(st.empty()) return true;
		else return false;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			stack<char> st;
			string s; cin >> s;
			if(kt(s,st)) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	} 
