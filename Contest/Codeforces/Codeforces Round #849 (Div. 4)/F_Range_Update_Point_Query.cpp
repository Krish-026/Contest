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

int digit_sum(int num){
    int sum = 0;
    while(num){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

void solve2(){
    int n, q;
    cin >> n >> q;
    vi arr(n, 0);
    set<int>st;
    rep(i, 0, n-1){
        cin >> arr[i];
        if(arr[i] > 9)
            st.insert(i); // index
    }

    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int l, r;
            cin >> l >> r;
            --l,--r;
            int idx = l;
            while(!st.empty()){
                auto it = st.lower_bound(idx);
                if(it == st.end() or *(it) > r) // Means idx is already changed twice
                    break;
                int val = *(it);
                arr[*(it)] = digit_sum(val); // Found val then add digit sum and take new val
                st.erase(it);
                val = arr[*(it)]; // if val > 9 then add it  set
                if(val > 9)
                    st.insert(*it);
                idx = *(it) + 1;
            }
        }
        else{
            int idx;
            cin >> idx; --idx;
            cout << arr[idx];
        }
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