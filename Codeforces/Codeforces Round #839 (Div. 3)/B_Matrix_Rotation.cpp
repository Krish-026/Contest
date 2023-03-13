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

void rotate(int arr[2][2]){
    int temp = arr[0][0];
    arr[0][0] = arr[1][0];
    arr[1][0] = arr[1][1];
    arr[1][1] = arr[0][1];
    arr[0][1] = temp;
}

bool isBeautiful(int arr[2][2]){
    return arr[0][0] < arr[0][1] and arr[0][0] < arr[1][0] 
       and arr[1][1] > arr[0][1] and arr[1][1] > arr[1][0];
}

void solve()
{
    int t;
    cin >> t;
    while(t--){
        int arr[2][2];
        for(int i = 0; i < 2; ++i){
            for(int j = 0; j < 2; ++j){
                cin >> arr[i][j];
            }
        }
        int miin = min(min(arr[1][0], arr[1][1]), min(arr[0][1], arr[0][0]));
        while(arr[0][0] != miin){
            rotate(arr);
        }
        if(isBeautiful(arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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