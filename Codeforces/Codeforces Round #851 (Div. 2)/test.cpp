//============================================================================
// Name        : Brahmi Zied
// Author      : brahZied
// Version     : 2022
// Description : Road to expert
//============================================================================
/*
    STAY ORGANIZED
    CHANGE YOUR APPROACH
    BE CONFIDENT
*/
// when you train write the algos from 0
// Think different approaches
//(trace TestCase,think with symbols,think with PICS,
// numberTheory,bs,dp,greedy,graphs,shortest paths,mst,
// dsu,LCA(binary lifting?),hashing(strings))
// Stay Calm
// IN TRAINING DO NOT SEE WRONG TEST CASES AFTER SUBMITTING!
// Look for special cases
// Beware of overflow and array bounds
// Think the problem backwards
#include <bits/stdc++.h>
using namespace std;
#define fastInp  \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
#define sim template <class c
#define ris return *this
#define dor > debug &operator<<
#define eni(x)                                                                    \
    sim > typename enable_if<sizeof dud<c>(0) x 1, debug &>::type operator<<(c i) \
    {
sim > struct rge
{
    c b, e;
};
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug
{
#ifdef LOCAL
    ~debug()
    {
        cerr << endl;
    }
    eni(!=) cerr << boolalpha << i;
    ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d)
{
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d)
{
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
    sim dor(const c &)
    {
        ris;
    }
#endif
}
;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

typedef long long ll;
typedef long double ld;
ll n, m, d;
const ll prime = 1e9 + 7;
const ll prime2 = 998244353;
const ll prime3 = 7901;

const int MAXN = 1e6;
const ll MOD = 1e9 + 7;
ll INF = 2e18;

int toInteger(string s)
{
    ll val = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        val = val * 10 + (s[i] - '0');
    }
    return val;
}

void solve(int n)
{

    if (n % 10 == 9)
    {
        cout << n << endl;
        string s;
        s = to_string(n);
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << "\n";
            return;
        }
        ll sum = 0;
        for (int i = 0; i < (int)s.length(); i++)
        {
            sum += s[i] - '0';
        }
        int a, b;
        if (sum % 2 == 0)
        {
            a = sum / 2;
            b = sum / 2;
        }
        else
        {
            a = sum / 2;
            b = (sum + 1) / 2;
        }
        string As = "";
        string Bs = "";
        debug() << imie(a) imie(b);
        for (int i = 0; i < (int)s.length(); i++)
        {
            int val = s[i] - '0';

            if (val == 0)
            {
                As += '0';
                Bs += '0';
            }
            else
            {
                ll tempA = a;
                a = max(0, a - val);
                As += (tempA - a) + '0';
                val = val - (tempA - a);

                if (b >= 0 && val > 0)
                {
                    ll tempB = b;
                    b = max(0, b - val);
                    Bs += (tempB - b) + '0';
                    val = val - (tempB - b);
                }
            }
            debug() << imie(As) imie(Bs);
        }

        cout << toInteger(As) << " " << toInteger(Bs) << "\n";
    }
}

int main()
{
    fastInp;

    // freopen("chess.in","r",stdin);
    // freopen("t.out","w",stdout);
    int tc = 1;
    // debug() << imie(sieve);
    cin >> tc;
    // int i=0;
    // cout << setprecision(10)<<fixed;
    while (tc--)
    {
        // i++;
        // cout <<"Test " << i << ":" << "\n";
        for (int i = 0; i < 1001; ++i)
            solve(i);
    }

    return 0;
}

/*
   Some insights:
    .Binary search
    .Graph representation
    .Write brute force code
    .Change your approach


 */