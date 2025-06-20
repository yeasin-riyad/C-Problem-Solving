#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    int e=0,g=0,y=0,p=0,t=0;


    // Range based for loop
    for(char ch:word){    
        ch=toupper(ch);
        if (ch == 'E') e++;
        else if (ch == 'G') g++;
        else if (ch == 'Y') y++;
        else if (ch == 'P') p++;
        else if (ch == 'T') t++;
    }
    int result=min({e,g,y,p,t});
    cout<<result<<endl;
    return 0;
}