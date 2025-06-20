#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int flag=0;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(word=="Jessica"){
            flag=1;
            cout<<"YES"<<endl;
            break;

        }
    }
    if(flag==0) cout<<"NO"<<endl;
    return 0;
}