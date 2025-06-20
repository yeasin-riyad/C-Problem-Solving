#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_mark;
        int english_mark;
};

bool srt(Student l,Student r){
   return l.english_mark==r.english_mark?l.math_mark==r.math_mark?l.id<r.id:l.math_mark>r.math_mark:l.english_mark>r.english_mark;

}
int main(){
    int n;
    cin>>n;
    Student array[n];
    for(int i=0;i<n;i++){
        cin>>array[i].name>>array[i].cls>>array[i].section>>array[i].id>>array[i].math_mark>>array[i].english_mark;

    }
    sort(array,array+n,srt);
    for(int i=0;i<n;i++){
        cout<<array[i].name<<" "<<array[i].cls<<" "<<array[i].section<<" "<<array[i].id<<" "<<array[i].math_mark<<" "<<array[i].english_mark<<endl;
    }
    
    return 0;
}