#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;

void solve(string &str)
{
    // Your problem-solving code here

    map<char, int> freq;
    for (char c : str)
    {
        freq[c]++;
    }

    char maxChar;
    int maxFreq = 0;

    char minChar;
    int minFreq = LLONG_MAX;

    for (auto elem : freq)
    {
        if (elem.second >= maxFreq)
        {
            maxFreq = elem.second;
            maxChar = elem.first;
        }

        if (elem.second < minFreq)
        {
            minFreq = elem.second;
            minChar = elem.first;
        }
    }

    if (maxFreq == str.size())
    {
        cout << str << endl;
        return;
    }

    for (char &c : str)
    {
        if (c == minChar)
        {
            c = maxChar;
            break;
        }
    }

    cout << str << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;

    int n = 1;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        solve(str);
    }

    return 0;
}