#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,search;
    int count=0;
    getline(cin,s);
    cin.ignore();
    cin>>search;
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(word==search){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}