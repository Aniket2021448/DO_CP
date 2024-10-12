#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> containers(n);
        long long sum = 0;

        for(int i = 0; i < n; ++i) {
            cin >> containers[i];
            sum += containers[i];
        }

        if(sum % n != 0) cout << "NO" << endl;
            
        
        else {
            long long target = sum / n;
            long long prefix_sum = 0;
            bool ok = true;
            for(int i = 0; i < n; ++i) {
                prefix_sum += containers[i];
                if(prefix_sum < target * (i + 1)) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
