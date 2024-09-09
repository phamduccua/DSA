#include <bits/stdc++.h>
using namespace std;
	int dem(string s,stack<char> st){
		int cnt = 0;
		int maxx = INT_MIN;
		for(int i = 0;i<s.length();i++){
			if(s[i] == '(') st.push(s[i]);
			else if(s[i] == ')'){
				if(!st.empty()){
					cnt += 2;
					st.pop();
				}
				else{
					maxx = max(maxx,cnt);
					cnt = 0;
					while(!st.empty()){
						st.pop();
					} 
				}
			}
			maxx = max(maxx,cnt);
		}
		return maxx;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			string s; cin >> s;
			stack<char> st;
			int count = dem(s,st);
			cout << count << endl;
		}
	}
