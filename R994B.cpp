// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int t;
//     cin>>t;

//     while(t--){

//         int n;
//         cin>>n;
//         string s;
//         cin>>s;

//         int si = 0;
//         int ss = 0;

//         int pi = -1;
//         int pp = 0;

//         for(int i = 0; i < n; i++){
//             if(s[i] == 's'){
//                 ss++;    
//                 si = i;
//             }
//             if(s[i] == 'p'){
//                 pp++;
//                 if(pi == -1){
//                     // didn't encounter any p before, first time encountering the p
//                     pi = i;
//                 }
//             }
//         }

//         if(ss == 0 || pp == 0) {
//             // All pure case
//             cout<<"YES"<<endl;
//             continue;
//         }

//         if(si == 0 || pi == n-1){
//             // s comes in the begining and the rest are p
//             // p comes in the last and the rest are s
//             cout<<"YES"<<endl;
//             continue;
//         }
//         cout<<"NO"<<endl;


//     }


//     return 0;

// }


#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;

        int si = 0;
        int ss = 0;

        int pi = -1;
        int pp = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 's') {
                ss++;    
                si = i;
            }
            if(s[n-i-1] == 'p') {
                pp++;
                pi = n-i-1;
            }
        }
        
        if(ss == 0 || pp == 0) {
            // All pure case
            cout<<"YES"<<endl;
            continue;
        }

        if(si == 0 || pi == n-1){
            // s comes in the begining and the rest are p
            // p comes in the last and the rest are s
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    
    }

    return 0;

}

