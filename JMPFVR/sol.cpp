#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include <cstring>
#include <iostream>
#define pie acos(-1)
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b)
#define slll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define ss(st) scanf("%s",st)
#define sch(ch) scanf("%ch",&ch)
#define ps(a) printf("%s",a)
#define newLine() printf("\n")
#define pi(a) printf("%d",a)
#define pii(a,b) printf("%d %d",a,b)
#define piii(a,b,c) printf("%d %d %d",a,b,c)
#define pl(a) printf("%lld",a)
#define pll(a,b) printf("%lld %lld",a,b)
#define plll(a,b,c) printf("%lld %lld %lld",a,b,c)
#define pch(c) printf("%ch",c)
#define debug1(str,a) printf("%s=%d\n",str,a)
#define debug2(str1,str2,a,b) printf("%s=%d %s=%d\n",str1,a,str2,b)
#define debug3(str1,str2,str3,a,b,c) printf("%s=%d %s=%d %s=%d\n",str1,a,str2,b,str3,c)
#define debug4(str1,str2,str3,str4,a,b,c,d) printf("%s=%d %s=%d %s=%d %s=%d\n",str1,a,str2,b,str3,c,str4,d)
#define for0(i,n) for(i=0;i<n;i++)
#define for1(i,n) for(i=1;i<=n;i++)
#define forab(i,a,b) for(i=a;i<=b;i++)
#define forstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define nl puts("")
#define sd(a) scanf("%lf",&a)
#define sdd(a,b) scanf("%lf %lf",&a,&b)
#define sddd(a,b,c) scanf("%lf %lf %lf",&a,&b,&c)
#define sp printf(" ")
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define mpr make_pair
#define pub(x) push_back(x)
#define pob(x) pop_back(x)
#define mem(ara,value) memset(ara,value,sizeof(ara))
#define INF INT_MAX
#define eps 1e-9
#define checkbit(n, pos) (n & (1<<pos))
#define setbit(n, pos) (n  (1<<pos))
#define para(i,a,b,ara)\
for(i=a;i<=b;i++){\
    if(i!=0){printf(" ");}\
    cout<<ara[i];\
}\
printf("\n");
#define pvec(i,vec)\
for(i=0;i<vec.size();i++){\
    if(i!=0){printf(" ");}\
    cout<<vec[i];\
}\
printf("\n");
#define ppara(i,j,n,m,ara)\
for(i=0;i<n;i++){\
    for(j=0;j<m;j++){\
        if(j!=0){printf(" ");}\
        cout<<ara[i][j];\
    }\
    printf("\n");\
}
#define ppstructara(i,j,n,m,ara)\
for(i=0;i<n;i++){\
    printf("%d:\n",i);\
    for(j=0;j<m;j++){\
        cout<<ara[i][j];printf("\n");\
    }\
}
#define ppvec(i,j,n,vec)\
for(i=0;i<n;i++){\
    printf("%d:",i);\
    for(j=0;j<vec[i].size();j++){\
        if(j!=0){printf(" ");}\
        cout<<vec[i][j];\
    }\
    printf("\n");\
}
#define ppstructvec(i,j,n,vec)\
for(i=0;i<n;i++){\
    printf("%d:",i);\
    for(j=0;j<vec[i].size();j++){\
        cout<<vec[i][j];printf("\n");\
    }\
}
#define sara(i,a,b,ara)\
for(i=a;i<=b;i++){\
    scanf("%d",&ara[i]);\
}
#define pstructara(i,a,b,ara)\
for(i=a;i<=b;i++){\
    cout<<ara[i];nl;\
}
#define pstructvec(i,vec)\
for(i=0;i<vec.size();i++){\
    cout<<vec[i];nl;\
}
#define pstructstl(stl,x)\
for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();++it){\
    x=*it;\
    cout<<x;nl;\
}\
nl;
#define pstl(stl)\
for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();++it){\
    if(it!=stl.begin()){sp;}\
    pi(*it);\
}\
nl;
#define ppairvec(i,vec)\
for(i=0;i<vec.size();i++){\
    cout<<vec[i].first;sp;cout<<vec[i].second;printf("\n");\
}
#define ppairara(i,a,b,ara)\
for(i=a;i<=b;i++){\
    cout<<ara[i].first;sp;cout<<ara[i].second;printf("\n");\
}
#define pppairvec(i,j,n,vec)\
for(i=0;i<n;i++){\
    printf("%d:\n",i);\
    for(j=0;j<vec[i].size();j++){\
        cout<<vec[i][j].first;sp;cout<<vec[i][j].second;nl;\
    }\
}
#define pppairara(i,j,n,m,ara)\
for(i=0;i<n;i++){\
    printf("%d:\n",i);\
    for(j=0;j<m;j++){\
        cout<<ara[i][j].first;printf(" ");cout<<ara[i][j].second;nl;\
    }\
}
#define SZ 2 * 100010
#define xx first
#define yy second
using namespace std;
//using namespace __gnu_pbds;
//bool status[100010];
//vector <int> prime;
//void siv(){
//    int N = 100005, i, j; prime.clear();
//    int sq = sqrt(N);
//    for(i = 4; i <= N; i += 2){ status[i] = true; }
//    for(i = 3; i <= sq; i+= 2){
//        if(status[i] == false){
//            for(j = i * i; j <= N; j += i){ status[j] = true; }
//        }
//    }
//    status[1] = true;
//    for1(i, N){ if(!status[i]){ prime.pub(i); } }
//}
//mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
//auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
//std::mt19937 mt(seed);
inline int add(int _a, int _b){
    if(_a < 0){ _a += MOD; }
    if(_b < 0){ _b += MOD; }
    if(_a + _b >= MOD){ return _a + _b - MOD; }
    return _a + _b;
}
inline int mul(int _a, int _b){
    if(_a < 0){ _a += MOD; }
    if(_b < 0){ _b += MOD; }
    return ((ll)((ll)_a * (ll)_b)) % MOD;
}
const long long LL_INF = (long long) 2e18 + 5;
struct point {
    long long x, y;
    point() : x(0), y(0) {}
    point(long long _x, long long _y) : x(_x), y(_y) {}
};
// dp_hull enables you to do the following two operations in amortized O(log n) time:
// 1. Insert a pair (a_i, b_i) into the structure
// 2. For any value of x, query the maximum value of a_i * x + b_i
// All values a_i, b_i, and x can be positive or negative.

//max_cost(u, v) = pd[u] + jump_cost(u, v) + dp[v]
//= pd[u] + (ur[u] - ur[p) - (dpt[u] - dpt[lca] + 1) * sum[p + (sum[v] - sum[lca]) * (dpt[u] - dpt[lca] + 1)
//+ (ru[v] - ru[lca]) - (sum[v] - sum[lca]) * dpt[lca] + dp[v]
//= pd[u] + (ur[u] - ur[p) - (dpt[u] - dpt[lca] + 1) * sum[p - sum[lca] * (dpt[u] - dpt[lca] + 1) - ru[lca] + sum[lca] * dpt[lca]
//+ ru[v] + dp[v] + sum[v] * (dpt[u] - 2 * dpt[lca] + 1){c = ru[v] + dp[v], m = sum[v], x = (dpt[u] - 2 * dpt[lca] + 1)}

//max_cost(u, lca, v) = pd[u] + jump_cost(u, lca) + jump_cost(lca, v) + dp[v]
//= pd[u] + (ur[u] - ur[p) - (dpt[u] - dpt[lca] + 1) * sum[p
//+ (ru[v] - ru[p) - (sum[v] - sum[p) * (dpt[lca] - 1) + dp[v]
//= pd[u] + (ur[u] - ur[p) - (dpt[u] - dpt[lca] + 1) * sum[p - ru[p + sum[p * (dpt[lca] - 1)
//+ ru[v] + dp[v] + sum[v] * (-dpt[lca] + 1)

//max_cost(v, u) = pd[v] + jump_cost(v, u) + dp[u]
//= pd[v] + (ur[v] - ur[p) - (dpt[v] - dpt[lca] + 1) * sum[p + (sum[u] - sum[lca]) * (dpt[v] - dpt[lca] + 1)
//+ (ru[u] - ru[lca]) - (sum[u] - sum[lca]) * dpt[lca] + dp[u]
//= (ru[u] - ru[lca]) - (sum[u] - sum[lca]) * dpt[lca] + dp[u] - ur[p + (dpt[lca] - 1) * sum[p + (sum[u] - sum[lca]) * (- dpt[lca] + 1)
//+ pd[v] + ur[v] + dpt[v] * (sum[u] - sum[lca] - sum[p){c = pd[v] + ur[v], m = dpt[v], x = (sum[u] - sum[lca] - sum[p)}

//max_cost(v, lca, u) = pd[v] + jump_cost(v, lca) + jump_cost(lca, u) + dp[u]
//= pd[v] + (ur[v] - ur[p) - (dpt[v] - dpt[lca] + 1) * sum[p
//+ (ru[u] - ru[p) - (sum[u] - sum[p) * (dpt[lca] - 1) + dp[u]
//= (ru[u] - ru[p) - (sum[u] - sum[p) * (dpt[lca] - 1) + dp[u] - ur[p + (dpt[lca] - 1) * sum[p
// + pd[v] + ur[v] + dpt[v] * (-sum[p)
struct dp_hull {
    struct segment {
        point p;
        mutable point next_p;
        segment(point _p = {0, 0}, point _next_p = {0, 0}) : p(_p), next_p(_next_p) {}
        bool operator<(const segment &other) const {
            // Sentinel value indicating we should binary search the set for a single x-value.
            if (p.y == LL_INF)
                return p.x * (other.next_p.x - other.p.x) <= other.p.y - other.next_p.y;
            return make_pair(p.x, p.y) < make_pair(other.p.x, other.p.y);
        }
    };
    set<segment> segments;
    int size() const {
        return segments.size();
    }
    set<segment>::iterator prev(set<segment>::iterator it) const {
        return it == segments.begin() ? it : --it;
    }
    set<segment>::iterator next(set<segment>::iterator it) const {
        return it == segments.end() ? it : ++it;
    }
    static long long floor_div(long long a, long long b) {
        return a / b - ((a ^ b) < 0 && a % b != 0);
    }
    static bool bad_middle(const point &a, const point &b, const point &c) {
        // This checks whether the x-value where b beats a comes after the x-value where c beats b. It's fine to round
        // down here if we will only query integer x-values. (Note: plain C++ division rounds toward zero)
        return floor_div(a.y - b.y, b.x - a.x) >= floor_div(b.y - c.y, c.x - b.x);
    }
    bool bad(set<segment>::iterator it) const {
        return it != segments.begin() && next(it) != segments.end() && bad_middle(prev(it)->p, it->p, next(it)->p);
    }
    void insert(const point &p) {
        set<segment>::iterator next_it = segments.lower_bound(segment(p));
        if (next_it != segments.end() && p.x == next_it->p.x)
            return;
        if (next_it != segments.begin()) {
            set<segment>::iterator prev_it = prev(next_it);
            if (p.x == prev_it->p.x)
                segments.erase(prev_it);
            else if (next_it != segments.end() && bad_middle(prev_it->p, p, next_it->p))
                return;
        }
        // Note we need the segment(p, p) here for the single x-value binary search.
        set<segment>::iterator it = segments.insert(next_it, segment(p, p));
        while (bad(prev(it)))
            segments.erase(prev(it));
        while (bad(next(it)))
            segments.erase(next(it));
        if (it != segments.begin())
            prev(it)->next_p = it->p;
        if (next(it) != segments.end())
            it->next_p = next(it)->p;
    }
    void insert(long long a, long long b) {
        insert(point(a, b));
    }
    // Queries the maximum value of ax + b.
    long long query(long long x) const {
        assert(size() > 0);
        set<segment>::iterator it = segments.upper_bound(segment(point(x, LL_INF)));
        return it->p.x * x + it->p.y;
    }
};
dp_hull convex, xevnoc;
const int N = 1e5;
int n, ara[N + 5], sbtr[N + 5], dpt[N + 5], vrtx[N + 5], order[N + 5], t = 0;
vector <int> adj[N + 5];
ll sum[N + 5], ru[N + 5], ur[N + 5], dp[N + 5], pd[N + 5];
ll global, val = 0;
void go(int u, int p, int d){
	int i, j;
    // pii(p, u); nl;
	for0(i, adj[u].size()){
		int v = adj[u][i];
		if(v == p) break;
	} if(i != adj[u].size()) adj[u].erase(adj[u].begin() + i);
	sbtr[u] = 1, dpt[u] = d;
	sum[u] = sum[p] + ara[u];
	ru[u] = (ll)ara[u] * (ll)dpt[u] + ru[p];
	ur[u] = ur[p] + sum[u];
    vrtx[t++] = u, order[u] = t - 1;
	for(int v : adj[u]) go(v, u, d + 1), sbtr[u] += sbtr[v];
}
//jump_cost(u, v) = (ru[v] - ru[p[u]]) - (sum[v] - sum[p[u]]) * (dpt[u] - 1)
//max_cost(u, v) = (ru[v] - ru[p[u]]) - (sum[v] - sum[p[u]]) * (dpt[u] - 1) + dp[v]
//               = -ru[p[u]] + sum[p[u]] * (dpt[u] - 1) + ru[v] + dp[v] - sum[v] * (dpt[u] - 1)
//               = -ru[p[u]] + sum[p[u]] * (dpt[u] - 1) + mx + c {m = -sum[v], x = (dpt[u] - 1), c = ru[v] + dp[v]}
//jump_cost(v, u) = (ur[v] - ur[p[u]]) - (dpt[v] - dpt[u] + 1) * sum[p[u]]
//max_cost(v, u)  = (ur[v] - ur[p[u]]) - (dpt[v] - dpt[u] + 1) * sum[p[u]] + pd[v]
//                = -ur[p[u]] + (dpt[u] - 1) * sum[p[u]] + ur[v] + pd[v] - dpt[v] * sum[p[u]]
//                =  -ur[p[u]] + (dpt[u] - 1) * sum[p[u]] + mx + c{m = -dpt[v], x = sum[p[u]], c = ur[v] + pd[v]}
void dsu_prep(int u, int p, bool keep){
    int i, j, mx = -1, bg = -1;
    for(int v : adj[u]) if(sbtr[v] > mx) mx = sbtr[v], bg = v;
    for(int v : adj[u]) if(v != bg) dsu_prep(v, u, 0);
    if(bg != -1) dsu_prep(bg, u, 1);
    for(int v : adj[u]){
        if(v == bg) continue;
        for(i = order[v]; i <= order[v] + sbtr[v] - 1; ++i){
            int x = vrtx[i];
            convex.insert(-sum[x], ru[x] + dp[x]);
            xevnoc.insert(-(ll)dpt[x], ur[x] + pd[x]);
        }
    }
    dp[u] = pd[u] = 0;
    if(adj[u].size()){
        dp[u] = -ru[p] + sum[p] * (ll)(dpt[u] - 1) + convex.query((ll)(dpt[u] - 1));
        pd[u] = -ur[p] + sum[p] * (ll)(dpt[u] - 1) + xevnoc.query(sum[p]);
        global = max(global, dp[u]), global = max(global, pd[u]);
    }
    convex.insert(-sum[u], ru[u] + dp[u]);
    xevnoc.insert(-(ll)dpt[u], ur[u] + pd[u]);
    if(!keep) convex.segments.clear(), xevnoc.segments.clear();
}
//max_cost(u, v) = pd[u] + jump_cost(u, v) + dp[v]
//= pd[u] + (ur[u] - ur[p]) - (dpt[u] - dpt[lca] + 1) * sum[p] + (sum[v] - sum[lca]) * (dpt[u] - dpt[lca] + 1)
//+ (ru[v] - ru[lca]) - (sum[v] - sum[lca]) * dpt[lca] + dp[v]
//= pd[u] + (ur[u] - ur[p]) - (dpt[u] - dpt[lca] + 1) * sum[p] - sum[lca] * (dpt[u] - dpt[lca] + 1) - ru[lca] + sum[lca] * dpt[lca]
//+ ru[v] + dp[v] + sum[v] * (dpt[u] - 2 * dpt[lca] + 1){c = ru[v] + dp[v], m = sum[v], x = (dpt[u] - 2 * dpt[lca] + 1)}

//max_cost(u, lca, v) = pd[u] + jump_cost(u, lca) + jump_cost(lca, v) + dp[v]
//= pd[u] + (ur[u] - ur[p]) - (dpt[u] - dpt[lca] + 1) * sum[p]
//+ (ru[v] - ru[p]) - (sum[v] - sum[p]) * (dpt[lca] - 1) + dp[v]
//= pd[u] + (ur[u] - ur[p]) - (dpt[u] - dpt[lca] + 1) * sum[p] - ru[p] + sum[p] * (dpt[lca] - 1)
//+ ru[v] + dp[v] + sum[v] * (-dpt[lca] + 1)

//max_cost(v, u) = pd[v] + jump_cost(v, u) + dp[u]
//= pd[v] + (ur[v] - ur[p]) - (dpt[v] - dpt[lca] + 1) * sum[p] + (sum[u] - sum[lca]) * (dpt[v] - dpt[lca] + 1)
//+ (ru[u] - ru[lca]) - (sum[u] - sum[lca]) * dpt[lca] + dp[u]
//= (ru[u] - ru[lca]) - (sum[u] - sum[lca]) * dpt[lca] + dp[u] - ur[p] + (dpt[lca] - 1) * sum[p] + (sum[u] - sum[lca]) * (- dpt[lca] + 1)
//+ pd[v] + ur[v] + dpt[v] * (sum[u] - sum[lca] - sum[p]){c = pd[v] + ur[v], m = dpt[v], x = (sum[u] - sum[lca] - sum[p])}

//max_cost(v, lca, u) = pd[v] + jump_cost(v, lca) + jump_cost(lca, u) + dp[u]
//= pd[v] + (ur[v] - ur[p]) - (dpt[v] - dpt[lca] + 1) * sum[p]
//+ (ru[u] - ru[p]) - (sum[u] - sum[p]) * (dpt[lca] - 1) + dp[u]
//= (ru[u] - ru[p]) - (sum[u] - sum[p]) * (dpt[lca] - 1) + dp[u] - ur[p] + (dpt[lca] - 1) * sum[p]
// + pd[v] + ur[v] + dpt[v] * (-sum[p])
void dsu(int lca, int p, bool keep){
    int i, j, mx = -1, bg = -1;
    ll c_u_v, c_u_lca_v, c_v_u, c_v_lca_u, q_lca, q_acl;
    for(int x : adj[lca]) if(sbtr[x] > mx) mx = sbtr[x], bg = x;
    for(int x : adj[lca]) if(x != bg) dsu(x, lca, 0);
    if(bg != -1) dsu(bg, lca, 1);
    for(int x : adj[lca]){
        if(x == bg) continue;
        q_lca = convex.query(-(ll)dpt[lca] + 1);
        q_acl = xevnoc.query(-sum[p]);
        for(i = order[x]; i <= order[x] + sbtr[x] - 1; ++i){
            int u = vrtx[i];
            c_u_v = pd[u] + (ur[u] - ur[p]) - (ll)(dpt[u] - dpt[lca] + 1) * sum[p] - sum[lca] * (ll)(dpt[u] - dpt[lca] + 1) - ru[lca] + sum[lca] * (ll)dpt[lca];
            c_u_lca_v =  pd[u] + (ur[u] - ur[p]) - (ll)(dpt[u] - dpt[lca] + 1) * sum[p] - ru[p] + sum[p] * (ll)(dpt[lca] - 1);
            c_v_u = (ru[u] - ru[lca]) - (sum[u] - sum[lca]) * (ll)dpt[lca] + dp[u] - ur[p] + (ll)(dpt[lca] - 1) * sum[p] + (sum[u] - sum[lca]) * (ll)(- dpt[lca] + 1);
            c_v_lca_u = (ru[u] - ru[p]) - (sum[u] - sum[p]) * (ll)(dpt[lca] - 1) + dp[u] - ur[p] + (ll)(dpt[lca] - 1) * sum[p];
            c_u_v += convex.query((ll)dpt[u] - 2 * (ll)dpt[lca] + 1);
            c_v_u += xevnoc.query(sum[u] - sum[lca] - sum[p]);
            c_u_lca_v += q_lca;
            c_v_lca_u += q_acl;
            global = max(global, max(c_u_v, c_v_u));
            global = max(global, max(c_u_lca_v, c_v_lca_u));
        }
        for(i = order[x]; i <= order[x] + sbtr[x] - 1; ++i){
            int u = vrtx[i];
            convex.insert(sum[u], ru[u] + dp[u]);
            xevnoc.insert((ll)dpt[u], pd[u] + ur[u]);
        }
    }
    convex.insert(sum[lca], ru[lca] + dp[lca]);
    xevnoc.insert((ll)dpt[lca], pd[lca] + ur[lca]);
    if(!keep) convex.segments.clear(), xevnoc.segments.clear();
}
void solve(){
	int i, j;
    dp[n] = pd[n] = sum[n] = ru[n] = ur[n] = 0, dpt[n] = -1;
	t = 0, go(0, n, 0);
    assert(t == n);
    for0(i, n) val += sbtr[i];
    // int mxht = -1;
    // for0(i, n) mxht = max(mxht, dpt[i]);
    // pi(mxht), nl;
    global = -LLONG_MAX;
    dsu_prep(0, n, 0);
    dsu(0, n, 0);
    pl(global), nl;
}
int main(){
    // freopen("0.in", "r", stdin);
    // freopen("0.out", "w", stdout);

    // freopen("1.in", "r", stdin);
    // freopen("1.out", "w", stdout);

    // freopen("2.in", "r", stdin);
    // freopen("2.out", "w", stdout);

    // freopen("3.in", "r", stdin);
    // freopen("3.out", "w", stdout);

    // freopen("4.in", "r", stdin);
    // freopen("4.out", "w", stdout);

    // freopen("5.in", "r", stdin);
    // freopen("5.out", "w", stdout);

    // freopen("6.in", "r", stdin);
    // freopen("6.out", "w", stdout);

    // freopen("7.in", "r", stdin);
    // freopen("7.out", "w", stdout);

    // freopen("8.in", "r", stdin);
    //   freopen("8.out", "w", stdout);

   //  freopen("9.in", "r", stdin);
   // freopen("9.out", "w", stdout);
    int cs, ts;
    si(ts);
    for0(cs, ts){
    	int i, j;
    	si(n);
    	for0(i, n) si(ara[i]);
        for0(i, n) adj[i].clear();
    	for0(i, n - 1){
    		int u, v;
    		sii(u, v), --u, --v;
    		adj[u].push_back(v), adj[v].push_back(u);
    	}
    	solve();
    }
}
