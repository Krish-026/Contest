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
vll secondLargest(vll arr)
{
    ll arr_size = arr.size();
    ll i, first, second;
    vll ans;

    first = second = INT_MIN;
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    ans.push_back(first);
    if (second == INT_MIN)
        return ans;
    ans.push_back(second);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll arr(n);
        input(arr, 0, n - 1);
        vll ans = secondLargest(arr);
        if (n == 1)
        {
            if (arr[0] == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        if (ans[0] - ans[1] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}