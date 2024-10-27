#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    string s;
    cin>>s;

    vector<char> vec;

    for (char c: s){
        if(c == '+') continue;
        else vec.push_back(c);
    }

    sort(vec.begin(), vec.end());
    string first = "";
    string ans = first+ vec[0];
    for(int i = 0; i < vec.size()-1; i++){
        ans+="+";
        ans += vec[i+1];
    }

    cout<<ans;
    


    return 0;

}