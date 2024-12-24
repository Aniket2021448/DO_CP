#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, m, k;
        cin>>n>>m>>k;

        // list provided by prof to monocarp, which has number representing which question 
        // is not present in the lst
        vector<int> mv(n);

        for(int i= 0; i < m; i++){
            cin>>mv[i];
        }


        // Create a set of numbers Polycarp knows
        vector<bool> polycarp_knows(n + 1, false);
        for(int i = 0; i < k; i++) {
            int temp;
            cin >> temp;
            polycarp_knows[temp] = true;
        }
        
        string result = "";
        for(int i = 0; i < m; i++) {
            bool canPass = true;
            int current = mv[i];
            
            for(int num = 1; num <= n; num++) {
                if(num != current && !polycarp_knows[num]) {
                    canPass = false;
                    break;
                }
            }
            
            result += (canPass ? '1' : '0');
        }
        
        cout << result << '\n';



    }


    return 0;
}