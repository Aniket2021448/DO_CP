#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    vector<int> store = {x1, x2, x3};

    sort(store.begin(), store.end());

    cout<<(store[1] - store[0]) + (store[2] - store[1])<<endl;

    return 0;
}