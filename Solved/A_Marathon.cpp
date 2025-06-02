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
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {

    int t,a,b,c,d, count = 0;
    cin>>t;

    for (int  i = 0; i < t; i++)
    {
        cin>>a>>b>>c>>d;
        if(a < b)
            count++;
        if(a < c)
            count++;
        if(a < d)
            count++;
        
        cout<<count<<'\n';
        count = 0;

    }
    


    return 0;
}