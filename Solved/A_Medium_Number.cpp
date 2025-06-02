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

    int t;
    cin>>t;

    for(int i = 0 ; i < t ; i++) {

        int a,b,c;
        cin>>a>>b>>c;

        if((a>b and a<c) or (a>c and a<b))
            cout<<a<<'\n';
        
        else if((b>a and b<c) or (b>c and b<a))
            cout<<b<<'\n';
        
        else
            cout<<c<<'\n';
    }

    return 0;
}

