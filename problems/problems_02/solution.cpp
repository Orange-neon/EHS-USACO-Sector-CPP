#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("test_cases/input_01.txt", "r", stdin);

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    unordered_map<int, int> seen;

    for (int i = 0; i < n; i++) {
        int diff = target - nums[i];
        if (seen.count(diff)) {
            cout << seen[diff] << " " << i;
            return 0;
        }
        seen[nums[i]] = i;
    }
}
