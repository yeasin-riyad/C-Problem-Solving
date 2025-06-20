// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int array[26]={0};
//     int Size= s.size();
//         for(int i=0;i<Size;i++){
//             array[s[i]-97]++;
//         }

        


//     if(Size%2==0){

       
//     }else{
//         cout<<"Odd";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string new_s=s;
    reverse(s.begin(),s.end());
    if(s==new_s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}