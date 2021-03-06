#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<fstream>  
using namespace std; 
typedef long long ll; 
typedef long double ld; 

int ceil(int a, int m){
    // division of a and m
    if(a % m == 0){
        return a/m; 
    }
    else{
        return a/m + 1; 
    }
}

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}

int minInVector(vector<int> arr){
    int mins = 1e9; 
    for(int i = 0; i<arr.size(); i++){
        mins = min(mins, arr[i]); 
    }
    return mins; 
}

int maxInVector(vector<int> arr){
    int maxs = -1; 
    for(int i = 0; i<arr.size(); i++){
        maxs = max(maxs, arr[i]); 
    }
    return maxs; 
}

bool checkElement(vector<int> arr, int k){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
            return true; 
        }
    }
    return false; 
}

const int MOD = 1e9 + 7; 
int nchoose3(int n){
    ll ans = (n*(n-1)*(n-2)/6);
    return ans%MOD; 
}

// int fact(int n){
//     ll dp[n+1]; 
//     dp[0] = 1;
//     for(int i = 1; i<=n; i++){
//         dp[i] = dp[i-1]*i;
//     } 
//     return dp[n]%MOD; 

// }
int main(){

ios_base::sync_with_stdio(false);
//cin.tie(0);


char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int n; 
cin >> n; 
cout << (nchoose3(n) * 2 * (n-2)) % MOD; 




}

