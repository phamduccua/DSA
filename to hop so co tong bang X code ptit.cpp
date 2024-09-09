#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int a[1001];
int n,k;
bool ok;
	void in(vector<int> v){
		cout << '[';
		for(int i = 0;i<v.size();i++){
			cout << v[i];
			if(i != v.size()-1) cout << ' ';
		}
		cout << ']';
	}
	void Try(int sum,int pos){
		for(int i = pos;i<n;i++){
			sum += a[i];
			v.push_back(a[i]);
			if(sum == k){
				in(v);
				ok = true;
			}
			else if(sum < k){
				Try(sum,i);
			}
			sum -= a[i];
			v.pop_back();
		}
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> k;
			for(int i = 0;i<n;i++) cin >> a[i];
			sort(a,a+n);
			Try(0,0);
			if(!ok) cout << -1 << endl;
			else{
				cout << endl;
			}
		}
	}
