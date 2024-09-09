#include <bits/stdc++.h>
using namespace std;
int n,x;
vector<vector<int>> v;
vector<int> tmp;
int a[1001];
bool ok;
	void Try(int sum,int pos){
		for(int i = pos;i<n;i++){
			sum += a[i];
			tmp.push_back(a[i]);
			if(sum == x){
				ok = true;
				v.push_back(tmp);
			}
			else if(sum < x){
				Try(sum,i);
			}
			sum -= a[i];
			tmp.pop_back(); 
		}
	}
	void in(vector<int> q){
		cout << '{';
		for(int i = 0;i<q.size();i++){
			cout << q[i];
			if(i != q.size()-1) cout << ' ';
		}
		cout << '}' << ' ';
	}
	int main(){
		int t; cin >> t;
		while(t--){
			cin >> n >> x;
			for(int i = 0;i<n;i++) cin >> a[i];
			ok = false;
			Try(0,0);
			if(!ok) cout << -1 << endl;
			else{
				cout << v.size() << ' ';
				for(int i = 0;i<v.size();i++){
					in(v[i]);
				}
				cout << endl;
			}
		}
	}
