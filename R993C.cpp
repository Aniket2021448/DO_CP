// https://codeforces.com/contest/2044/problem/C

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int seated = 0;
        int leftInR1 = m;
        int leftInR2 = m;

        int totalSeatsLeft = 2*m;

        if(a >= m) seated+=m;
        else {
            seated+=a;
            leftInR1 = leftInR1 - a;
        }
         

        if(b >= m) seated +=m;
        else {
            seated+=b;
            leftInR2 = leftInR2 - b;
        }
         

        totalSeatsLeft = totalSeatsLeft - seated;

        
        if(c >= totalSeatsLeft) seated+= totalSeatsLeft;
        else seated+=c;
        cout<<seated<<"\n";
    }

    return 0;
}