/*

A. Next Round
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output
Output the number of participants who advance to the next round.

*/

#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int> nums, int n, int k){
    int i = n-1;
    int count = 0;

    while(i>=0){
        
        if(nums[i] < k){
            
            count++;

            // found the first element from back that is greater than or equal k
            // since the vector is descening, all elements above ith will also be greater
        }
        i--;

    }

    return n-count;
}


int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int> nums;
    
    int temp = n;
    while(n--){
        int num;
        cin>>num;
        
        nums.push_back(num);
    }
    if(nums[k] == 0){
        cout<<0;
    }
    else{

        cout<<solve(nums, temp, nums[k]);
    }
    return 0;
}