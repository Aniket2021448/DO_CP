#include<bits/stdc++.h>

using namespace std;

/*
Problem link: https://codeforces.com/problemset/problem/1901/A

starting -------------------------------------------endingpoint
   0         1        2                    5             7
fuel needed,
   0 ------> 1L ----->1L ----------------> 3L ---------> 2L -
                                                             |
                                           4L <--------------

as we reach each station we calculated how much we needed, 
and refueled it, we calculated how much we need in one trip without fueling the fuel

*/

int get_minimum_fuel(vector<int> vec, int startingPoint, int endingPoint, int totalGasStations){
    
    int mini = INT_MIN;
    for(int i = 0; i < totalGasStations; i++){
        mini = max(vec[i] - startingPoint, mini);
        startingPoint = vec[i];
    
    }
    // standing at the last gas station, and have to make a round trip to endingPoint
    
    mini = max(mini, 2 * (endingPoint - vec[totalGasStations-1]));
    return mini;

}


int main(){
    
    int t;
    cin>>t;

    while(t--){

        int n, x;
        cin>>n>>x;

        int startingPoint = 0;
        int endingPoint = x;

        int totalGasStations = n;

        vector<int> vec;
        for(int i = 0; i < n; i++){  // Read `n` gas station positions
            int val;
            cin>>val;
            vec.push_back(val);  // Add gas station position to the vector
        }

        cout<< get_minimum_fuel(vec, startingPoint, endingPoint, totalGasStations)<<"\n";


    }


    return 0;
}