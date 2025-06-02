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

    int k;
    cin>>k;

    int arra[12];
    for(int i = 0 ; i < 12 ; i++) {
        cin>>arra[i];
    }



    sort(arra, arra+12);
    int times = 0 ;
    int count = 0; 
    int check = 0;

    if(times == k){
        cout<<count<<'\n';
    }
    else{

        for(int i = 12-1 ; i >= 0 ; i--) {

            times = times + arra[i];
            count++;
            if(times >= k){
                cout<<count<<'\n';
                check++;
                break;
            }
            
        }

        if(check == 0){
            cout<<"-1\n";
        
        }

    }   

    return 0;
}

