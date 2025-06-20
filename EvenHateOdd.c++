#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0,result=0;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }

        if(n%2!=0){
            cout<<"-1"<<endl;
            continue;
        }else{
            for(int i=0;i<n;i++){
            if(array[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even==odd){
            cout<<result<<endl;
        }else{
            while(even!=odd){
                if(even>odd){
                    even--;
                    odd++;
                    result++;
                }else{
                    even++;
                    odd--;
                    result++;
                }

            }
            cout<<result<<endl;
        }
        }
    }
    return 0;
}