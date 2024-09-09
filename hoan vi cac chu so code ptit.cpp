#include <bits/stdc++.h>
using namespace std;
int x[1001];
string a[1001];
int n,k;
bool ok;
	void sinh(){
		int i = k-2;
		while(i >= 0 && x[i] > x[i+1]){
			--i;
		}
		if(i == -1) ok = false;
		else{
			int j = k-1;
			while(x[i] > x[j]) --j;
			swap(x[i],x[j]);
			reverse(x+i+1,x+k);
		}
	}
	int kq(){
		string nh[1001];
		for(int i = 0;i<n;i++){
			string tmp = "";
			for(int j = 0;j<k;j++){
				tmp += a[i][x[j]];
			}
			nh[i] = tmp;
		}
		sort(nh,nh+n);
		int maxx = stoi(nh[n-1]);
		int minn = stoi(nh[0]);
		return maxx - minn;
	}
	int main(){
		cin >> n >> k;
		for(int i = 0;i<n;i++) cin >> a[i];
		for(int i = 0;i<k;i++) x[i] = i;
		int minn = INT_MAX;
		ok = true;
		while(ok){
			minn = min(minn,kq());
			sinh();
		}
		cout << minn << endl;
	}

