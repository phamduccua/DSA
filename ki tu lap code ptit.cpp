#include <bits/stdc++.h>
using namespace std;
int n;
bool ok;
int a[15];
string A[100];
int kc[100][100],kq;
	void ktao(){
		for(int i = 1;i<=n;i++){
			a[i] = i;
		}
	}
	void sinh(){
		int i = n-1;
		while(i >= 0 && a[i] > a[i+1]){
			--i;
		}
		if(i == 0) ok = false;
		else{
			int j = n;
			while(a[i] > a[j]) --j;
			swap(a[i],a[j]);
			reverse(a+i+1,a+n+1);
		}
	}
	int dem(string a,string b){
		int i = 0,j = 0;
		int cnt = 0;
		while(i < a.length() && j < b.length()){
			if(a[i] == b[j]){
				++cnt; ++i;++j;
			}
			else if(a[i] < b[j]) ++i;
			else ++j;
		}
		return cnt;
	}
	int add(){
		cin >> n;
		for(int i = 1;i<=n;i++){
				cin >> A[i];
		}
		ok = true;
		ktao();
		kq = INT_MAX;
		for(int i = 1;i<=n;i++){
			for(int j = i+1;j<=n;j++){
				kc[i][j] = kc[j][i] = dem(A[i],A[j]);
			}
		}
	}
	int result(){
		int ans = 0;
		for(int i = 1;i<=n-1;i++){
			ans += kc[a[i]][a[i+1]];
		}
		kq = min(kq,ans);
	}
	int main(){
		add();
		while(ok){
			result();
			sinh();
		}
		cout << kq << endl;
	}

