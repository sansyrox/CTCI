//  Check if two strings are permutations of each other

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1==s2){
        cout<<true;
    } else cout<<false;
    return 0;
}
