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
    cin >> t;

    while(t--) {

        int size, odd = 0, even = 0;
        cin >> size;

        int arra[size];

        for(int i = 0 ; i < size ; i++){

            cin >> arra[i];

            if( i % 2 != arra[i] % 2) {
                
                if(arra[i] % 2 != 0){
                    odd++;
                }
                else{
                    even++;
                }
            }
    
        }
        if(odd == even){
            cout<<even<<'\n';
        }
        else{
            cout<< "-1\n";
        }

    }

    return 0;
}

