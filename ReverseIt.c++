#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
        string name;
        int cls;
        char section;
        int id;
        
};
int main(){
    int n;
    cin>>n;
    Students array[n];
    for(int i=0;i<n;i++){
        cin>>array[i].name>>array[i].cls>>array[i].section>>array[i].id;
    }

    int i=0,j=n-1;
    while (i<j)
    {
        swap(array[i].section,array[j].section);
        i++;
        j--;
    }
    
    for(int i=0;i<n;i++){
        cout<<array[i].name<<" "<<array[i].cls<<" "<<array[i].section<<" "<<array[i].id<<endl;
    }
    
    return 0;
}