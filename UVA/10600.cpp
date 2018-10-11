//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <stdio.h>
#include <sstream>
#include <memory.h>
#include <bitset>
#include <cstring>
#include <iomanip>
#include <valarray>
#include <fstream>
#include <functional>
#include <utility>
#include <numeric>


using namespace std;
typedef short int sh;
typedef unsigned short int ush;
typedef long long ll;
typedef unsigned long long ull;

#define sz(v) (int)v.size()
#define rsz(v,r) v.resize(r)
#define clr(v) v.clear()
#define pub(v,l) v.push_back(l)
#define pob(v) v.pop_back()
#define vi vector<int>
#define ii pair<int, int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vc vector<char>
#define vvc vector<vector <char> >
#define vs vector<string>
#define lop(i,n) for(int i=0; i<n; i++)
#define rlop(i,n) for(int i=n-1; i>=0; i--)
#define loop(i,start,n) for(int i=start; i<n; i++)
#define rloop(i,end,n) for(int i=n-1; i>=end; i--)
#define in(u) ll u; cin>>u;
#define in2(u,x) ll u,x; cin>>u>>x;
#define inc(u) char u; cin>>u;
#define ins(u) string u; cin>>u;
#define sc(u) scanf(" %I64d",&u);
#define sc2(u,x) scanf("%lld %lld",&u,&x);
#define pr(u) printf("%d",u);
#define mem(u,x) memset(u,x,sizeof(u));
#define makeoutfile(out) freopen(out,"w",stdout);
#define makeinfile(s) freopen(s,"r",stdin);
#define PI 3.14159265
int const diff = 'a' - 'A';
sh const soo = 32767;
int const oo = 2147483647;
ll const loo = 9223372036854775807;
int dx[] = { 0,0,1,-1,1,1,-1,-1 };
int dy[] = { 1,-1,0,0,-1,1,1,-1 };
int amod(int a, int b) {return (a % b + b) % b;}

int gcd(int u, int v)
{
	if(v==0)
		return u;
	return gcd(v,u%v);
}

/*
int row,col;
bool ill(int i, int j)
{
return (i > -1 && j > -1 && j < row && i < col);
}*/

const int N=111;


//disjoint
int p[N];
int find(int u)
{
	if(u==p[u])
		return u;
	return p[u]=find(p[u]);
}

int test,n,m,a,b,c,ans1,ans2,sum,p1,p2;


vector<pair<int,ii> > edg;
vi res;

void mst()
{
	sort(edg.begin(),edg.end());
	lop(i,m)
	{
		p1=find(edg[i].second.first),p2=find(edg[i].second.second);
		if(p1!=p2)
		{
			ans1+=edg[i].first,p[p2]=p1;
			res.push_back(i);
		}
			
	}
	lop(i,res.size())
	{
		lop(j,102)
			p[j]=j;
		sum=0;
		lop(j,edg.size())
		{
			if(j==res[i])
				continue;
			p1=find(edg[j].second.first),p2=find(edg[j].second.second);
			if(p1!=p2)
				sum+=edg[j].first,p[p2]=p1;
		}
		a=find(1),b=1;
		loop(j,1,n)
		{
			if(find(j)!=a)
				b=0;
		}
		if(b)
			ans2=min(ans2,sum);
	}
}


int main()
{
	
	cin>>test;
	while (test--)
	{
		lop(i,102)
			p[i]=i;
		cin>>n>>m;
		n++;
		edg.clear();
		res.clear();
		lop(i,m)
		{
			cin>>a>>b>>c;
			edg.push_back(make_pair(c,make_pair(a,b)));
		}
		ans1=0,ans2=oo;
		mst();
		cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}