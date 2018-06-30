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
#define makeoutfile(out) ofstream out; out.open("text.txt", ios::out);
#define makeinfile(s) ifstream s; s.open("test.txt", ios::in);
int const diff = 'a' - 'A';
sh const soo = 32767;
int const oo = 2147483647;
ll const loo = 9223372036854775807;
int x8[8] = { 0,0,1,-1,1,1 ,-1 ,-1 };
int y8[8] = { 1,-1,0,0,-1,1,1,-1 };

string s="@IEHOVA";
char arr[10][10];
int row,col,tx,ty;
vector<string> ans;
bool visit[10][10];
bool ill(int i, int j)
{
	return (i > -1 && j > -1 && i < row && j < col);
}

bool check(int x,int y)
{
	if( arr[y][x] == '#')
		return 1;
	bool pass=1;
	lop(i,s.size())
		if(arr[y][x]==s[i])
			pass=0;
	if(pass || visit[y][x])
		return 0;
	visit[y][x]=1;
	if(ill(y,x+1) && check(x+1,y))
	{
		ans.push_back("right");
		return 1;
	}
	if(ill(y,x-1) && check(x-1,y))
	{
		ans.push_back("left");
		return 1;
	}
	if(ill(y-1,x) && check(x,y-1))
	{
		ans.push_back("forth");
		return 1;
	}
	
}


int main()
{
	in(test);
	lop(i,test)
	{
		mem(visit,0);
		ans.clear();
		cin>>row>>col;
		lop(j,row)
			lop(k,col)
			{
				cin>>arr[j][k];
				if(arr[j][k]=='@')
					tx=k,ty=j;
			}
		check(tx,ty);
		int d=ans.size()-1;
		while (d>0)
			cout<<ans[d--]<<" ";
		cout<<ans[0]<<endl;
	}
}
