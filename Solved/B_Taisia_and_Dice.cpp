// Khud Pe Hak Mera
//Tere Hawaale Kar Diya



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
#include <iomanip> 
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n, s, r;
        cin >> n >> s >> r;

        int max = s - r;
        n--;
        cout << max << " ";

        int arra[n];
        for(int i = 0 ; i < n ; i++){

            arra[i] = 1;
        }

        r = r - n;

        int Index = 0;
        for(int i = 0 ; i < r ; i++){

            if(arra[Index] == max) {
                
                Index++;
                arra[Index]++;
            }
            else{
                arra[Index]++;
            }
        }

        for(int i = 0 ; i < n ; i++) {

            cout << arra[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}