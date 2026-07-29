#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll,M1,M2,M3,M4;
    float p,A;
    void input()
    {
    cin>>name;
    cin>>roll>>M1>>M2>>M3>>M4;
    }
    void average(){
         A=(M1+M2+M3+M4)/4;
    }
    void calculate(){
        p=((M1+M2+M3+M4)*100)/400;
    }
    void display(){
        cout<<"name:"<<name;
        cout<<"roll no.:"<<roll<<endl;
        cout<<"maths:"<<M1<<endl;
        cout<<"physics:"<<M2<<endl;
        cout<<"chemistry:"<<M3<<endl;
        cout<<"english:"<<M4<<endl;
        cout<<"petcentage:"<<p<<"%"<<endl;
        cout<<"Average:"<<A<<endl;
    }
};
int main(){
    student s;
    s.input();
    s.calculate();
    s.display();
    s.average();
}