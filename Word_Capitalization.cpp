#include<bits/stdc++.h>

using namespace std;


int main(){

    string in;
    cin>>in;

    if(!in.empty() && in[0]>='a' && in[0] <= 'z') in[0] = in[0]-('a' - 'A');


    cout << in;



    return 0;
}