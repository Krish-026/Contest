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

void solve2(ll n){
    if(n == 0){
        cout << "3 1 6 7";
        return;
    }
    ll a, b, c, d;
    a = 1LL << 35;
    b = 1LL << 36;
    c = n << 1;
    d = c^n;

    cout << a << " " << b << " " << c << " " << d;
    // n = ((a&b)|c)^d;
    // cout <<endl << " n = " << n;

}

void solve()
{
    int t;
    cin >> t;
    while(t--){
        ll i;
        cin >> i;
        solve2(i);
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