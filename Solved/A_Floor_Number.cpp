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

    while(t--){

        int n , x;
        cin>> n >> x;
        int floor = 1;
        int aprt = 2;

        if( n <= 2 ){
            cout<<"1\n";
        }
        else {
            //cout<<ceil((double)n/(double)x)<<'\n';

            while(true){

                aprt = aprt + x;
                floor++;

                if(aprt >= n){
                    cout<<floor<<'\n';
                    break;
                }
            }
        }
    }

    return 0;
}

