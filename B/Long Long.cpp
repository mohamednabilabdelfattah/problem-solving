// the link of the problem: https://codeforces.com/contest/1843/problem/B
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
    ll n, sum = 0;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += abs(arr[i]);
    }
    ll i = 0;
    while (arr[i] == 0 && i < n - 1)
        i++;
    bool dir = arr[i] >= 0;
    ll sol = 0;
    if (!dir)
        sol = 1;
    for (; i < n; i++)
    {
        if (dir && arr[i] < 0)
        {
            sol++;
            dir = false;
        }
        if (!dir && arr[i] > 0)
        {
            dir = true;
        }
    }
    cout << sum << " " << sol;
}

int main()
{
    bolbol_on_da_code

        //    freopen("zeros.in", "r", stdin);
        //    freopen("aout.txt", "w", stdout);

        int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //        cout << "case " << i << ": ";
        burn(i);
        cout << '\n';
    }
    return 0;
}
