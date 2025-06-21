#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for (int i = 0, j=v.size()-1; i < v.size()/2,j>=v.size()/2; i++,j--)
    {
        int swap=v[i];
        v[i]=v[j];
        v[j]=swap;
        
        
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}