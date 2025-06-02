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

    int t;
    cin>>t;

    while(t--) {

        int size;
        string s;

        cin>>size;
        cin>>s;

        int T = 0 , M = 0 , RT = 0, RM = 0;
        int check = 0;

        for(int i = 0 , j = s.length()-1 ; i < s.length() ; i++, j--) {

            if( s[i] == 'T' ) T++;
            else if( s[i] == 'M' ) M++;


            if( s[j] == 'T' ) RT++;
            else if( s[j] == 'M' ) RM++;

            if( M > T or RM > RT ){
                cout<<"NO\n";
                check++;
                break;
            }
        }

        if( (T != 2*M or RT != 2*RM) and check == 0){
            cout<<"NO\n";
        }
        else if(check == 0){
            cout<<"YES\n";
        }
    }

    

    return 0;
}

