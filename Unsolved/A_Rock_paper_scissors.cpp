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

    string F, M , S;
    cin >> F >> M >> S;

    string s = "";

    s = s + F[0] + M[0] + S[0];

    sort(s.begin(),s.end());

    if(s == "prr"){
        if(F[0] == 'p'){
            cout << "F\n";
        }
        else if(M[0] == 'p'){
            cout << "M\n";
        }
        else if(S[0] == 'p'){
            cout << "S\n";
        }

    }
    else if(s == "pps"){
        if(F[0] == 's'){
            cout << "F\n";
        }
        else if(M[0] == 's'){
            cout << "M\n";
        }
        else if(S[0] == 's'){
            cout << "S\n";
        }

    }else if(s == "rss"){
        if(F[0] == 'r'){
            cout << "F\n";
        }
        else if(M[0] == 'r'){
            cout << "M\n";
        }
        else if(S[0] == 'r'){
            cout << "S\n";
        }

    }
    else{
        cout <<"?\n";
    }



    return 0;
}
