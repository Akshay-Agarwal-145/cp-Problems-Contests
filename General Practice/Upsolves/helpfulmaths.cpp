#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
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





int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 
    
*/

string s; 
cin >> s; 
vector<int> nums; 
for(int i = 0; i<s.length(); i+=2){
    char a = s[i]; 
    int b = a - '0'; 
    nums.push_back(b); 
}
sort(nums.begin(), nums.end());
 

for(int i = 0; i<nums.size(); i++){
    if(i != nums.size()-1)
        cout << nums[i] << "+"; 
    else
    {
        cout << nums[i];
    }
    
}
}