#include<bits/stdc++.h>

using namespace std;

/* 
Problem link: https://codeforces.com/problemset/problem/1903/A
we are allowed to make atmost k number reverses, and such reverses can be done infinitely, 
thus, it possible for all cases of k other than k = 1, 
in k= 1 since, we cannot reverse the window size of 1, it is mandatory for the array
to be sorted. thus, we check if array is not sorted we print NO, else in all other cases, it is possible to 
make a sorted(non decreasing order) vector, by making atmost k window reverses infinite number of times.

*/

bool isSorted(vector<int> vec){
    for(int i = 0; i < vec.size() -1; i++){
        if(vec[i] > vec[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int t;
    cin >>t;

    while(t--){
        int n, k;
        cin >>n>>k;
        
        vector<int> vec(n);

        while(n--){
            int val;
            cin>>val;
            vec.push_back(val);
        }


        if(k == 1){

            if(isSorted(vec)){
                cout<< "YES\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else{
            cout<<"YES\n";
        }

    }
}
