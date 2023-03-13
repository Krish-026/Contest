#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[11][11];
bool vis[11][11];
int h,w,ans;

void dfs(int x, int y,unordered_set<int>st) {
    if(x == h && y == w) {
        ans++;
        return;
    }
    if(st.count(a[x][y])){
        return;
    }
    else
        st.insert(a[x][y]);
    vis[x][y] = true;
    if(x+1 <= h && !vis[x+1][y]) dfs(x+1,y,st);
    if(y+1 <= w && !vis[x][y+1]) dfs(x,y+1,st);
    vis[x][y] = false;
}

signed main() {
    cin>>h>>w;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            cin>>a[i][j];
        }
    }
    unordered_set<int> st;
    dfs(1,1,st);
    cout<<ans<<endl;
    return 0;
}
