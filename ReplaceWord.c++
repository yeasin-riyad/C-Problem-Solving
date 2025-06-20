#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,replace_string="EGYPT";
    cin>>s;

    // cout<<s.find(replace_string);

   
    while (s.find(replace_string) != -1)
   
    {
   
            s.replace(s.find(replace_string),replace_string.size()," ");
            

        
    }
     cout<<s;
    
    return 0;
}