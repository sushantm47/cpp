#include <iostream>
using namespace std;

class a{
    private:
        int data;
        static a* instance;
        a(int x){
            data=x;
        }
    public:
        static a* getinstance(int x){
            if(!(instance))
                instance=new a(x);
            return instance;
        }
        int getdata(){
            return this->data;
        }
};

a* a::instance=0;

int main() {
    a *s=s->getinstance(1);
    cout<<s->getdata();
    a *s1=s1->getinstance(2);
    cout<<s1->getdata();
	cout<<"\nGfG!";
	return 0;
}
