#include <iostream>
#include <vector>

using namespace std;

int countNonBeautifulSubarrays(const vector<int>& A) {
    int count = 0;
    int currentCount = 1;  // Initialize currentCount to 1 for the first element

    for (int i = 1; i < A.size(); i++) {
        if (A[i] == A[i - 1]) {
            currentCount++;
        } else {
            count += (currentCount - 1);
            currentCount = 1;  // Reset currentCount
        }
    }

    // Add any remaining non-beautiful subarrays
    count += (currentCount - 1);

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = countNonBeautifulSubarrays(A);
        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}
