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

    int n;
    cin>>n;

    int M = 0, C = 0;

    while(n--) {

        int m,c;
        cin>>m>>c;

        if(m>c) 
            M++;
        else if(c>m) 
            C++;
        else 
            continue;
    }

    if(M > C)
        cout<<"Mishka\n";
    else if(C > M)
        cout<<"Chris\n";
    else
        cout<<"Friendship is magic!^^\n";

    return 0;
}