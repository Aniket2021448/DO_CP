#include<bits/stdc++.h>

using namespace std;

/*

if we can make the W.W condition, since we have the infinite
supply of water in between these two water blocks, 
we do not need to perform action 1 again, thus we can return 2 directly

else, we cannot get this wow formation, we have to keep counting the empty blocks

thus checking the word count and checking the condition will do the job.

*/
int coverTheWater(string s, int n){

    int wowCount = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.') {
            wowCount++;
        }
        else if(s[i] == '#'){
            ans+=wowCount;
            wowCount = 0;
        }

        if(wowCount == 3){
            return 2;
        }   
    }
    ans += wowCount;
    return ans;
}

int main(){

    int t;
    cin >>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        cout<<coverTheWater(s, n)<<"\n";

    }

    
    return 0;

}