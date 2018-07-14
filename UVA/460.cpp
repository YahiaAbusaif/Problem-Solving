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



int main()
{
	in(testcase);
	lop(i,testcase)
	{
		int x1,x2,y1,y2,X1,X2,Y1,Y2;
		cin>>x1>>y1>>x2>>y2;
		cin>>X1>>Y1>>X2>>Y2;
		if( x1<=X1 && X1<x2)
		{
			if (y1<=Y1 && Y1<y2)
				cout<<X1<<" "<<Y1<<" "<<min(x2,X2)<<" "<<min(y2,Y2)<<endl;
			else if(Y1<=y1&&y1<Y2)
				cout<<X1<<" "<<y1<<" "<<min(x2,X2)<<" "<<min(y2,Y2)<<endl;
			else
				cout<<"No Overlap"<<endl;
		}
		else if(X1<x1&& x1<X2)
		{
			if (Y1<=y1 && y1<Y2)
				cout<<x1<<" "<<y1<<" "<<min(x2,X2)<<" "<<min(y2,Y2)<<endl;
			else if(y1<Y1 && Y1<y2)
				cout<<x1<<" "<<Y1<<" "<<min(x2,X2)<<" "<<min(y2,Y2)<<endl;
			else
				cout<<"No Overlap"<<endl;
		}
		else 
			cout<<"No Overlap"<<endl;
		if(i!=testcase-1)
			cout<<endl;
	}
}