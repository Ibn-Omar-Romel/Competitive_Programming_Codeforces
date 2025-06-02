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
        long long int i,j,k;
        long long int n,c,count=0;

        cin>>n>>c;
        long long int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n-1;i++)
        {
                if(a[i+1]-a[i]>c)
                    count=0;
                else
                    count++;
        }

        cout<<count+1;

        return 0;
}