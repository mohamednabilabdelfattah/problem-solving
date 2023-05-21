// the link of the problem : https://codeforces.com/contest/75/problem/C

#include<iostream>
#include <random>
#include<set>
#include <map>
#include<string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define bolbol_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define x first
#define y second
#define loop1(s,f) for(int fi = s;fi<f;fi++)
#define loop2(s,f) for(int si = s;si<f;si++)
#define loop3(s,f) for(int ti = s;ti<f;ti++)

#define inrange(i,j,k) ((i>=j) && (i<=k))
#define sqr(a) (a*a)

ll gcd(ll a, ll b) {
    if (b == 1)
        return 1;
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<ll> generateDivisros(ll a, ll b) {
    ll g = gcd(a, b);
    vector<ll>arr;
    for (int i = 1; i <= sqrt(g); i++)
    {
        if (g % i == 0)
        {
            // If divisors are equal, print only one
            if (g / i == i)
                arr.push_back(i);

            else // Otherwise print both
            {
                arr.push_back(i);
                arr.push_back(g / i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    return arr;
}

void burn(int tc)
{
    ll a, b, n;
    cin >> a >> b >> n;
    vector<pair<ll, ll>> q(n);
    vector<ll>d = generateDivisros(a, b);
    for (auto& i : q) cin >> i.first >> i.second;
    for (auto& i : q) {
        auto low = lower_bound(d.begin(), d.end(), i.second);
        if (low == d.end() || *low > i.second) low--;
        if (*low >= i.first && *low <= i.second) cout << *low << endl;
        else cout << -1 << endl;
    }
}

int main()
{
    bolbol_on_da_code

        //    freopen("zeros.in", "r", stdin);
        //    freopen("aout.txt", "w", stdout);

        int t = 1; //cin >> t;
    for (int i = 1; i <= t; i++) {
        //        cout << "case " << i << ": ";
        burn(i);
        cout << '\n';
    }
    return 0;
}




