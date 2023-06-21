// the problem of the link: https://codeforces.com/contest/1065/problem/C
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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    vector<ll> h(200005, 0);
    ll mx = INT_MIN;
    ll mn = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        h[arr[i]]++;
        mx = max(arr[i], mx);
        mn = min(arr[i], mn);
    }
    for (ll i = mx; i > mn; i--)
    {
        h[i - 1] += h[i];
    }
    ll sol = 0;
    for (ll i = mx; i > mn;)
    {
        ll temp = 0;
        while (temp < k && i > mn)
        {
            if (temp + h[i] <= k)
            {
                temp += h[i];
                i--;
            }
            else
            {
                break;
            }
        }
        sol++;
    }
    cout << sol;
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
