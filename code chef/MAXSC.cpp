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
 
int res[720];
int main()
{
	in(t);
	vvi arr;
	arr.resize(720);
	lop(i, t)
	{
		in(n);
		ll sum = 0;
		lop(i, n)
		{
			lop(j, n)
			{
				in(d);
				arr[i].push_back(d);
			}
			sort(arr[i].begin(), arr[i].end());
			res[i] = arr[i][0];
		}
		res[n - 1] = arr[n - 1][n - 1];
		rlop(i, n - 1)
		{
			if (res[i] >= res[i + 1])
			{
				sum=-1;
				break;
			}
			lop(j, n)
			{
				if (arr[i][j] < res[i + 1])
					res[i] = arr[i][j];
				else
					break;
			}
		}
		if (sum != -1)
		{
			lop(i, n)
				sum += res[i];
		}
		cout << endl << sum;
		lop(i, n)
			arr[i].clear();
	}
} 