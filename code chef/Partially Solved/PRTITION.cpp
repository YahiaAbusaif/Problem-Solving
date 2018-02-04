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
	in(t);
	int arr[1000010];
	lop(j, t)
	{
		cout << endl;
		in(x);
		in(n);
		ll sum = 0, sum1 = 0,sum2=0;
		lop(i, n+1)
		{
			arr[i] = -1;
			sum += i;
		}
		sum -= x;
		sum = sum >> 1;
		arr[x] = 2;
		int curr = n;
		while (1)
		{
			if (arr[curr] < 0)
			{
				if (sum1 + curr < sum)
				{
					arr[curr] = 0;
					sum1 += curr;
				}
				else
					break;
			}
			curr--;
		}
		rlop(i, curr + 1)
		{
			if (arr[i] < 0)
			{
				sum2 += i;
				arr[i] = 1;
			}
		}
		int d = (sum2 - sum1) / 2;
		if(arr[d]==1)
		{
			arr[d] = 0;
			sum1 += d;
			sum2 -= d;
		}
 
		if (sum2 != sum1)
		{
			cout << "impossible";
			continue;
		}
		loop(i,1,n+1)
			cout << arr[i];
	}
}