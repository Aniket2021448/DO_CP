#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;

        cin>>s;

        if(s.length() > 10){
            // make the changes
            string ans = "";
            string strLen = "";
            ans+=s[0];
            strLen = to_string(s.length() - 2);
            ans += strLen;
            ans+=s[s.length() - 1];

            cout<<ans<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }


    return 0;
}