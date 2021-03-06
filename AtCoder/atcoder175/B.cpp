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

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/


int n; 
cin >> n; 
vector<int> ins; 
for(int i = 0; i<n; i++){
    int a; 
    cin >> a; 
    ins.push_back(a); 
}
int cnt = 0; 

for(int i = 0; i<ins.size(); i++){
    for(int j = i+1; j<ins.size(); j++){
        for(int z = j+1; z<ins.size(); z++){
            if(i != j && j!=z){
                if((ins[i] + ins[j] > ins[z]) && (ins[i] + ins[z] > ins[j]) && (ins[j] + ins[z] > ins[i]) && (ins[i] != ins[j]) && (ins[j] != ins[z]) && (ins[i] != ins[z])){
                    cnt++; 
                    //cout << i << bl << j << bl << z << nl; 
                    //cout << ins[i] << bl << ins[j] << bl << ins[z] << nl; 
                }
            }
        }
    }
}
cout << cnt; 
}

