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
#define PI 3.14159265
int const diff = 'a' - 'A';
sh const soo = 32767;
int const oo = 2147483647;
ll const loo = 9223372036854775807;
int dx[8] = { 0,0,1,-1,1,1 ,-1 ,-1 };
int dy[8] = { 1,-1,0,0,-1,1,1,-1 };
int row,col;

bool ill(int i, int j)
{
	return (i > -1 && j > -1 && i < row && j < col);
}
double x[4];
double y[4];

int main()
{
	while (cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3])
	{
		int last1=-1,last2=-1;
		while(last2==-1)
		{
			last1++;
			loop(i,last1+1,4)
			{
				if(x[i]==x[last1]&&y[i]==y[last1]&& last1!=i)
					last2=i;
			}
		}
		double ansx,ansy;
		if(last1!=1)
		{
			float curr=x[0];
			x[0]=x[1];
			x[1]=curr;
			curr=y[1];
			y[1]=y[0];
			y[0]=curr;
		}
		if(last2!=2)
		{
			float curr=x[2];
			x[2]=x[3];
			x[3]=curr;
			curr=y[3];
			y[3]=y[2];
			y[2]=curr;
		}
		ansx=x[3]+(x[0]-x[1]),ansy=y[3]+(y[0]-y[1]);
		printf("%.3f %.3f\n",ansx,ansy);
	}

}