#include <bits/stdc++.h>
using namespace std;
int a[1001],used[1001],n,s,cnt;
int kq;
bool ok;
	void Try(int sum,int pos){
		for(int i = pos;i<n;i++){
				sum += a[i];
				cnt++;
				if(sum == s){
					kq = min(kq,cnt);
					ok = true;
				}
				else if(sum < s){
					Try(sum,i+1);
				}
				sum -= a[i];
				cnt--;
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			ok = false;
			cin >> n >> s;
			kq = INT_MAX;
			memset(used,0,sizeof(used));
			for(int i = 0;i<n;i++) cin >> a[i];
			Try(0,0);
			if(!ok) cout << -1 << endl;
			else{
				cout << kq << endl;
			}
		}
	}
