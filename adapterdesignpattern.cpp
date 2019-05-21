#include <iostream>
using namespace std;

class lambo{
    public:
        string name;
        lambo(){
            name="lambo";
        }
        virtual void disp()=0;
};

class ambasador{
    public:
        void drive(){
            cout<<"U r driving lambo but u r using ambasador xD";
        }
};

class adapter:public lambo,public ambasador{
    public:
        adapter(){
        };
        void disp(){
        drive();
        }
};


int main() {
    lambo *l = new adapter();
    l->disp();
	cout<<"GfG!";
	return 0;
}
