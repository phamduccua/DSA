#include <bits/stdc++.h>
using namespace std;
int a[1001];
int n,k;
vector<int> tmp;
	void Try(int i,int cnt){
		for(int j = i;j<n;j++){
			tmp.push_back(a[j]);
			cnt ++;
			if(cnt == k){
				for(int i = 0;i<tmp.size();i++) cout << tmp[i] << ' ';
				cout << endl;
			}
			else Try(j+1,cnt);
			tmp.pop_back();
			cnt--;
		}
	}
	int main(){
		int t; cin>> t;
		while(t--){
			cin >> n >> k;
			for(int i = 0;i<n;i++) cin >> a[i];
			sort(a,a+n);
			Try(0,0);
			cout << endl;
		}
	}
