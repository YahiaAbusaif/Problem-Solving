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
#define in(u) int u; cin>>u;
#define inc(u) char u; cin>>u;
#define ins(u) string u; cin>>u;
#define makeoutfile(out) ofstream out; out.open("text.txt", ios::out);
#define makeinfile(s) ifstream s; s.open("test.txt", ios::in);
int const diff = 'a' - 'A';
int const oo = 2147483647;
ll const loo = 1e18 + 9;
 
int main()
{
	string y,x;
	bool test = 0;
	while (cin>>x>>y)
	{
		if (x == "0" || y == "0")
		{
			cout << 0 << endl;
			continue;
		}
		int t = x.size() + y.size();
		vi res(t,0);
		rlop(i, x.size())
		{
			int n = x[i] - '0';
			rlop(j, y.size())
			{
				int h = y[j] - '0';
				res[i + j+1] += h * n;
			}
		}
		int carry = 0;
		rlop(i, t)
		{
			res[i] = res[i]+carry;
			carry = res[i] / 10;
			res[i] = res[i] % 10;
		}
		int curr = 0;
		while (res[curr] == 0 && t)
			curr++;
		loop(i,curr,t)
			cout << res[i];
		cout << endl;
	}
	return 0;
}