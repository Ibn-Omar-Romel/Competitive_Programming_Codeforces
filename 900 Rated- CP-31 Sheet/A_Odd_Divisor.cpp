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

    int n , rem = 0 , check = 0 ;
    long long int deci = 0;
    cin>>n;

    for(int i = 0 ; i < n ; i++) {

        cin >> deci;
        while (deci != 0) {

            rem = deci % 2;
            if(rem == 1)
                check++;

            if(check > 1){
                break;
            }
                
            
            deci = deci / 2;
        }
        if(check <= 1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

            check = 0;
    }
    return 0;
}