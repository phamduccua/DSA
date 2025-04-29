#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
    int main(){
        int t; cin >> t;
        while(t--){
            memset(dp,0,sizeof(dp));
            int n,V; cin >> n >> V;
            int w[n+5],c[n+5];
            for(int i = 1;i <= n;i++){
                cin >> w[i];
            }
            for(int i = 1;i <= n;i++){
                cin >> c[i];
            }
            for(int i = 1;i <= n;i++){
                for(int v = 0;v <= V; v++){
                    dp[i][v] = dp[i-1][v];
                    if(v >= w[i]){
                        dp[i][v] = max(dp[i-1][v], dp[i-1][v - w[i]] + c[i]);
                    }
                }
            }
            cout << dp[n][V] << endl;
        }
    }