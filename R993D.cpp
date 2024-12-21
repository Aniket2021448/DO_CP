#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(i+1);
        }

        vector<int> v(n);

        for (int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            v[i] = temp;
        }

        

    }


    return 0;

}