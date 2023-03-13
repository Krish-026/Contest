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
    ll n, limit, count = 0;
    cin >> n >> limit;
    vi arr(n), arr2(n);
    input(arr, 0, n-1);
    input(arr2, 0, n-1);
    vector<pair<ll,ll>>ans;
    for(int i = 0; i < n; ++i){
        ll sum = arr[i] + arr2[i];
        ans.pb({sum, arr[i]});
    }
    sort(all(ans));
    ll x = 0;
    for(int i = 0; i < n; ++i){
        if(limit > 0){
            if(limit+x >= ans[i].first){
                limit -= ans[i].first;
                ++count;
                x = max(x, ans[i].first - ans[i].second);
            }
            else if(limit >= ans[i].second){
                limit -= ans[i].second;
                ++count;
                break;
            }
        }
        else break;
    }
    cout << count;
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