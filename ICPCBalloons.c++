#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        string s;
        int freq[26]={0};
        cin>>n>>s;
        // The most happiest person in the world;
        for(int i=0;i<n;i++){
            if(freq[s[i]-65]==0){
                freq[s[i]-65]+=2;

            }else{
                freq[s[i]-65]++;
            }
            

        }

        for (int num:freq){
            if(num!=0){
                sum+=num;

            }
        }

        cout<<sum<<endl;
    }
    return 0;
}