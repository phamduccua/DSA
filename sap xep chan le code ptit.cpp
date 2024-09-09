#include <bits/stdc++.h>
using namespace std;
	int main(){
		int n; cin >> n;
		vector<int> ch;
		vector<int> l;
		for(int i = 1;i<=n;i++){
			int x; cin >> x;
			if(i%2){
				l.push_back(x);
			}
			else ch.push_back(x);
		}
		sort(l.begin(),l.end());
		sort(ch.begin(),ch.end(),greater<int>());
		cout << ch.size() << endl;
		for(int i = 1;i<=n;i++){
			if(i%2){
				cout << l[(int)i/2] << ' ';
			}
			else cout << ch[(int)i/2-1] << ' ';
		}
	}
