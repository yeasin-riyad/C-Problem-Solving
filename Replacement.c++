#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<A.size();i++){
        cin>>A[i];
        if(A[i]==0){
           
        }
       else if(A[i]<0){
            A[i]=2;
        }else{
            A[i]=1;
        }
    }

    for(int ele:A){
        cout<<ele<<" ";
    }
    return 0;
}