#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<char> store(27);
        char ch='a';
        for(int i = 1; i <= 26; i++){
            store[i] = ch++;
        }

        if(n <= 28){
            int temp = n-2;
            cout<<"aa"<<store[temp]<<endl;
        }
        else if(n<=53){
            n -= 26;
            int temp = n - 1;
            cout<<"a"<<store[temp]<<"z"<<endl;
        }
        else{
            n-=52;
            int temp = n;
            cout<<store[temp]<<"zz"<<endl;

        }
    }
    return 0;
}
