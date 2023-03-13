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
    int n;
    cin >> n;
    string s, ans = "meow";
    cin >> s;
    int i = 0, j = 0;
    while(i < n){
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        ++i;
    }
    i = 0;
    while(i < n){
        if(s[i] == ans[j]){
            ++i, ++j;
            if(j == 4) break;
            while(i < n and s[i] == s[i-1]) ++i;
        }
        else break;
    }
    while(i < n and j == 4){
        if(s[i] != s[i-1]){ j = 3; break;}
        ++i;
    }
    if(j == 4) cout << "YES";
    else cout << "NO";
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