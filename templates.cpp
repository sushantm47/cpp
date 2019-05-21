#include <iostream>
using namespace std;

template<typename t,class t2>

class A{
    public:
        t a;
        t2 b;
    A(t aa,t2 bb):a(aa),b(bb){}
    t op(){
        //cout<<a<<"\t"<<b<<endl;
        return a+b;
        }
};


int main() {
    int a=10;
    float b=90.22;
    A<int,char> obj(a,'A');
    cout<<"sum->"<<obj.op();
	return 0;
}