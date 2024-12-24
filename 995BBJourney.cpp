// #include<bits/stdc++.h>


// using namespace std;

// int main(){

//     int t;
//     cin>>t;

//     while(t--){

//         int n, a, b, c;
//         cin>>n>>a>>b>>c;

            // if (a == 1 && b == 1 && c == 1) {
            //     cout << n << endl;
            //     continue;
            // }

//         int days = 0;
//         int summ = 0;
//         vector<int>v(3);
//         v[0] = a;
//         v[1] = b;
//         v[2] = c;
//         int i = 0;
//         while(summ < n){
//             summ += v[i%3];
//             i++;
//             days++;
//         }

//         cout<<days<<endl;
        
//     }


//     return 0;
// }


#include<bits/stdc++.h>


using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        
        long long cycle_distance = a + b + c;
        long long full_cycles = n / cycle_distance; 
        long long remaining_distance = n % cycle_distance; 

        long long days = full_cycles * 3; 

        if (remaining_distance == 0) {
            
            cout << days << endl;
        } else {
            
            if (remaining_distance <= a) {
                days += 1; 
            } else if (remaining_distance <= a + b) {
                days += 2; 
            } else {
                days += 3; 
            }
            cout << days << endl;
        }
        
    }


    return 0;
}


