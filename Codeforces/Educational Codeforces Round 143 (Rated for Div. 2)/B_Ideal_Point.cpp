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

void solve()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        vector<int>arr(52, 0);
        cin >> n >> k;
        while(n--){
            int l, r;
            cin >> l >> r;
            if(l <= k and k <= r){
                ++arr[l];
                --arr[r+1];
            }
        }
        rep(i, 1, 52)
            arr[i] += arr[i-1];
        int ans = 0;
        for(int i = 1; i < 51; ++i){
            if(i == k)
                continue;
            ans = max(ans, arr[i]);
        }
        if(ans == arr[k])
            cout << "NO" << endl;
        else cout << "YES" << endl;
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

    // vector<vector<int>> lcp = {{4,0,2,0},{0,3,0,1},{2,0,2,0},{0,1,0,1}};