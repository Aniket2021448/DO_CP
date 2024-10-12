#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> laid(n+1, 0);
        vector<int> order(n, 0);
        

        for(int i = 1; i <= n && i%2 != 0; i++){
            if(laid[i] == 0){
                order.push_back(i);
                laid[i] = 1;
            }
        }

        for(int i = 1; i <= n && i%2 != 0; i++){
            if(2*i < n+1 && laid[2*(i)] == 0){
                order.push_back(2*i);
                laid[2*i] = 1;
            }
        }

        for(int i = 1; i <= n && i%2 != 0; i++){
            if(3*i < n+1 && laid[3*(i)] == 0){
                order.push_back(3*i);
                laid[3*i] = 1;
            }
        }
        
        for(int i = 1; i <= n && i%2 != 0; i++){
            if(4*i < n+1 && laid[4*(i)] == 0){
                order.push_back(4*i);
                laid[4*i] = 1;
            }
        }

        cout<<order[k-1]<<endl;
    }


    return 0;

}