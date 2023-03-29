#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    unordered_map<char,int>count;
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(auto it: count){
        
        cout<<it.first<<",count="<<it.second<<endl;
    }
    return 0;
}