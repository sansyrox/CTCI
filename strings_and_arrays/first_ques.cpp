// check if a string has unique characters with and without using extra ds

#include<bits/stdc++.h>
using namespace std;

bool checkWithMap(string s){
    map<char,int> m;

    for(auto i:s){
        if(!m[i]){
            m[i] = 1;
        }
        else {
            m[i]+=1;
            return false;
        }
    }

    return true;
}

bool checkInSingleDS(string s){
    sort(s.begin(),s.end());

    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }

    return true;

}

int main(){

    string s;
    cin>>s;

    cout<<checkWithMap(s)<<" "<<checkInSingleDS(s)<<" "<<endl;

    return 0;
}