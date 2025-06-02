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

    int t ; 
    cin >> t;

    while(t--){

        int size, check = 0 ;
        string s ;

        cin >> size;
        cin >> s;
        int checkm = 0 , checke = 0 , checko = 0 , checkw = 0, checkOther = 0, wrong = 0 ;


        for( int i = 0 ; i < size - 1 ; i++ ) {

            if(s[i] == 'M' or s[i] == 'm')
                checkm++;
            else if(s[i] == 'E' or s[i] == 'e')
                checke++;
            else if(s[i] == 'O' or s[i] == 'o')
                checko++;
            else if(s[i] == 'W' or s[i] == 'w')
                checkw++;
            else{
                checkOther++;
                break;
            }

            if( s[i] == 'M' || s[i] == 'm' ) {

                if( (s[i+1] != 'm' && s[i+1] != 'M') && (s[i+1] != 'E' && s[i+1] != 'e' )){

                    wrong++;
                    break;
                }
            }

            else if( s[i] == 'E' || s[i] == 'e' ) {

                if( (s[i+1] != 'E' && s[i+1] != 'e') && (s[i+1] != 'O' && s[i+1] != 'o' )){

                    wrong++;
                    break;
                }
            }

            else if( s[i] == 'O' || s[i] == 'o' ) {

                if( (s[i+1] != 'O' && s[i+1] != 'o') && (s[i+1] != 'W' && s[i+1] != 'w' )){

                    wrong++;
                    break;
                }
            }

            else if( (s[i] == 'W' || s[i] == 'w' )) {

                if( s[i+1] != 'W' && s[i+1] != 'w'){

                    wrong++;
                    break;
                }

            }

        }

        if(s[size-1] == 'W' || s[size-1] == 'w')
            checkw++;

        if( checkm > 0 and checke > 0 and checko > 0 and checkw > 0 and wrong == 0 and checkOther == 0) {

            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
