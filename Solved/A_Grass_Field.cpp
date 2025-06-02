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

    int t, a , b , c , d, count = 0;
    cin>>t;

    for(int i = 0 ; i < t ; i++) {

        cin>>a>>b>>c>>d;

        
        if(a == 0 and b == 0 and c == 0 and d == 0 )
            cout<<"0\n"; 
        else if(b == 1 and c == 1 and (a == 0 or d == 0))
            cout<<"1\n";
        else if(a == 1 and d == 1 and (c == 0 or b == 0))
            cout<<"1\n";
        else if(a == 1 and d == 1 and (c == 1 or b == 1))
            cout<<"2\n";
        else{
            cout<<"1\n";
        }
        
        
    }
    return 0;
}