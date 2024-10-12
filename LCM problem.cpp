#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
       
        int l, r, x, y;
        cin>>l>>r;

        x = l;
        y = 2*l;

        if(y <= r){
            cout<<x<<" "<<y<<endl;

        }else{
            cout<<-1<<" "<<-1<<endl;
        }

    }

    return 0;

}