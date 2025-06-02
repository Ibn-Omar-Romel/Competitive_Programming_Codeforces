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

    int t ;
    cin>>t;

    int index = 0;

    for (int i = 0; i < t; i++)
    {
        int size;
        cin>>size;
        string s;
        cin>>s;

        for(int j = 0 , k = size - 1 ; j < size/2 ; j++ , k--){

            if((s[j] == '0' and s[k] == '1') or (s[j] == '1' and s[k] == '0')) {

                index++;
            }
            else{
                break;
            }
        }

        if(index*2 == size){
            cout<<"0\n";
        }
        else
            cout<<size-(2*index)<<'\n';

        index = 0;
    }
    

    

    return 0;
}

