#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;

#define ll long long int
#define vec vector
#define st string

int main()
{
    long int x,y,i,j,k,m,n,a[100000],b[100000];
    while(cin>>x>>y)
    {
        cin>>k>>m;
        for(i=1;i<=x;i++)
            cin>>a[i];

        for(j=1;j<=y;j++)
            cin>>b[j];
        if(a[k]<b[y-m+1])
                cout<<"YES\n";
            else
                cout<<"NO\n";
    }
    return 0;
}