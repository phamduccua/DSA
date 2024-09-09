#include <bits/stdc++.h>
using namespace std;
	int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			for(int i = 0;i<n;i++){
				cin >> a[i];
			}
			string s1 = "";
			string s2 = "";
			sort(a,a+n);
			for(int i = 0;i<n;i++){
				if(i % 2==0){
					s1 += to_string(a[i]);
				}
				else s2 += to_string(a[i]);
			}
			long long c = stoll(s1);
			long long b = stoll(s2);
			cout << (long long)(c+b) << endl;
		}
	}
