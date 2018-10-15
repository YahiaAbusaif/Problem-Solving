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




//disjoint
const int N=1000;
int p[N];
int find(int u)
{
	if(u==p[u])
		return u;
	return p[u]=find(p[u]);
}
bool unio(const int & a,const int & b)
{
	int p1=find(a),p2=find(b);
	p[p2]=p1;
	return (p1!=p2);
}

int test,n,m,a,b;
ii pos[1000];
vector<pair<int, ii> > cost;
vector <ii> ans;

int cal(const int & i,const int & j)
{
	int x=pos[i].first-pos[j].first,y=pos[i].second-pos[j].second;
	x*=x,y*=y;
	return x+y;
}

void MST()
{
	sort(cost.begin(),cost.end());
	lop(i,cost.size())
	{
		if(unio(cost[i].second.first,cost[i].second.second))
			ans.push_back(make_pair(cost[i].second.first,cost[i].second.second));
	}
}

void init()
{
	cost.clear();
	ans.clear();

	cin>>n;
	lop(i,n)
		cin>>pos[i].first>>pos[i].second;
	lop(i,n)
		p[i]=i;
	
	
	cin>>m;
	lop(i,m)
	{
		cin>>a>>b;
		unio(a-1,b-1);
	}
	lop(i,n)
	{
		loop(j,i+1,n)
			cost.push_back(make_pair(cal(i,j),make_pair(i,j)));
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//makeoutfile("output.txt");
	cin>>test;
	while(test--)
	{
		init();
		MST();
		if(ans.size()==0)
			cout<<"No new highways need\n";
		lop(i,ans.size())
			cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
		if(test>0)
			cout<<"\n";
	}
	return 0;
}