#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        string S,T,New;
        cin>>S>>T;
        auto it1=S.begin();
        auto it2=T.begin();
        while(it1 !=S.end() || it2 !=T.end()){
            if(it1 !=S.end()){
                New+=*it1;
                ++it1;
            }

            if(it2 !=T.end()){
                New+=*it2;
                ++it2;
            }
        }
       
        cout<<New<<endl;

    }
    
    return 0;
}