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


int amod(int a, int b) {return (a % b + b) % b;}

int n;
int arr1[200010];
int arr2[200010];

int main()
{
	sc(n);
	while(n!=0)
	{
		lop(i,n)
			scanf("%d %d",&arr1[i],&arr2[i]);
		int ans1=0,ans2=0,currx=arr1[(n>>1)],curry=arr2[(n>>1)];
		lop(i,n)
		{
			if(currx==arr1[i]||curry==arr2[i])
				continue;
			if((currx>arr1[i]&&curry>arr2[i])||(currx<arr1[i]&&curry<arr2[i]))
				ans1++;
			else
				ans2++;
		}
		printf("%d %d\n",ans1,ans2);
		sc(n);
	}
	 return 0;
}