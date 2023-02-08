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
    int n, limit;
    cin >> n >> limit;
    vi arr(n, 0);
    rep(i, 0, n-1){
        cin >> arr[i];
        arr[i] += i+1;
    }
    sort(all(arr));
    int sum = 0, i = 0;
    for(i = 0; i < n; ++i){
        if(sum + arr[i] <= limit){
            sum += arr[i];
        }
        else break;
    }
    cout << i;
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