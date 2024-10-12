/**

 A. Rectangle Cutting
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bob has a rectangle of size a×b
. He tries to cut this rectangle into two rectangles with integer sides by making a cut parallel to one of the sides of the original rectangle. Then Bob tries to form some other rectangle from the two resulting rectangles, and he can rotate and move these two rectangles as he wishes.

Note that if two rectangles differ only by a 90∘
 rotation, they are considered the same. For example, the rectangles 6×4
 and 4×6
 are considered the same.

Thus, from the 2×6
 rectangle, another rectangle can be formed, because it can be cut into two 2×3
 rectangles, and then these two rectangles can be used to form the 4×3
 rectangle, which is different from the 2×6
 rectangle.


However, from the 2×1
 rectangle, another rectangle cannot be formed, because it can only be cut into two rectangles of 1×1
, and from these, only the 1×2
 and 2×1
 rectangles can be formed, which are considered the same.


Help Bob determine if he can obtain some other rectangle, or if he is just wasting his time.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. This is followed by the description of the test cases.

The single line of each test case contains two integers a
 and b
 (1≤a,b≤109
) — the size of Bob's rectangle.

Output
For each test case, output "Yes" if Bob can obtain another rectangle from the a×b
 rectangle. Otherwise, output "No".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive answers.

*/
/**

 A. Rectangle Cutting
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bob has a rectangle of size a×b
. He tries to cut this rectangle into two rectangles with integer sides by making a cut parallel to one of the sides of the original rectangle. Then Bob tries to form some other rectangle from the two resulting rectangles, and he can rotate and move these two rectangles as he wishes.

Note that if two rectangles differ only by a 90∘
 rotation, they are considered the same. For example, the rectangles 6×4
 and 4×6
 are considered the same.

Thus, from the 2×6
 rectangle, another rectangle can be formed, because it can be cut into two 2×3
 rectangles, and then these two rectangles can be used to form the 4×3
 rectangle, which is different from the 2×6
 rectangle.


However, from the 2×1
 rectangle, another rectangle cannot be formed, because it can only be cut into two rectangles of 1×1
, and from these, only the 1×2
 and 2×1
 rectangles can be formed, which are considered the same.


Help Bob determine if he can obtain some other rectangle, or if he is just wasting his time.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. This is followed by the description of the test cases.

The single line of each test case contains two integers a
 and b
 (1≤a,b≤109
) — the size of Bob's rectangle.

Output
For each test case, output "Yes" if Bob can obtain another rectangle from the a×b
 rectangle. Otherwise, output "No".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive answers.

*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

string solve(int x, int y){
    if(x == 1 || y == 1) return "No";
        // The matrix is like 1 x anything, and 
        // can be converted into only 


    if(x%2 != 0 && y%2!=0) return "No";
        // both dimensions are odd, thus we cannot divide it
        // into equal halves


    if(x%2 == 0 && y%2 == 0) return "Yes";
    // If we have made till here, that means
    // there are either of them is even
    // and we can divide it into 2 halves and then check it


    int halfXAlongRow = 0;
    int halfYAlongRow = 0;

    int halfXAlongCol = 0;
    int halfYAlongCol = 0;

    if(x%2 == 0){
        halfXAlongRow = x/2;
        halfYAlongRow = 2*y;

        if(halfXAlongRow != y && halfYAlongRow != x){
            // found a valid pair
            return "Yes";
        }
    }

    if(y%2 == 0){
        halfXAlongCol = 2*x;
        halfYAlongCol = y/2;

        if(halfXAlongCol != y && halfYAlongCol != x){
            // found a valid pair
            return "Yes";
        }
    }

    return "No";

}

int main(){
    int n;
    cin>>n;

    vector<pair<int, int>> dimension;


    while(n--){
        int x, y;
        cin>>x>>y;

        cout<<solve(x, y)<<endl;
        // dimension.push_back({x, y});

    }



    return 0;
}