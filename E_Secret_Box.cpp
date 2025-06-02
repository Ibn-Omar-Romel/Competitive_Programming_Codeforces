#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_locations(int x, int y, int z, long long k) {
    int max_locations = 0;
    for (int a = 1; a <= x; a++) {
        for (int b = 1; b <= y; b++) {
            for (int c = 1; c <= z; c++) {
                if (a * b * c == k) {
                    max_locations = max(max_locations, (a + 1) * (b + 1) * (c + 1));
                }
            }
        }
    }
    return max_locations;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y, z, k;
        cin >> x >> y >> z >> k;
        cout << max_locations(x, y, z, k) << endl;
    }
    return 0;
}