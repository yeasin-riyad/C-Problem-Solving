#include<bits/stdc++.h>
using namespace std;

vector<int> Concatination(const vector<int>& A,const vector<int>& B){
    vector<int> C;

       for(int ele: B){
        C.push_back(ele);
    };
    
    for(int ele: A){
        C.push_back(ele);
    };

 

    return C;

}


int main(){
    int n;
    cin>>n;
    vector<int> A(n),B(n),C;
  
    for(int i=0;i<A.size();i++){
        cin>>A[i];
    }

    for(int i=0;i<B.size();i++){
        cin>>B[i];
    }

    C=Concatination(A,B);
    for(int ele: C){
        cout<<ele<<" ";
    }
   
     
    return 0;
}