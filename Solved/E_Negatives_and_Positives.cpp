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

    int check = 0 , sum = 0;

    for(int i = 0 ; i < t ; i++){

        int size ;
        cin>>size;

        int arra[size];

        for(int j = 0 ; j < size ; j++){


            cin>>arra[j];

            if(check > 0){

                sum = sum + (arra[j - 1]*(-1)) + (arra[j]*(-1));

                arra[j] = arra[j] * (-1);
            }
            check++;

        }

        cout<<sum<<'\n';
        sum = 0;
        check = 0;
    }

    return 0;
}

