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
    int t;
    int n,m;
    int a[1050];
    cin>>t;
    while(t--)
    {
        
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(a[0]<=m)
                {
                    if(a[0]+a[j]<=m)
                    {
                        a[0]+=a[j];
                        a[j]-=a[j];
                    }
                    else if(m-a[0])
                    {
                        a[0]+=(m-a[0]);
                        
                    }
                }
                else if(a[0]==m)
                    break;
            }
        }
        cout<<a[0]<<endl;
    }
    return 0;
}