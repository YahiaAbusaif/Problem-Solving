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
#include <chrono>
#include <unordered_map>


using namespace std;
typedef short int sh;
typedef unsigned short int ush;
typedef long long ll;
typedef unsigned long long ull;


#define ii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define lop(i,n) for(int i=0; i<n; i++)
#define rlop(i,n) for(int i=n-1; i>=0; i--)
#define loop(i,start,n) for(int i=start; i<n; i++)
#define rloop(i,end,n) for(int i=n-1; i>=end; i--)
#define in1(u) ll u; cin>>u;
#define in2(u,x) ll u,x; cin>>u>>x;
#define inc(u) char u; cin>>u;
#define ins(u) string u; cin>>u;
#define sc(u) scanf(" %I64d",&u);
#define sc2(u,x) scanf("%lld %lld",&u,&x);
#define pr(u) printf("%d",u);
#define mem(u,x) memset(u,x,sizeof(u));
#define PI 3.14159265

int const diff = 'a' - 'A';
sh const soo = 32767;
int const oo = 2147483647;
ll const loo = 9223372036854775807;
int dx[] = { 0,0,1,-1,1,1,-1,-1 };
int dy[] = { 1,-1,0,0,-1,1,1,-1 };
int amod(int a, int b) {return (a % b + b) % b;}
int const MOD=998244353;

int gcd(int u, int v)
{
	if(v==0)
		return u;
	return gcd(v,u%v);
}


int row,col;
bool ill(int i, int j)
{
return (i > -1 && j > -1 && j < row && i < col);
}

ll Mpow(ll base,int power)
{
	if(power<1) return 1;
	ll sqrt= Mpow(base,power>>1)%MOD;
	sqrt=(sqrt*sqrt)%MOD;
	if(power&1)
		return (sqrt*base)%MOD;
	return sqrt;
}

/*
int const N=5000005;
int prim[500000];
bool p[N];
int last=0;

void findpm()
{

	prim[last++]=2;
	for (int i = 3; i < N; i+=2)
	{
		if (p[i])
			continue;
		prim[last++]=i;
		for (int j = (i<<1); j < N; j += i)
			p[j] = 1;
	}
}*/

void init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("two-cities.txt","r",stdin);
	//freopen("output.txt","w",stdout);
}


const int N=100010;
int p[N];
int sum[N];
int find(int u)
{
	if(u==p[u])
	return u;
	return p[u]=find(p[u]);
}
bool unio( int a,int b)
{
	int p1=find(a),p2=find(b);
	if(p1==p2)
		return 0;
	sum[p1]=sum[p1]+sum[p2];
	p[p2]=p1;
	return 1;
}




int main()
{
	init();
	in1(test);
	while(test--)
	{
		unordered_map<string, int> Mkey;
		int n,curr=1;
		lop(j,N)
			sum[j]=1,p[j]=j;
		cin>>n;
		lop(i,n)
		{
			string a,b;
			cin>>a>>b;
			int p1=Mkey[a];
			if(p1==0)
				p1=Mkey[a]=curr++;
			int p2=Mkey[b];
			if(p2==0)
				p2=Mkey[b]=curr++;
			unio(p1,p2);
			cout<<sum[p[p1]]<<endl;
		}
	}
	return 0;
}