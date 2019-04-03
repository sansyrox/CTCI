// Given a string, write a function to check if it is a permutation of a palindrome

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s1){
    string s_copy = "";
    for(auto i:s1){
        if(i!=' '){
            s_copy+=tolower(i);
        }
    }

    string s_copy_copy(s_copy);
    reverse(s_copy_copy.begin(),s_copy_copy.end());
    if(s_copy == s_copy_copy){
        return true;
    } else {
        return false;
    }
    
}


bool checkPermutation(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(!strcmpi(s1,s2)){
        return true;
    }
    else return false;
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<<checkPalindrome(s1)<<" "<<checkPermutation(s1,s2);

    return 0;
}