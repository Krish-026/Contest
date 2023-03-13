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
    int n;
    cin >> n;
    vll arr(n, 0);
    input(arr, 0, n - 1);
    ll gcd = arr[0];
    bool check = false;
    for (int i = 0; i < n; ++i)
        gcd = __gcd(arr[i], gcd);
    if (gcd > 2)
    {
        cout << "No";
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (__gcd(arr[i], arr[j]) <= 2)
            {
                check = true;
                break;
            }
        }
        if (check)
            break;
    }
    if (check)
        cout << "Yes";
    else
        cout << "No";
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