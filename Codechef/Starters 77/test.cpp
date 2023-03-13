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

void solve2()
{
    int n, m;
    string s1, s2;
    cin >> n >> m >> s1 >> s2;
    if(n == 1 and m== 1){
        cout << "YES";
        return;
    }
    if(m > n)
        swap(m, n), swap(s1, s2);
    vi arr(26, 0);
    for (char x : s1)
        ++arr[x - 'a'];
    for (char x : s2){
        if(arr[ x-'a'] == 0){
            cout << "NO";
            return;
        }
        --arr[x-'a'];
    }
    int odd = 0;
    rep(i, 0, 25)
    {
        // cout << i << " " << arr[i] << endl;
        if (arr[i] & 1)
            ++odd;
    }
    if (odd > 1)
        cout << "NO";
    else
        cout << "YES";
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
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