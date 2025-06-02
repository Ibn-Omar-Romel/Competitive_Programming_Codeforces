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

    while (t--)
    {
        int size;
        cin>>size;

        int sticks[size];
        int difference[size];

        for(int i = 0 ; i < size ; i++){

            cin>>sticks[i];
        }

        sort(sticks, sticks+size);

        difference[0]= 0;

        int minimum = INT_MAX;

        for(int i = 1 ; i < size ; i++) {
            
            difference[i] = sticks[i] - sticks[i-1];
            
            if(i >= 2){
                
                minimum = min(minimum,(difference[i]+difference[i-1]));
            }
        }


        cout<< minimum << '\n';
    }

    return 0;
}

