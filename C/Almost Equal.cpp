// the link of the problem: https://codeforces.com/contest/1206/problem/C
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

void burn(int tc)
{
    ll n;
    cin >> n;
    if (!(n & 1))
    {
        cout << "NO" << endl;
        return;
    }
    vector<ll> arr(2 * n);
    ll i = 0;
    ll j = n;
    for (ll k = 1; k <= n; k++)
    {
        if (k & 1)
        {
            arr[j++] = 2 * k;
            arr[i++] = 2 * k - 1;
        }
        else
        {
            arr[j++] = 2 * k - 1;
            arr[i++] = 2 * k;
        }
    }
    cout << "YES" << endl;
    for (ll k = 0; k < 2 * n; k++)
        cout << arr[k] << " ";
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
