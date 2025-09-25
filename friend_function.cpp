#include<iostream>
using namespace std;
class teacher;
class student{
    private:
    int marks;
    public:
    student(int n){
        marks=n;
    }
    friend void finalresult(student s,teacher t);
};
class teacher{
    private:
    int bonusmarks;
    public:
    teacher(int b){
        bonusmarks=b;
    }
    friend void finalresult(student s,teacher t);
};
void finalresult(student s,teacher t)
{
    cout<<"final score"<<(s.marks+t.bonusmarks)<<endl;
}
int main()
{
    student s1(80);
    teacher t1(20);
    finalresult(s1,t1);
    return 0;
}
