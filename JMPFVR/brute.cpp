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
//#define pd(a) printf("%lf",a)
//#define pdd(a,b) printf("%lf %lf",a,b)
//#define pddd(a,b,c) printf("%lf %lf %lf",a,b,c)
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
const int N = 1e5;
int n, ara[N + 5], sbtr[N + 5], dpt[N + 5], vrtx[N + 5], order[N + 5], t;
ll sum[N + 5], ru[N + 5], ur[N + 5], dp[N + 5], pd[N + 5];
vector <int> adj[N + 5];
ll global;
void go(int u, int p, int d){
	int i, j;
	for0(i, adj[u].size()){
		int v = adj[u][i];
		if(v == p) break;
	} if(i != adj[u].size()) adj[u].erase(adj[u].begin() + i);
	sbtr[u] = 1, dpt[u] = d;
	vrtx[t++] = u, order[u] = t - 1;
	sum[u] = sum[p] + ara[u];
	ru[u] = ru[p] + (ll)dpt[u] * (ll)ara[u];
	ur[u] = ur[p] + sum[u];
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
ll jump_cost(int u, int v, int p, bool f){
	if(!f) return ru[v] - ru[p] - (ll)(dpt[u] - 1) * (sum[v] - sum[p]);
	else return ur[v] - ur[p] - sum[p] * (ll)(dpt[v] - dpt[u] + 1);
}
ll jump_cost_uv(int u, int lca, int v, int p){
	ll x = ru[v] - ru[lca] - (ll)dpt[lca] * (sum[v] - sum[lca]);
	return jump_cost(lca, u, p, true) + x + (sum[v] - sum[lca]) * (ll)(dpt[u] - dpt[lca] + 1);
}
ll jump_cost_u_lca_v(int u, int lca, int v, int p){
	return jump_cost(lca, u, p, true) + jump_cost(lca, v, p, false);
}
void dsu_prep(int u, int p){
	int i, j;
	for(int x : adj[u]) dsu_prep(x, u);
	dp[u] = pd[u] = -LLONG_MAX;
	for(int x : adj[u]){
		for(i = order[x]; i <= order[x] + sbtr[x] - 1; ++i){
			int v = vrtx[i];
			dp[u] = max(dp[u], jump_cost(u, v, p, false) + dp[v]);
			pd[u] = max(pd[u], jump_cost(u, v, p, true) + pd[v]);
		}
	}
    if(adj[u].size()) global = max(global, dp[u]), global = max(global, pd[u]);
	if(!adj[u].size()) dp[u] = pd[u] = 0;
}
void dsu(int lca, int p){
    int i, j, mx = -1, bg = -1, sz = adj[lca].size(), k;
    for(int x : adj[lca]) if(sbtr[x] > mx) mx = sbtr[x], bg = x;
    for(int x : adj[lca]) dsu(x, lca);
    for(i = sz - 1; i >= 0; --i){
        int x = adj[lca][i];
        if(x == bg) continue;
        bool f = false;
        for(j = order[x]; j <= order[x] + sbtr[x] - 1; ++j){
            int u = vrtx[j];
            for(k = order[x] + sbtr[x]; k <= order[lca] + sbtr[lca] - 1; ++k){
                int v = vrtx[k];
                if(v == bg) f = true;
                global = max(global, pd[u] + jump_cost_uv(u, lca, v, p) + dp[v]);
                global = max(global, pd[u] + jump_cost_u_lca_v(u, lca, v, p) + dp[v]);
                global = max(global, pd[v] + jump_cost_uv(v, lca, u, p) + dp[u]);
                global = max(global, pd[v] + jump_cost_u_lca_v(v, lca, u, p) + dp[u]);
            }
        }
        if(f) continue;
        for(j = order[x]; j <= order[x] + sbtr[x] - 1; ++j){
            int u = vrtx[j];
            for(k = order[bg]; k <= order[bg] + sbtr[bg] - 1; ++k){
                int v = vrtx[k];
                global = max(global, pd[u] + jump_cost_uv(u, lca, v, p) + dp[v]);
                global = max(global, pd[u] + jump_cost_u_lca_v(u, lca, v, p) + dp[v]);
                global = max(global, pd[v] + jump_cost_uv(v, lca, u, p) + dp[u]);
                global = max(global, pd[v] + jump_cost_u_lca_v(v, lca, u, p) + dp[u]);
            }
        }
    }
}
void solve(){
	int i, j;
	dp[n] = pd[n] = sum[n] = ru[n] = ur[n] = 0, dpt[n] = -1;
	t = 0, go(0, n, 0);
	global = -LLONG_MAX;
    dsu_prep(0, n);
    // para(i, 0, n - 1, dp); 
    // para(i, 0, n - 1, pd); 
    dsu(0, n);
    pl(global); nl;
}
int main(){
    // freopen("input.txt","r",stdin);
//    freopen("output.txt", "w", stdout);
    // freopen("0.in", "r", stdin); 
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
