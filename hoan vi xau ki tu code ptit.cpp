#include <bits/stdc++.h>
using namespace std;
int used[1000];
int a[1000];
int n;
string s;
	void Try(int i){
		for(int j = 1;j <= n;j++){
			if(!used[j]){
				used[j] = 1;
				a[i] = j;
				if(i == n){
					for(int k = 1;k<=n;k++){
						cout << s[a[k]-1];
					}
					cout << ' ';
				}
				else Try(i+1);
				used[j] = 0;
			}
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> s;
			n = s.length();
			memset(used,0,sizeof(used));
			Try(1);
			cout << endl;
		}
	}
