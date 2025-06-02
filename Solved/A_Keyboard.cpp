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

    char position;
    cin>>position;

    string actual = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string input;
    cin>>input;

    // for (int i = 0; i < input.size(); i++)
    // {
    //     if(position == 'L')
    //         cout<<actual[actual.find(input[i])+1];
    //     else
    //         cout<<actual[actual.find(input[i])-1];
    // }
    // cout<<'\n';

    if(position == 'R'){

        for (int i = 0; i < input.length(); i++){

            for (int j = 0; j < actual.length(); j++)
            {
                if(input[i] == actual[j]) {

                    cout<<actual[j-1];
                }
            }
        }
    }

    else{
        for (int i = 0; i < input.length(); i++){

            for (int j = 0; j < actual.length(); j++)
            {
                if(input[i] == actual[j]) {

                    cout<<actual[j+1];
                }
            }
        }
    }

    return 0;
}
