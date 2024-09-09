#include <bits/stdc++.h>
using namespace std;
	int main(){
		stack<int> st;
		string s;
		while(cin >> s){
			if(s == "push"){
				int x; cin >> x;
				st.push(x);
			}
			else if(s == "pop"){
				st.pop();
			}
			else{
				int a[st.size()]; 
				int t = 0;
				if(st.empty()) cout << "empty" << endl;
				else{
					while(!st.empty()){
						a[t++] = st.top();
						st.pop();
					}
					for(int i = t-1;i>=0;i--){
						cout << a[i] << ' ';
						st.push(a[i]);
					}
					cout << endl;
				}
			}
		}
	}
