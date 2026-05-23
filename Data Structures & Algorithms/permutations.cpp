#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <vector>
#include <optional>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long u64;
typedef long double ld;
using   psi = pair<string, int>;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<psi> vpsi;
using s = string;
typedef vector<char> vc;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define begend(x) (x).begin(), (x).end()
#define pref(r) for(auto i : r) cout << i;
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define gline(line) getline(cin >> ws, line)
#define rep(a, b) for(int i = (a); i < (b); ++i)
#define per(i, a, b) for(int i = (b)-1; i >= (a); --i)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

const int	MOD = 1e9 + 7;
const ll	INF = 1e18;
const		ld PI = acos(-1.0);
ll		ctr = 0;
size_t h_g = 5;
size_t w_g = 5;
vector<vll> g(h_g, vll(w_g));

ll
gcd(ll a, ll b)
{
	return b ? gcd(b, a % b) : a;
}

ll
lcm(ll a, ll b)
{
	return (a / gcd(a, b)) * b;
}

ll
power(ll b, ll e)
{
    ll res = 1; b %= MOD;
    while (e > 0)
    {
    	if (e & 1)
    		res = (res * b) % MOD;
    	b = (b * b) % MOD; e >>= 1;
    }
    return res;
}

ll
ceil_div(ll a, ll b)
{
	return (a + b - 1) / b;
}

struct
DSU
{
    vi parent, rank;
    DSU(int n) {
        parent.resize(n + 1); rank.resize(n + 1, 0);
        iota(begend(parent), 0);
    }
    int find(int i) {
        if (parent[i] == i)
        	return i;
        return parent[i] = find(parent[i]);
    }
    void unite(int i, int j) {
        int root_i = find(i), root_j = find(j);
        if (root_i != root_j) {
            if (rank[root_i] < rank[root_j])
            	swap(root_i, root_j);
            parent[root_j] = root_i;
            if (rank[root_i] == rank[root_j])
            	rank[root_i]++;
        }
    }
};

bool
bound(ll r, ll c, ll n, ll m)
{
    return (r >= 0 && r < n && c >= 0 && c < m);
}

void
dfs(int u, int p, const vector<vi>& adj, vi& visited) {
    visited[u] = 1;
    for (int v : adj[u]) {
        if (v != p && !visited[v]) dfs(v, u, adj, visited);
    }
}

bool
check(ll mid)
{
    return true;
}

void
solve_search(ll low, ll high) {
    ll ans = -1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (check(mid)) { ans = mid; high = mid - 1; }
        else low = mid + 1;
    }
}
int dx[] = {1, -1, 0, 0};  // down, up, right, left
int dy[] = {0, 0, 1, -1};

vpii cells;

void gdfs(vector<vc> &gg, int r, int c, int n, int m)
{
    if(!bound(r, c, n, m)) return;
    if(gg[r][c] != '.') return;

    gg[r][c] = '#';
    cells.push_back({r,c});

    for(int i=0; i<4; i++)
        gdfs(gg, r+dx[i], c+dy[i], n, m);
}

void g_printter(vector<vc> &g, size_t H = h_g, size_t W = w_g)
{
    for(auto i : g){
        for(auto d:i)
            cout << d;
        cout << endl;
    }
}

ll get(ll t)
{
    ll sz{};
    rep(0, t)
        sz++;
    return sz;
}

void LIC(string s)
{
    ll b = 1;
    ll c = 1;
    for(ll i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i - 1])
            c++;
        else
            c = 1;
        if(c > b)
            b = c;
    }
    cout << b << endl;
}


    vector<vector<int>> permute(vector<int>& nums) {
    	sort(nums.begin(), nums.end()); 
        vector<int> arr;
        for(auto &n : nums){
        	cout << n;
            arr.push_back(n);
        }
        cout << endl;
        size_t as = 5;
        vector<vector<int>> vv;
        while(as--)
        {
            next_permutation(arr.begin(), arr.end());
            vv.push_back(arr);
        }
        for(auto &r : vv){
        	for(auto rr : r)
        		cout << rr;
        	cout << endl;
        }
        return vv;
    }
    
void solve()
{
	vector<int> v{1, 2, 3};
    permute(v);
}

int main() {
    fast_io;
   //while (t--) {
        solve();
    //}
    return 0;
}
