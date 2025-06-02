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

    int n , m ; 
    int days = 0;

    cin>>n>>m;

    int temp = n ;
    
    while(true) {

        n = n - m ;

        if(n < 0)
            break;
        else{
            days++;
            n = n + 1;

        }
    }

    cout<<temp+days<<'\n';



    return 0;
}