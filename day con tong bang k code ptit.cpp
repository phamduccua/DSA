#include <bits/stdc++.h>
using namespace std;
int used[1000];
int n;
bool ok;
long long tong,k;
int a[1000];
vector<int> tmp;
	void in(vector<int> v){
		cout << '[';
		for(int i = 0;i<v.size();i++){
			cout << v[i];
			if(i != v.size()-1){
				cout << ' ';
			}
		}
		cout << ']';
	}
	void Try(int pos){
		for(int j = pos;j <= n;j++){
			tong += a[j];
			tmp.push_back(a[j]);
			if(tong == k){
				ok = true;
				in(tmp);					
				cout << ' ';
			}
			else if(tong + a[j] <= k) Try(j+1);
			tmp.pop_back();
			tong -= a[j];
		}	
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> k;
			for(int i = 1;i<=n;i++){
				cin >> a[i];
			}
			tong = 0;
			sort(a+1,a+n+1);
			ok = false;
			memset(used,0,sizeof(used));
			Try(1);
			if(!ok) cout << -1;
			cout << endl;
		}
	}
