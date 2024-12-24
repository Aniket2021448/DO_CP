#include<bits/stdc++.h>


using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vm(n);
        vector<int> vs(n);
        int mtotal = 0;

        for(int i = 0; i < n; i++){
            cin>>vm[i];
            mtotal+=vm[i];
        }

        int stotal = 0;
        for(int i = 0; i < n; i++){
            cin>>vs[i];
            stotal+=vs[i];
        }

        // int currMax = mtotal - stotal;
        // for (int i = 0; i < n-1; i ++){
        //     if(mtotal - vm[i])
        // }



    }



    return 0;
}