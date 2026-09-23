#include <iostream>
#include <memory>
using namespace std;

class Demo{
    public:
    void show(){
        cout<<"smart pointer Demo:";
    }
};
int main() {
	unique_ptr <Demo> p1=make_unique <Demo>();
	p1->show();
	shared_ptr<Demo>p2=make_shared <Demo>();
	shared_ptr<Demo>p3=p2;
	cout<<"\n counter="<<p2.use_count();
	return 0;

}
