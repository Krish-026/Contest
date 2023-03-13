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
    int n, count = 0; string s;
    cin >> n >> s;
    pair<char, int>p = {'2', -1};
    for(int i = 0; i < n; ++i){
        if(s[i] != '0'){
            if(p.second == -1){
                p.first = s[i];
                p.second = i;
            }
            else{
                if(p.first != s[i])
                    count += (i - 1 - p.second)&1;
                p.first = s[i];
                p.second = i;
            }
        }
    }
    if(p.second == -1)
        cout << n;
    else
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