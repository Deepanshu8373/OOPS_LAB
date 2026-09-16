#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    int marks = 50;

    friend class teacher;
};

class teacher
{
public:
    void show(student s)
    {
        cout << "marks: " << s.marks << endl;
    }
};

int main()
{
    student s;
    teacher t;

    t.show(s);

    return 0;
}
