#include <bits/stdc++.h>
#define pi acos(-1)
#define sz(x) (int) x.size()
#define pii pair<int, int>
#define mii map<int, int>
#define vi vector<int>
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
#define debug(x) cerr <<#x<<" : "<<x<<endl
#define debug2(x,y) cerr <<#x<<" : "<<x<<" & "<<#y<<" : "<<y<<endl
#define test() cerr <<"hola papa"<<endl
#define MAX 20
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int n, m;
ll ans, aux;
vector< pii > v(MAX + 1);

bool cmp(pii p1, pii p2) {
    return p1.se > p2.se;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> v[i].fi >> v[i].se;
    }
    sort(all(v), cmp), ans = 0;
    for (int i = 0; i < m && n; ++i) {
        aux = min(n, v[i].fi);
        ans += (aux * v[i].se);
        n = n - aux;
    }
    cout << ans << "\n";
}