// MEX destruction
// https://codeforces.com/contest/2049/problem/A

#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i = 0; i < n; i++ ){
            cin>>v[i];
        }

        // All zeros  ans == 0
        // All positive  ans == 1
        // All positive together with zeros together ans == 1 only one bunch of positives
        // More than 1 bunch of postives between the zeros, ans == number of positive bunches present

        int positiveBunch = 0;
        int size = n;
        bool AllZero = true;

        while(size--){
            if(v[size] > 0) AllZero = false;
        }
        if(AllZero){
            cout<<positiveBunch<<endl;
        }

        // Detect the number of positive bunches
        int positiveBunchCount = 0;
        bool inPositiveBunch = false;


        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {
                if (!inPositiveBunch) {
                    // Start of a new positive bunch
                    positiveBunchCount++;
                    inPositiveBunch = true;
                }
            } else {
                // End of a positive bunch
                inPositiveBunch = false;
            }
        }

        if (positiveBunchCount == 1) {
            cout << "1" << endl; // Only one bunch of positives
        } else if(!AllZero){
            
            cout << 2 << endl; // More than one bunch
        }




    }

    return 0;

}