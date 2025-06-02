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

    int n ;
    cin>>n;

    int a, b, c;

    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;

        if(a+b == c) {
            cout<<"YES\n";
        }
        else if(a+c == b) {
            cout<<"YES\n";
        }
        else if(b+c == a) {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    
    return 0;
}