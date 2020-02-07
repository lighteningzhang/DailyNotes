#include<bits/stdc++.h>
using namespace std;
const int maxn = 104;
int n,m,ans;
const int inf = 0x3f3f3f3f;
int G[maxn][maxn],vis[maxn];
template<class T> inline void checkMin(T &a,const T b){if (b<a) a=b;}
template<class T> inline void checkMax(T &a,const T b){if (a<b) a=b;}
// #define intxt

void dfs(int u,int dis){
    if(dis>ans){
        return;
    }
    if(u==n){
        checkMin(ans,dis);
        return;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i] && G[u][i]!=inf && i!=u){
            
            vis[i] = 1;
            dfs(i,dis+G[u][i]);
            vis[i] = 0;//取物1~n
        }
    }
}
inline void solve(){
    while(cin >> n >> m &&(m||n)){
        ans = inf;
        memset(vis,0,sizeof(vis));
        memset(G,inf,sizeof(G));
        while(m--){
            int x,y,c;
            cin >> x >> y>>c;
            G[x][y] = G[y][x] =c;
        }
        dfs(1,0);
        cout << ans <<endl;
    }
}
int main(){
    #ifdef intxt
    freopen("in.txt","r",stdin);
    #endif
    solve();
    return 0;
}