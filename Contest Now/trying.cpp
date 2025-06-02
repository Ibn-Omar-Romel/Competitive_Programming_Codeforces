#include <iostream>
using namespace std;

int solve(int n, int m) {
    if (m == 0) {
        return n;
    } else {
        int res = n;
        for (int i = 0; i < m; i++) {
            res = (res | (res - 1)) | (res + 1);
        }
        return res;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }
    return 0;
}