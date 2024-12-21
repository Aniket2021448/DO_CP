#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        
        for(int i = 1; i < n-1; i++){
            if(v[i-1] < v[i] && v[i] > v[i+1]){
                int temp = v[i+1];
                v[i+1] = v[i];
                v[i] = temp;
            }
        }
        
        bool isSorted = true;
        for(int i = 1; i < n; i++){
            if(v[i-1] >= v[i]){
                isSorted = false;
                break;
            }
        }

        if(isSorted) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    
    return 0;
}