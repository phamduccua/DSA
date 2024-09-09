#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
struct Data{
	ll suf,prf,ans,sum;
	Data(ll a = 0,ll b = 0,ll c = 0, ll d = 0) : suf(a),prf(b),ans(c),sum(d) {};
};
Data merge(Data L,Data R){
	Data x;
	x.sum = L.sum + R.sum;
	x.ans = max({L.ans,R.ans,L.suf + R.prf});
	x.prf = max(L.prf,L.sum + R.prf);
	x.suf = max(R.suf,R.sum + L.suf);
	return x;
}
const int N = 1e5 + 5;
int n;
int a[N];
Data solve(int l,int r){
	if(l == r) return Data(a[l], a[l], max(0,a[l]), a[l]);
	int m = (l + r) / 2;
	Data L = solve(l,m);
	Data R = solve(m+1,r);
	return merge(L,R);
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1;i<=n;i++) cin >> a[i];
		Data x = solve(1,n);
		cout << x.ans << endl;
	} 
	
}
