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


int natural(ll n){
    return (n*(n+1))/2;
}

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    ll maax = (n*(n+1))/2;
    while(q--){
        vll arr(n+2, 0);
        ll num;
        cin >> num;
        while(num >= maax){
            ll add = num/maax;
            if(add == 0) break;
            num %= maax;
            arr[1] = add;
            arr[n+1] = -add;
        }
        // cout << "num " << num << endl;
        while(num > 0){
            if(num <= n){
                arr[num] += 1;
                arr[num+1] -= 1;
                break;
            }
            ll sq = sqrt(num);
            ll ss = natural(sq);
            // cout << "sq " << sq << " num "  << num << endl;
            arr[1] += 1;
            arr[sq+1] -= 1;
            num -= ss;
        }
        ll len = 0;
        rep(i, 1, n+1){
            // cout << "i " << i << " arr[i] " << arr[i] << endl;
            arr[i] += arr[i-1];
            if(arr[i] == 0){ len = i-1; break;}
        }
        if(len == 0) len = n;
        cout << "1 " << len << endl;
        rep(i, 1, n) if(arr[i] == 0) break; else cout << arr[i] << " ";
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