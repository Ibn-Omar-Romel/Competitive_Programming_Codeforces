#include<bits/stdc++.h>

using namespace std;

int main() {

    int size;
    cin >> size;

    vector < int > vec(size);

    for ( int i = 0; i < size ; i++ ) {

        cin >> vec[i];
    }

    int start = -1, end = -1 ;

    for ( int i = 0 ; i < size-1 ; i++ ) {

        if ( vec[i] > vec[i+1] ){

            start = i;
            while ( i < size -1 and vec[i] > vec[i+1]) {

                i++;
            }
            end = i;
            break;
        }
    }

    if ( start == -1 and end == -1 ) {

        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    else {

        reverse(vec.begin()+start, vec.begin()+end+1);
        
        if ( is_sorted(vec.begin(), vec.end())) {

            cout << "yes"  << endl;
            cout << start+1 << " " << end+1 << endl;
        }
        else 
            cout << "no" << endl;
    }

    return 0;
}