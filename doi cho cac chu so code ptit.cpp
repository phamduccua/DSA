#include <bits/stdc++.h>
using namespace std;
long long maxx;
	void Try(string s,int k) {
		if(k == 0) return;
		for(int i = 0;i<s.length()-1;i++){
			for(int j = i+1;j<s.length();j++){
				if(s[i] < s[j]){
					swap(s[i],s[j]);
					maxx = max(maxx,stoll(s));
					Try(s,k-1);
					swap(s[i],s[j]);
				}
			}
		}
}
	int main(){
		int t; cin >> t;
		while(t--){
			int n;
			string s = "";
			cin >> n >> s ;
			maxx = stoll(s); 
			Try(s,n);
			cout << maxx << endl;
		}
	} 
