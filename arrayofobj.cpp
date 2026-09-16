#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    int roll;
    string name;
    void getData()
    {
        cin>>roll>>name;
    }
    void display()
    {
        cout<<roll<<" "<<name<<endl;
    }
};




int main() {
	student s[3];
	cout<<"enter details:";
	for(int i=0;i<3;i++)
	{
	    s[i].getData();
	}
	cout<<"\n student details:";
	for(int i=0;i<3;i++)
	{
	    s[i].display();
	}
	return 0;

}
