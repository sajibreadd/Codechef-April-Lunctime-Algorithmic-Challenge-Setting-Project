//teja349
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val
 
using namespace std; 
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout) 
#define primeDEN 727999983
 
 
pii pt[1234567]; 
int bit[4323456];
int offset;
int MAXN=4323456;
int update(int pos,int val){
	pos+=offset;
	while(pos<MAXN){
		bit[pos]+=val;
		pos+=pos&(-pos);
	}
	return 0;
}
 
int query(int pos){
	pos+=offset;
	int ans=0;
	while(pos){
		ans+=bit[pos];
		pos-=pos&(-pos);
	}
	return ans;
}
 
int ans[1234567],l[1234567],r[1234567];
signed main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int i;
		rep(i,n){
			cin>>pt[i].ff>>pt[i].ss;
			pt[i].ff*=2;
			pt[i].ss*=2;
		}
		sort(pt,pt+n);
		// forward step take the mid line also.
		vii aft,bef;
		int mid;
		rep(i,q){
			cin>>l[i]>>r[i];
			l[i]*=2;
			r[i]*=2;	
			mid=(l[i]+r[i])/2;
			aft.pb(mp(mid,i));
			bef.pb(mp(mid,i));
		}
		sort(all(bef));
		sort(all(aft));
		int j=0,ind;
		offset=2234567;
		pt[n].ff=inf;
		rep(i,n){
			while(j<aft.size() && aft[j].ff<pt[i].ff){
				ind=aft[j].ss;
				ans[ind]+=i-query(l[ind]-1);
				j++;
			}
			update(pt[i].ff-pt[i].ss,1);
			//cout<<pt[i].ff<<"  lol "<<pt[i].ff-pt[i].ss<<endl;
			
		}
		while(j<aft.size()){
			ind=aft[j].ss;
			ans[ind]+=i-query(l[ind]-1);
			j++;
		}
		rep(i,n){
			update(pt[i].ff-pt[i].ss,-1);
		}
		j=bef.size();
		j--;
		offset=2;
		fd(i,n-1,0){
			while(j>=0 && bef[j].ff>=pt[i].ff){
				ind = bef[j].ss;
				ans[ind]+=query(r[ind]);
				j--;
			}
			update(pt[i].ff+pt[i].ss,1);
		}
		while(j>=0){
			ind = bef[j].ss;
			ans[ind]+=query(r[ind]);
			j--;
		}
		rep(i,n){
			update(pt[i].ff+pt[i].ss,-1);
		}
		rep(i,q){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
 
  