#include<iostream>

#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        long long n;
        
        cin>>n;
        long long temp = log2(n);
        long long ans = pow(2, temp);
        
        cout<<ans<<endl;
    }
    return 0;
}