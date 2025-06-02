#include <bits/stdc++.h>

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
#define vsort sort(vec.begin(), vec.end())
#define asort sort(arra, arra + size)
#define ok cout << "ok" << endl

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int size;
        cin >> size;

        map<int, int> mp;

        for (int i = 0; i < size; i++) {

            int a; cin >> a;
            mp[a]++;
        }

        int value = 0;

        for (auto &it : mp)
            value = max(value, it.second);
        
        if (value == mp.size())
            cout << value - 1 << endl;
        else if (value > mp.size())
            cout << mp.size() << endl;
        else
            cout << value << endl;
        
    }
    return 0;
}
