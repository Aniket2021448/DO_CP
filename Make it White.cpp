#include <iostream>
#include <vector>
using namespace std;

// Function to solve the problem for each test case
int solve(int n, string& w) {
    // Write your solution code here
    vector<char> paints(w.begin(), w.end());
    int i = 0;
    int j = paints.size()-1;

    while(i < j){
        if(paints[i] != 'B'){
            // black wall found from starting
            // store_i = i;
            i++;
        }
        if(paints[j] != 'B'){
            // black wall found from end
            j--;
        }
        if(paints[i] == 'B' && paints[j] == 'B'){
            // found the first and last black wall
            return j-i+1; // this will be the min continuous segment to paint white
        }
    }
    return n; // No black wall found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string w;
        cin >> w;

        int result = solve(n, w);
        cout << result << endl;
    }

    return 0;
}
