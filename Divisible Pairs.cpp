#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int max_freq = 0;
        for (auto &p : freq) {
            max_freq = max(max_freq, p.second);
        }

        cout << n - max_freq << "\n";
    }

    return 0;
}
