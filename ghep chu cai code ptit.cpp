#include <bits/stdc++.h>
using namespace std;
int n;
int used[1000];
int a[1000];
	int kt(){
		for(int k = 2;k<n;k++){
			if((char)(a[k]+64) == 'A' && (char)(a[k-1]+64) != 'A' && (char)(a[k-1]+64) != 'E' && (char)(a[k+1]+64) != 'A' && (char)(a[k+1]+64) != 'E')
				return 0;
			else if((char)(a[k]+64) == 'E' && (char)(a[k-1]+64) != 'A' && (char)(a[k-1]+64) != 'E' && (char)(a[k+1]+64) != 'A' && (char)(a[k+1]+64) != 'E')
				return 0;
		}
		return 1;
	}
	void Try(int i){
		for(int j = 1;j<=n;j++){
			if(!used[j]){
				used[j] = 1;
				a[i] = j;
				if(i == n){
					if(kt()){
						for(int k = 1;k<=n;k++){
							cout << (char)(a[k]+64);
						}
						cout << endl;
					}
				}
				else Try(i+1);
				used[j] = 0;
			}
		}
	}
	int main(){
		char c; cin >> c;
		n = c-64;
		memset(used,0,sizeof(used));
		Try(1);
	}
