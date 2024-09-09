#include <bits/stdc++.h>
using namespace std;
vector<string> tmp;
int used[100];
	void Try(int i,int n,int k,vector<string> h,int pos){
		for(int j = pos;j<h.size();j++){
			if(!used[j]){
				used[j] = 1;
				tmp.push_back(h[j]);
				if(i == k-1){
					vector<string> nh(tmp.begin(),tmp.end());
					sort(nh.begin(),nh.end());
					for(auto it : nh){
						cout << it << ' ';
					}
					cout << endl;
				}
				else Try(i+1,k,n,h,j+1);
				tmp.pop_back();
				used[j] = 0;
			}
		}
	}
	int main(){
		int n,k; cin >> n >> k;
		set<string> se;
		memset(used,0,sizeof(used));
		for(int i = 0;i<n;i++){
			string s; cin >>s;
			se.insert(s);
		}
		vector<string> h(se.begin(),se.end());
		Try(0,k,n,h,0);
	}
