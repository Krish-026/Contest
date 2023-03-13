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
        int n, ans = 0;
        cin >> n; 
        vi arr(n, 0);
        input(arr, 0, n-1);
        int count = 0;
        for(int x: arr){
            if(x == 2)
                ++count;
        }
        if(count&1){
            ans = -1;
            cout << ans << endl;
            continue;
        }
        else{
            int num = 0;
            for(int i = 0; i < n; ++i){
                if(arr[i] == 2){
                    ++num;
                }
                if(2*num == count){
                    ans = i;
                    break;
                }
            }
        }
        cout << ans+1 << endl;
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