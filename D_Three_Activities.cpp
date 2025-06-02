#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        vector < pair<int, int> > skii;
        for ( int i = 0 ; i < size ; i++ ) {
        
            int a;
            cin >> a;
            skii.push_back(make_pair(a,i));
        }

        vector < pair<int, int> > cinema;
        for ( int i = 0 ; i < size ; i++ ) {
        
            int a;
            cin >> a;
            cinema.push_back(make_pair(a,i));
        }

        vector < pair<int, int> > board;
        for ( int i = 0 ; i < size ; i++ ) {
        
            int a;
            cin >> a;
            board.push_back(make_pair(a,i));
        }

        sort(skii.begin(),skii.end());
        sort(cinema.begin(),cinema.end());
        sort(board.begin(),board.end());

        ll maxskii = -1 , maxmovie = -1 , maxboard = -1;
        int indexskii = 0, indexmovie = 0 , indexboard = 0;

        int friends = INT_MIN;

        for ( int i = size-1 ; i > size - 4 ; i-- ) {

            for ( int j = size-1 ; j > size - 4 ; j-- ) {

                for ( int k = size -1 ; k > size - 4 ; k-- ) {

                    if ( skii[i].second != cinema[j].second and skii[i].second != board[k].second and cinema[j].second != board[k].second ) {

                        ll value = skii[i].first + cinema[j].first + board[k].first;

                        if ( friends < value ) friends = value;
                    }
                }
            }
        }  

        cout << friends << endl;
    }
    return 0;
}
