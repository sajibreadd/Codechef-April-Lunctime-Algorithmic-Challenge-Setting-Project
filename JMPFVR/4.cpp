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
#define pd(a) printf("%lf",a)
#define pdd(a,b) printf("%lf %lf",a,b)
#define pddd(a,b,c) printf("%lf %lf %lf",a,b,c)
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
// auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
// std::mt19937 mt(seed);
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
mt19937 rng(250);
void bfs(int prufer[], int m) { 
    int vertices = m + 2; 
    int vertex_set[vertices];  
    for (int i = 0; i < vertices; i++) vertex_set[i] = 0; 
    for (int i = 0; i < vertices - 2; i++) vertex_set[prufer[i] - 1] += 1; 
    int j = 0; 
    for (int i = 0; i < vertices - 2; i++){ 
        for (j = 0; j < vertices; j++){ 
            if (vertex_set[j] == 0){ 
                vertex_set[j] = -1; 
                pii(j + 1, prufer[i]), nl; 
                // cout<< (j + 1) << " "<< prufer[i] <<; nl;  
                vertex_set[prufer[i] - 1]--; 
                break; 
            } 
        } 
    }
    j = 0; 
    for (int i = 0; i < vertices; i++){
        if (vertex_set[i] == 0 && j == 0){ 
            pi(i + 1), sp; 
            // cout<< (i + 1) << " "; 
            j++; 
        } 
        else if (vertex_set[i] == 0 && j == 1){
            pi(i + 1), nl; 
            // cout << (i + 1); nl;  
        }
    } 
} 
const int N = 1e5; 
int n, t, eql, prufer[N + 5]; 
int rnd(int x){ return rng() % x; }
void generate_tree(int m){
    int i, j; 
    for0(i, m - 2) prufer[i] = rnd(m) + 1; 
    bfs(prufer, m - 2); 
}
void solve(){
    int i, j, x, y, r, baki, m; 
    sii(t, n), si(eql);   
    pi(t); nl;  
    x = n / t, y = (n + t - 1) / t, r = n % t; 
    for0(i, t){
        if(eql){
            if(i < r) m = y; 
            else m = x; 
        }
        else{
            if(i < t - 1){
                baki = t - i - 1;
                m = rnd(n - 2 * baki) + 1;
                if(m == 1) ++m;  
                n -= m;  
            }
            else m = n; 
        }
        pi(m), nl; 
        for0(j, m){
            int f = rnd(2); 
            int v = rnd(N + 1);
            if(!f) v *= -1; 
            if(j) sp; 
            pi(v);  
        } nl; 
        generate_tree(m); 
    }
}
int main(){
    freopen("4.txt", "r", stdin); 
    freopen("4.in", "w", stdout); 
    solve();
}
