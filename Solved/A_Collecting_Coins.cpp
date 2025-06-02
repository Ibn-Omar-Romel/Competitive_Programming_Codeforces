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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int a,b,c,n;

        cin>>a>>b>>c>>n;

        int sum = a + b + c + n;

        int minimum = max(max(a,b),c);

        if(sum % 3 == 0 and sum / 3 >= minimum )
            cout<<"YES\n";
    
        else
            cout<<"NO\n";
        
    }
    return 0;
}

