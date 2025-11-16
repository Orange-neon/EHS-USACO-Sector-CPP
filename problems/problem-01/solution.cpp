#include <bits/stdc++.h>
using namespace std;

int main() {
    // For testing - UNCOMMENT the line below
    freopen("test_cases/input_01.txt", "r", stdin);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Your solution here
    int sum = 0;
    for (int num : arr) sum += num;
    cout << "Sum: " << sum << endl;
    
    return 0;
}
