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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string arr;
        cin >> arr;
        int count = 0, s = -1, e = -1;
        for(int i = 0; i < n/2; ++i){
            if(arr[i] != arr[n-1-i]){
                // cout << arr[i] << " ar " << arr[n-1-i] << endl;
                if(s == -1){
                    ++count;
                    // cout << count << " c " << i << endl;
                    s = i, e = i;
                }
                else ++e;
            }
            else{
                s = -1, e = -1;
            }
        }
        // cout << count << endl;
        if(count <= 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}