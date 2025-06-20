#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int first_sum=0,second_sum=0;
        cin>>s;
        for(int i=0;i<s.size()/2;i++){
            first_sum+=s[i];
        }

        for(int i=s.size()/2;i<s.size();i++){
            second_sum+=s[i];
        }

        first_sum==second_sum ?cout<<"YES"<<endl :cout<<"NO"<<endl;

       
    }
    return 0;
}