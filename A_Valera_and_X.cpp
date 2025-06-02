#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]



#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    
    set<char> x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
            if (i == j or i + j == n - 1)
                x.insert(s[j]);
            else
                y.insert(s[j]);
    }

    if (x.size() == 1 and y.size() == 1 and *x.begin() != *y.begin())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
