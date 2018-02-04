#include <iostream>
#include <stdio.h>
#include <memory.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
#include <string>
#include <cstring>
#include <iomanip>
#include <valarray>
#include <sstream>
#include <fstream>
#include <functional>
#include <utility>
#include <numeric>
#include <iterator>
#include <set>
#include <map>
#include <queue>
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
#define inc(u) char u; cin>>u;
#define ins(u) string u; cin>>u;
#define makeoutfile(out) ofstream out; out.open("text.txt", ios::out);
#define makeinfile(s) ifstream s; s.open("test.txt", ios::in);
int const diff = 'a' - 'A';
int const oo = 2147483647;
ll const loo = 1e18 + 9;

int gcd(int u, int v)
{
	while (v != 0) {
		int r = u % v;
		u = v;
		v = r;
	}
	return u;
}

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		ll g=m,h=n;
		string u=to_string(n);
		int j=u.size();
		while(j<10)
		{
			cout<<" ";
			j++;
		}
		cout<<u;
		u=to_string(m);
		j=u.size();
		while(j<10)
		{
			cout<<" ";
			j++;
		}
		cout<<u;
		if (gcd(n,m)==1)
			cout<<"    Good Choice";
		else
			cout<<"    Bad Choice";
		cout<<endl<<endl;
	}
}

