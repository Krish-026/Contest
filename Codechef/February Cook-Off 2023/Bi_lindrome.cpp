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
	    int n; string s;
	    cin >> n >> s;
	    vector<int>arr(26, 0);
	    bool flag = false;
	    for(char ch: s){
	        ++arr[ch - 'a'];
	        if(arr[ch - 'a'] > 1){
	            flag = true;
	            break;
	        }
	    }
	    if(flag)
	        cout << n-2 << endl;
	    else cout << -1 << endl;
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