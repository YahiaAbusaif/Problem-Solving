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
#define sc(u) scanf(" %lld",&u);
#define sc2(u,x) scanf("%lld %lld",&u,&x);
#define pr(u) printf("%d",u);
#define mem(u,x) memset(u,x,sizeof(u));
#define makeoutfile(out) ofstream out; out.open("text.txt", ios::out);
#define makeinfile(s) ifstream s; s.open("test.txt", ios::in);
int const diff = 'a' - 'A';
sh const soo = 32767;
int const oo = 2147483647;
ll const loo = 9223372036854775807;

bool arr[1002][1002];
int n;
int x8[8] = { 0,0,1,-1,1,1 ,-1 ,-1 };
int y8[8] = { 1,-1,0,0,-1,1,1,-1 };

void dfs(int x,int y)
{
	if(x<0||y<0||n<x||n<y)
		return;
	if(!arr[x][y])
		return;
	arr[x][y]=0;
	lop(i,8)
		dfs(x+x8[i],y+y8[i]);
}

int main()
{
	int x=1;
	mem(arr,0);
	while (cin>>n)
	{
		int ans=0;
		lop(i,n)
		{
			lop(j,n)
			{
				inc(u);
				arr[i][j]=(u=='1');
			}
		}
		lop(i,n)
		{
			lop(j,n)
			{
				if(arr[i][j])
				{
					ans++;
					dfs(i,j);
				}
			}
		}
		cout<<"Image number "<<x++<<" contains "<<ans<<" war eagles."<<endl;
	}

}
