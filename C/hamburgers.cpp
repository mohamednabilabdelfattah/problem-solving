// the link of the problem: https://codeforces.com/contest/371/problem/C
#include <iostream>
using namespace std;
typedef long long ll;

ll pb, ps, pc;
ll lb = 0, ls = 0, lc = 0;
ll nb, ns, nc;

ll r;

ll price(ll x)
{
    ll fb = pb * max(x * lb - nb, (ll)0);
    ll fc = pc * max(x * lc - nc, (ll)0);
    ll fs = ps * max(x * ls - ns, (ll)0);
    return fb + fc + fs;
}

int main(void)
{
    string s;
    cin >> s;
    for (char i : s)
    {
        if (i == 'B')
            lb++;
        else if (i == 'S')
            ls++;
        else
            lc++;
    }
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    ll low = 0, high = r + 1000, mid, ans = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        ll z = price(mid);
        if (z == r)
        {
            cout << mid;
            return 0;
        }
        else if (z < r)
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}