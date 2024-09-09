#include <bits/stdc++.h>
using namespace std;
int n;
string s;
vector<char> v;
	 void in(vector<char> v){
	 	for(int i = 0;i<v.size();i++){
	 		cout << v[i];
		 }
		 cout << ' ';
	 }
	void Try(int pos){
		for(int i = pos;i<n;i++){
			v.push_back(s[i]);
			in(v);
			Try(i+1);
			v.pop_back();
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> s;
			sort(s.begin(),s.end());
			Try(0);
			cout << endl;
		}
	}
