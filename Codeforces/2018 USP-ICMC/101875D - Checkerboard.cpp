#include <bits/stdc++.h>
#define pi acos(-1)
#define sz(x) (int) x.size()
#define pii pair<int, int>
#define pill pair<int, long long>
#define mii map<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define popb pop_back
#define all(v) v.begin(),v.end()
#define mset(v, x) memset(v, x, sizeof(v))
#define mset2d(v, x, n) memset(v, x, sizeof(v[0][0]) * n * n)
#define mset2dd(v, x, n, m) memset(v, x, sizeof(v[0][0]) * n * m)
#define debug(x) cerr<<#x<<" : "<<x<<endl
#define debug2(x,y) cerr<<#x<<" : "<<x<<" & "<<#y<<" : "<<y<<endl
#define test() cerr<<"hola papa"<<endl
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

ll n, a, b, x, y;

ll ab(ll k) {
    ll z = k;
    if (k < 0LL) {
        z = -1LL * k;
    }
    return z;
}

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> a >> b >> x >> y;

    ll d = (ab(a - x) + ab(b - y));

    if (d == 0LL) {
        d = 2LL;
    }

    ll ans = 0LL;

    if (n >= d) {
        ans = (n - d) / 2LL + 1LL;
    }

    cout << (ans > 0LL ? ans : 0LL) << "\n";
}