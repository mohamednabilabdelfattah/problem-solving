// the link of the problem: https://codeforces.com/contest/959/problem/C
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
    if (n < 6)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 3 << endl;
        cout << 1 << " " << 4 << endl;
        for (ll i = 5; i <= n; i++)
        {
            cout << 4 << " " << i << endl;
        }
    }

    for (ll i = 2; i <= n; i++)
    {
        cout << 1 << " " << i << endl;
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
