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
#define sc(u) scanf("%d",&u);
#define pr(u) printf("%d",&u);
#define makeoutfile(out) ofstream out; out.open("text.txt", ios::out);
#define makeinfile(s) ifstream s; s.open("test.txt", ios::in);
int const diff = 'a' - 'A';
int const oo = 2147483647;
ll const loo = 1e18 + 9;

ii arr[20010];

bool cmp(const ii &f,const ii & sec)
{
	if (f.first > sec.first)
		return true;
	else if (f.first == sec.first)
	{
		if (f.second < sec.second)
			return true;
		return false;
	}
	else
		return false;
}

int main()
{
	//not accepted
	int n, t;
	sc(t);
	multiset<int> res;
	multiset<int>::iterator it;
	int y=0;
	lop(j, t)
	{
		if(y++) cout<<endl;
		sc(n);
		lop(i, n)
		{
			sc(arr[i].first);
			sc(arr[i].second);
		}
		sort(arr, arr + n, cmp);
		res.clear();
		lop(i,n)
		{
			it = res.upper_bound(arr[i].second);
			if (it!=res.end())
				res.erase((*it));
			res.insert(arr[i].second);
		}
		int y=res.size();
		cout<<y;
	}
}
