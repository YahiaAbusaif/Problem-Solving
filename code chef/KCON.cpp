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
	int arr[1000000];
	lop(j, t)
	{
		in(n);
		in(k);
		ll sum = 0, sum1 = 0, sum2=0;
		lop(i, n)
		{
			cin >> arr[i];
			sum += arr[i];
			sum1 += arr[i];
			if (sum1 < 0)
				sum1 = 0;
			arr[n + i] = arr[i];
		}
		sum2=sum1;
		if (k>1)
		{
		    sum1+=(sum * (k-2) );
    		sum2=sum1;
    		lop(i, n)
    		{
    			sum1 += arr[i];
    			sum2=max(sum2,sum1);
    		}
    		n = n << 1;
		}
		sum1 = max(sum2, sum*k);
		sum2=-100000000;
		sum = 0;
		lop(i, n)
		{
			sum += arr[i];
			sum2 = max(sum2, sum);
			if (sum < 0)
				sum = 0;
		}
		sum1=max(sum2,sum1);
		if (sum2<0)
		    sum1=sum2;
		cout << endl << sum1;
	}
} 