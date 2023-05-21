// the link of the problem https://codeforces.com/contest/740/problem/C

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

void burn(int tc)
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> arr(m);
    ll md = LLONG_MAX;
    for (auto& i : arr) {
        cin >> i.first >> i.second;
        md = min(md, i.second - i.first);
    }
    cout << md+1 << endl;
    for (ll i = 0; i < n;) {
        for (ll j = 0; j <= md && i<n; j++, i++)
            cout << j << " ";
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




