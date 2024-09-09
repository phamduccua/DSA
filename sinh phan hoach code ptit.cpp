#include <bits/stdc++.h>
using namespace std;
int a[1001],cnt,n;
bool ok;
	void ktao(){
		cnt = 1;
		a[1] = n;
	}
	void sinh(){
		int i = cnt;
		while(i >= 1 && a[i] == 1){
			--i;
		}
		if(i == 0) ok = false;
		else{
			a[i]--;
			int thieu = cnt - i + 1;
			int x = thieu/a[i];
			int y = thieu%a[i];
			cnt = i;
			for(int j = 1;j<=x;j++){
				a[cnt+1] = a[i];
				++cnt;
			}
			if(y){
				a[cnt + 1] = y;
				++cnt;
			}
		}
	}
	void in(){
		cout << '(';
		for(int i = 1;i<=cnt;i++){
			cout << a[i];
			if(i != cnt) cout << ' ';
		}
		cout << ')';
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n;
			ok = true;
			memset(a,0,sizeof(a));
			ktao();
			while(ok){
				in();
				cout << ' ';
				sinh();
			}
			cout << endl;
		}
	}
