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

    int t, n, count = 0 , index = 0;
    
    cin>>t;

    for(int i = 0 ; i < t ; i++) {

        cin>>n;
        int x[n];

        for(int j = 0 ; j < n ; j++) {

            cin>>x[j];

            if(count > 0 and index == 0 ) {

                if(x[j-1] != x[j]) {
                    
                    index = j;
                }
            }
            count++; 
        }

        if(x[0] != x[1] and x[1] == x[2])
            index = 0;

        cout<<index+1<<'\n';

        count = 0;
        index = 0;
    }

    



    return 0;
}

