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
        int n; 
        cin >> n;
        vi arr(n);
        input(arr, 0, n-1);
        sort(all(arr));

        int ans = INT_MAX;
        // Mean = (a+b+c)/3;
        // Medain = b
        // minDiff = 3*abs(mean - median);
        //         = abs(3*mean - 3*median);
        //         = abs( (a+b+c) - 3*(b) )
        //         = abs( (a+c) - 2*b ); It should be minimum
        for(int i = 1; i < n - 1; ++i){

            int minDiff = INT_MAX;
            int l = 0, r = n-1;
            while(l < r and l < i and i < r){

                int diff = abs(arr[l] + arr[r] - 2*arr[i]); // a + c - 2*b
                minDiff = min(minDiff, diff);

                if(minDiff == 0)
                    break;

                if(arr[l] + arr[r] > 2*arr[i]){ // a + c > 2*b
                    r--;
                }
                else ++l;
            }
            ans = min(ans, minDiff);
            if(ans == 0)
                break;
        }
        cout << ans << '\n';
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