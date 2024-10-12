#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        // vector<vector<int>> grid(n, vector<int>(n, 0));


        //create a 2D matrix of nxn
        int prev = 0; // counter to store prev row 1s
        bool square = false;
        bool triangle = false;

        for(int i = 0; i < n; i++){
            int curr = 0; // counter to store current row 1s

            for(int j = 0; j < n; j++){
                char temp;
                cin>>temp;
                int temp2 = temp-'0';
                // grid[i][j] == temp;
                curr+=temp2;
            }
            if(prev != 0){
                if(prev == curr){
                    //Since it is guarrented thta there 
                    // are either square or a triangle 
                    // we can simply return the answer
                    // cout<<"SQUARE"<<endl;
                    square = true;
                    
                }
                else{
                    // cout<<"TRIANGLE"<<endl;
                    // return 0;
                    triangle = true;
                }
            }
            prev = curr;
        }
        if(square){
            cout<<"SQUARE"<<endl;
        }
        else{
            cout<<"TRIANGLE"<<endl;
        }
    }


    return 0;
}