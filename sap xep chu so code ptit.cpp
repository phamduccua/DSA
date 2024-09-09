#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t; 
		while(t--){
			int n;  cin >> n;
			set<int> se;
			for(int i = 0;i<n;i++){
				string s; cin >> s;
				for(int i = 0;i<s.length();i++){
					se.insert(s[i]-'0');
				}
			}
			for(auto it : se){
				cout << it << ' ';
			}
			cout << endl;
		}
	}
