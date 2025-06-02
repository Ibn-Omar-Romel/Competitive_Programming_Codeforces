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

    while(t--) {

        int h, n, m;
        cin>> h >> n >> m;

        if( h <= 10 and m >= 1){
            cout<<"YES\n";
        }
        else{

            for(int i = 0 ; i < n ; i++){

                h = floor((double)h/(double)2) + 10;
            
            }

            for(int i = 0 ; i < m ; i++){

                h = h - 10;
                
            }

            if(h <= 0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }

    }

    return 0;
}

