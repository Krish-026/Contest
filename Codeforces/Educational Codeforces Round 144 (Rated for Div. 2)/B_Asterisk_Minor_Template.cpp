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
    string a, b;
    cin >> a >> b;
   if(a[0] == b[0]){
        cout << "YES" << endl << a[0] << "*" << endl;
    }
    else if(a.back() == b.back()){
        cout << "YES" << endl << "*" << a.back() << endl;
    }
    else{
        unordered_set<string>s;
        for(int i = 0; i+1 < a.size(); ++i){
            s.insert(a.substr(i, 2));
        }
        for(int i = 0; i +1 < b.size(); ++i){
            if(s.count(b.substr(i, 2)) == 1){
                cout << "YES" << endl << "*" << b.substr(i, 2) << "*" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
}

void solve()
{
    int t;
    cin >> t;
    while(t--){
        solve2();
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