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
    int n, x = 0, y = 0;
    cin >> n;
    char arr[n];
    bool ch = true;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        if(arr[i] == 'U')
            ++y;
        else if(arr[i] == 'D')
            --y;
        else if(arr[i] == 'L')
            --x;
        else if(arr[i] == 'R')
            ++x;
        if(x == 1 and y == 1 and ch){
            cout << "YES";
            ch = false;
        }
    }
    if(ch)
        cout << "NO";
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