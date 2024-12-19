#include<bits/stdc++.h>
// https://codeforces.com/contest/2044/problem/A

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int pairCount = 0;

        for (int i = 1; i <= n-1; i++){
            for (int j = 1; j <= n-1; j++){
                if(i + j == n){
                    pairCount++;
                }
            }
        }

        cout<<pairCount<<"\n";

    }


    return 0;

}