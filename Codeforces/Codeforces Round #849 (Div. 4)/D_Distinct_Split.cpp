#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<long>
#define vvl vector<vl>
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define pb push_back
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mp make_pair
#define rep(a, b, c) for (long long a = b; a <= c; ++a)
#define repr(a, b, c) for (long long a = b; a >= c; --a)
#define input(a, b, n)                 \
    for (long long i = b; i <= n; ++i) \
        cin >> a[i];
#define output(a, b, n)                \
    for (long long i = b; i <= n; ++i) \
        cout << a[i] << " ";
#define Mod 1000000007
using namespace std;

void solve2(){
    int n, ans = 0, distinct = 0; string s;
    cin >> n >> s;
    vi arr(26, 0), dist(n, 0);
    rep(i, 0, n-1){
        if(arr[s[i] - 'a'] == 0)
            ++distinct;
        dist[i] = distinct;
        ++arr[s[i] - 'a'];
    }
    
    rep(i, 0, n-2){
        --arr[s[i] - 'a'];
        if(arr[s[i] - 'a'] == 0)
            --distinct;
        ans = max(ans, dist[i] + distinct);
    }
    cout << ans;
}

void solve()
{
    int t;
    cin >> t;
    while(t--){
        solve2();
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}