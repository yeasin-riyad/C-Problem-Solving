#include<bits/stdc++.h>
using namespace std;



class Student{
    public:
        string name;
         int roll;
         int marks;
};

bool sort_students(Student l, Student r){
    return l.marks==r.marks ? l.roll<r.roll : l.marks>r.marks;

}
int main(){
    int n;
    cin>>n;
    Student array[n];
    for(int i=0;i<n;i++){
        cin>>array[i].name>>array[i].roll>>array[i].marks;
    }

    sort(array,array+n,sort_students);
     for (int i = 0; i < n; i++) {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }

    
    return 0;
}