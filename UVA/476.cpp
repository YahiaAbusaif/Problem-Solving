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
int x8[8] = { 0,0,1,-1,1,1 ,-1 ,-1 };
int y8[8] = { 1,-1,0,0,-1,1,1,-1 };
int row,col;

bool ill(int i, int j)
{
	return (i > -1 && j > -1 && i < row && j < col);
}

float arr[11][4];

int main()
{
	//makeoutfile(out);
	inc(r);
	int curr=0;
	while(r=='r')
	{
		float x,y,z,w;
		cin>>x>>y>>z>>w;
		arr[curr][0]=min(x,z);
		arr[curr][2]=max(x,z);
		arr[curr][1]=min(y,w);
		arr[curr][3]=max(y,w);
		curr++;
		cin>>r;
	}
	float x,y;
	int point=1;
	cin>>x>>y;
	while( !( x>9999.8 && y>9999.8 ) )
	{
		bool test=1;
		lop(i,curr)
		{
			if((x>arr[i][0]&& x<arr[i][2])&&(y>arr[i][1]&&y<arr[i][3]))
			{
				test=0;
				cout<<"Point "<< point<<" is contained in figure "<<i+1<<endl;
			}
		}
		if(test)
			cout<<"Point "<<point<<" is not contained in any figure"<<endl;
		point++;
		cin>>x>>y;
	}

}