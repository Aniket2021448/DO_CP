#include<iostream>

using namespace std;


int main(){
    int currRow, currCol;
    // int a[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int temp;
            cin>>temp;
            // cin>>a[i][j];
            if(temp == 1){
                currRow = i;
                currCol = j;
                break;
                // only one 1 will be there
            }
        }
    }
    
    cout<<abs(currRow-2) + abs(currCol-2)<<endl;

    return 0;
}