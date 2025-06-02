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

    while(t--) {

        int size;
        char digit;
        string s;

        cin >> size;
        cin >> digit;
        cin >> s;

        int check = 0 ;

        if(digit == '0'){
            s = s + digit;
            check++;
        }
        else{

            string s1 = "0";
            string s2 = "0";
            string ss = s;

            for(int i = 0 ; i < size ; i++) {

                if(s[i] - '0' < digit - '0'){

                    string st(1,digit);
                    ss.insert(i,st);
                    s1 = ss;
                    break;
                }

            }

            for(int j = size - 1 ; j >= 0 ; j--){

                if(s[j] - '0' >= digit - '0'){

                    s
                    s.insert(j+1,st);
                    s2 = s;
                    break;
                }
            }

            int x , y;
            istringstream(s1) >> x;
            istringstream(s2) >> y;


            if(x >= y){
                s = s1;
            }
            else{
                s = s2;
            }
        }


        cout << s << '\n';
    }
    return 0;
}

