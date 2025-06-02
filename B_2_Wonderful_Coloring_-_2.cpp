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

        int size, k;
        cin >> size >> k;

        map <int, int> m;
        vector < int > vec[size+3];
        vector < pair<int, int> > less;
        int ans[size];
        for ( int i = 0 ; i < size ; i++ ) ans[i] = 0;


        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;
            m[a]++; // keeping the frequency
            //if( size != 1 )
            vec[a].push_back(i); // keeping the index;
        }

        if( size == 1 and k == 1 ) cout << 1 << endl;
        else{

                map<int, int> :: iterator it = m.begin();

            while ( it != m.end() ) {

                int x = (*it).first;
                int y = (*it).second;

                if ( y >= k ) {

                    int color = 1;
                    for ( int i = 0 ; i < k ; i++ ) {

                        ans[vec[x][i]] = color;
                        color++;
                    }
                }
                else {
                    for ( int i = 0 ; i < vec[x].size() ; i++ ) {

                        less.push_back(make_pair(x,vec[x][i]));
                    }
                }
                it++;
            }

            int color = 1;
            int extra = less.size() % k ;
            
            for ( int i = 0 ; i < less.size() - extra ; i++ ) {

                ans[less[i].second] = color;
                color++;
                if( color > k ) color = 1;
            }

            for ( int i = 0 ; i < size ; i++ ) {

                cout << ans[i] << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}
