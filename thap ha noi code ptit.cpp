#include <bits/stdc++.h>
using namespace std;
	void chuyen(int n,int a,int b){
		cout << (char)a << " -> " << (char)b << endl;
	}
	void thapHaNoi(int n,char a,char b,char c){
		if(n == 1) chuyen(1,a,c);
		else{
			thapHaNoi(n-1,a,c,b);
			chuyen(n,a,c);
			thapHaNoi(n-1,b,a,c);
		}
	}
	int main(){
		int n; cin >> n;
		char a = 'A',b = 'B',c = 'C';
		thapHaNoi(n,a,b,c);
	}
