// the link of the problem :https://codeforces.com/contest/347/problem/C
#include <iostream>
#include <random>
#include <set>
#include <map>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define bolbol_on_da_code             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop1(s, f) for (int fi = s; fi < f; fi++)
#define loop2(s, f) for (int si = s; si < f; si++)
#define loop3(s, f) for (int ti = s; ti < f; ti++)

#define inrange(i, j, k) ((i >= j) && (i <= k))
#define sqr(a) (a * a)

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    if (b == 1)
        return 1;
    return gcd(b, a % b);
}

void burn(int tc)
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll g = arr[0];
    ll m = arr[0];
    for (ll i = 1; i < n; i++)
    {
        g = gcd(g, arr[i]);
        m = max(m, arr[i]);
    }
    ll k = m / g;
    if ((n - k) & 1)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
    }
}

int main()
{
    bolbol_on_da_code

        //    freopen("zeros.in", "r", stdin);
        //    freopen("aout.txt", "w", stdout);

        int t = 1; // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //        cout << "case " << i << ": ";
        burn(i);
        cout << '\n';
    }
    return 0;
}
