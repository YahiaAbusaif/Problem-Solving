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
int row,col;
 
bool ill(int i, int j)
{
	return (i > -1 && j > -1 && i < row && j < col);
}
 
int ans;
char arr[110][110];
 
void dfs(int x,int y)
{
	if(!ill(x,y)|| arr[x][y]=='.')
		return;
	arr[x][y]='.';
	lop(i,4)
		dfs(x+x8[i],y+y8[i]);
}
 
 
int main()
{
	in(test);
	lop(k,test)
	{
		in(N);
		ans=0,row=col=N;
		lop(i,N)
			lop(j,N)
			cin>>arr[i][j];
		lop(i,N)
			lop(j,N)
			{
				if(arr[i][j]=='x')
				{
					ans++;
					dfs(i,j);
				}
			}
		cout<<"Case "<<k+1<<": "<<ans<<endl;
	}
}