#include<bits/stdc++.h>
using namespace std;
const int maxn = 104;
const int inf = 1e9+7;
int G[maxn][maxn];
int n,m;
void floyd(){
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                G[i][j] = min(G[i][j],G[i][k]+G[k][j]);
            }
        }
    }
}
inline void solve(){
    while(cin >> n >> m && (n||m)){
        memset(G,inf,sizeof(G));
        while(m--){
            int x,y,c;
            cin >> x >> y >> c;
            G[x][y] = G[y][x] = c;
        }
        floyd();
        cout << G[1][n]<<endl;
    }

}
int main(){
    // freopen("in.txt","r",stdin);
    solve();
    return 0;
}