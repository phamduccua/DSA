#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> tmp;
	void Try(int n,int min){
		if(n == 0){
			v.push_back(tmp);
			return;
		}
		else{
			for(int i = n;i>=min;i--){
				tmp.push_back(i);
				Try(n-i,i);
				tmp.pop_back();
			}
		}
	}
	void in(vector<int> v){
		cout << '(';
		for(int i = 0;i<v.size();i++){
			cout << v[i];
			if(i != v.size()-1) cout << ' ';
		}
		cout << ')' << ' ';
	}
	int main(){
		int t; cin >> t;
		while(t--){
			v.clear();
			int n;
			cin >> n;
			Try(n,1);
			cout << v.size() << endl;
            // for(auto it : v){
			// 	sort(it.begin(),it.end(),[](int a,int b)->bool{
			// 		return a > b;
			// 	});
			// }
			// sort(v.begin(),v.end(),[](vector<int> a,vector<int> b)->bool{
			// 	return a > b;
			// });
            for(auto it : v){
                in(it);
            }
			cout << endl;
		}
	}
