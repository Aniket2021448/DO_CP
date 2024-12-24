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

        for(int i = 0; i < n; i++) cin>>vm[i];
        for(int i = 0; i < n; i++) cin>>vs[i];

        int maxx = vm[n-1];

        for(int i = n-2; i>=0 ; i--){
            if(vm[i] - vs[i+1] >= 0) maxx += vm[i] - vs[i+1];
        }

        cout<<maxx<<endl;



    }
    


    return 0;
}