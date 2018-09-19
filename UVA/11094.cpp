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

char arr[25][25],tar;
bool vis[25][25];
int ans,n,m;

void dfs(int x,int y)
{
	if(x<0||x>=n || vis[x][y] || arr[x][y]!=tar)
		return;
	vis[x][y]=1,ans++;
	lop(i,4)
		dfs(x+dx[i],amod(y+dy[i],m));
}

int main()
{
	while(cin>>n>>m)
	{
		mem(vis,0);
		ans=0;
		lop(i,n)
		{
			lop(j,m)
				cin>>arr[i][j];
		}
		int currx,curry,mx=0;
		cin>>currx>>curry;
		tar=arr[currx][curry];
		dfs(currx,curry),ans=0;
		lop(i,n)
		{
			lop(j,m)
			{
				if(!vis[i][j]&&arr[i][j]==tar)
					dfs(i,j),mx=max(mx,ans),ans=0;
			}
		}
		cout<<mx<<endl;	
	}
	return 0;
}