#include <bits/stdc++.h>
using namespace std;

#define ll long long int

struct Attack {
    ll damage;
    ll cooldown;
    ll next_available;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll h, n;
        cin >> h >> n;

        vector<Attack> attacks(n);

        for (int i = 0; i < n; ++i) {
            cin >> attacks[i].damage;
        }

        for (int i = 0; i < n; ++i) {
            cin >> attacks[i].cooldown;
            attacks[i].next_available = 0;  // initially, all attacks are available
        }

        auto cmp = [](const Attack &a, const Attack &b) {
            return a.next_available > b.next_available;  // min-heap based on next_available time
        };
        priority_queue<Attack, vector<Attack>, decltype(cmp)> pq(cmp);

        for (const auto& attack : attacks) {
            pq.push(attack);
        }

        ll turns = 0;
        ll current_turn = 0;

        while (h > 0) {
            vector<Attack> ready_attacks;

            while (!pq.empty() && pq.top().next_available <= current_turn) {
                ready_attacks.push_back(pq.top());
                pq.pop();
            }

            if (ready_attacks.empty()) {
                current_turn = pq.top().next_available;
                continue;
            }

            ll total_damage = 0;

            for (auto attack : ready_attacks) {
                total_damage += attack.damage;
                attack.next_available = current_turn + attack.cooldown + 1;
                pq.push(attack);
            }

            h -= total_damage;
            turns++;
            current_turn++;
        }

        cout << turns << endl;
    }

    return 0;
}
