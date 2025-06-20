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
    int l_student_total_marks=l.math_mark+l.english_mark;
    int r_student_total_marks=r.math_mark+r.english_mark;
    return l_student_total_marks==r_student_total_marks ? l.id<r.id : l_student_total_marks>r_student_total_marks;

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