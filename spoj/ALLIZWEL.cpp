typedef long long ll;
typedef unsigned long long ull;

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
using namespace std;

#define sz(v) (int)v.size()
#define rsz(v) v.resize
#define clr(v) v.clear()
#define vi vector<int>
#define ii pair<int, int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vc vector<char>
#define vs vector<string>
#define lop(i,n) for(int i=0; i<n; i++)
#define rlop(i,n) for(int i=n-1; i>=0; i--)
#define loop(i,start,n) for(int i=start; i<n; i++)
#define rloop(i,start,n) for(int i=n-1; i>=end; i--)
#define in(u) int u; cin>>u;

vector< vector<char> > matrix;
char targe[10];
int row, col;
pair<int, int> mycol[10];

bool dfs(int index, int locationr, int locationc)
{
	index++;
	if (index == 10)
		return true;
	bool test = false;
	locationc--;
	locationr--;
	lop(i, 3 && !test)
	{
		lop(j, 3 && !test)
		{
			if ((locationc >= 0 && locationr >= 0) && (locationc < col && locationr < row) && targe[index] == matrix[locationr][locationc] )
			{
				bool test1 = true;
				lop(k, index)
				{
					if (locationr == mycol[k].first && locationc == mycol[k].second)
						test1 = false;
				}
				if (test1)
				{
					mycol[index].first = locationr;
					mycol[index].second = locationc;
					test = dfs(index, locationr, locationc);
				}
			}
			locationc++;
		}
		locationc -= 3;
		locationr++;
	}
	return test;
}



int main()
{
	targe[0] = 'A';
	targe[1] = 'L';
	targe[2] = 'L';
	targe[3] = 'I';
	targe[4] = 'Z';
	targe[5] = 'Z';
	targe[6] = 'W';
	targe[7] = 'E';
	targe[8] = 'L';
	targe[9] = 'L';
	in(n);
	lop(j, n)
	{
		cin >> row >> col;
		matrix.clear();
		matrix.resize(row);
	
		lop(i, row)
		{
			lop(k, col)
			{
				char y;
				cin >> y;
				matrix[i].push_back(y);
			}
		}
		bool test = false;
		lop(i, row && !test)
		{
			lop(k, col && !test)
			{
				if (matrix[i][k] == 'A')
				{
					mycol[0].first = i;
					mycol[0].second = k;
					test = dfs(0, i, k);
				}
					
			}
		}
		if (test)
			cout << "YES";
		else
			cout << "NO";
		if (j != n - 1)
			cout << endl;
	}
	return 0;
}