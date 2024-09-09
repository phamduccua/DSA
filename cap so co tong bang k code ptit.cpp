#include <bits/stdc++.h>
using namespace std;
	int dem(vector<int> a,int k,map<int,int> mp){
		int l = 0,r = a.size()-1;
		int cnt = 0;
		while(l<r){
			if(a[l] + a[r] == k){
				cnt += (mp[a[l]]*mp[a[r]]);
				++l;r--;
			}
			else if(a[l] + a[r] < k) ++l;
			else --r;
		}
		return cnt;
	}
	int main(){
		int t; cin >> t;
		while(t--){
			int n,k; cin >>n >> k;
			vector<int> a;
			map<int,int> mp;
			for(int i = 0;i<n;i++){
				int x; cin >> x;
				if(mp[x] == 0){
					a.push_back(x);
				}
				mp[x]++;
			}
            if(a.size()==1){
                int x = mp[a[0]];
                if(a[0] + a[0] == k){
                    cout << x*(x-1)/2 << endl;
                }
                else cout << 0 << endl;
                continue;
            }
            else{
                sort(a.begin(),a.end());
			    cout << dem(a,k,mp) << endl;
            }
			
		}
	}
