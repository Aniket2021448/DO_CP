#include<iostream>
#include<vector>

using namespace std;

vector<int> storeSum(200000, 0);

int calcSum(int temp){
    int sum = 0;
    while(temp > 0){
        sum += temp%10;
        temp /= 10;
    }
    return sum;
}

int main(){

    int t;
    cin >> t;
    storeSum[0] = 0;
    for(int i = 1; i <= 200000; i++){
        storeSum[i] = storeSum[i-1] + calcSum(i);
    }

    while(t--){
        int n;
        cin>>n;
        cout<<storeSum[n]<<endl;
    }

    return 0;
}