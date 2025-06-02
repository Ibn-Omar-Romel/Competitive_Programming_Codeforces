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

    while(t--){

        int size;
        cin >> size ;
        int arra[size];
        for(int i = 0; i < size; i++){
            cin >> arra[i];
        }

        string st;
        vector < string > s;
        vector < string > temp;
        cin >> st;

        s.push_back(st);
        temp.push_back(st);

        for(int i = 0 ; i < size ; i++ ) {

            
            for ( int j = 0 ; j < size ; j++ ) {

                if( arra[i] == arra[j]){

                    temp[j] = s[i];
                }   
            }
        }

        (s == temp)?  cout << "YES\n" : cout << "NO\n";


    }

    return 0;
}