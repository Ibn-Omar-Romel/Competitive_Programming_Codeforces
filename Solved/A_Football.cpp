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

    int n;
    int count = 0, checker = 0 ;

    string team1 , team2;
    int t1 = 0, t2 = 0;

    cin>>n;

    string teams [n];

    for(int i = 0 ; i < n ; i++){

        cin>>teams[i];

        

        if(teams[i] != teams[i-1] and count > 0){

            checker++;

            team1 = teams[i-1];
            team2 = teams [i];
        }

        count++;
        
    }

    if(n == 1 || checker == 0){
        cout<<teams[0]<<'\n';
    }
    else{
        for(int i = 0 ; i < n ; i++){

        if(teams[i] == team1)
            t1++;

        else
            t2++;
    }

    if(t1 > t2)
        cout<<team1<<'\n';
    else
        cout<<team2<<'\n';
    }
    return 0;
}