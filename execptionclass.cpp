#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;

class error{
public:
  int i;
  string s;
  error(int ii=0,string ss="nil"):i(ii),s(ss){}
  void show(){
    cout<<"error num->"<<i<<"\tmsg->"<<s<<endl;
  }
};

class emp {
public:
  int flag;
  int num;
  float sal;
  emp(int f=1,int n=0,float s=0.0):flag(f),num(n),sal(s){}
  virtual void hike (int n)=0;
  static void hike(emp **eptr,int n ){
    for(int i=0;i<n;i++){
      if(eptr[i]->sal>32000)
        throw error(404,"boss salary hattr kodunghill innu jasti");
      else
        eptr[i]->hike(n);
    }
  }
  virtual void displ()=0;
  static void disp(emp **ptr,int n){
    for(int i=0;i<n;i++){
    if(ptr[i]->flag==1)
        ptr[i]->displ();
    }
  }
};

class boss:public emp{
public:
  int shares;
  boss(int ss,int f,int n,float s):shares(ss),emp(f,n,s){}
  void hike(int n){
    sal=sal+(sal/n)+((shares/10)*sal);
  }
  void displ(){
    cout<<"TYpe->Boss\n";
    cout<<"emp num->"<<num<<"\tno of shares->"<<shares<<"\tsal->"<<sal<<endl;
  }
};

class worker:public emp{
public:
  worker(int f,int n,float s):emp(f,n,s){}
  void hike(int p) {
    sal=sal+(sal/p);
  }
  void displ(){
    cout<<"TYpe-> Employee\n";
    cout<<"emp num->"<<num<<"\tsal->"<<sal<<endl;
  }
};

int main(){
  emp *ptr[4]={new boss(50,1,01,1000.0),new worker(1,02,450.0),new worker(0,03,555.0),new worker(1,04,955.0)};
  int x;
  while (1) {
    cout<<"\n***Menu***\n"<<"HIke salary->1\n"<<"DIsplay-> 2\n"<<"Exit->0\n";
    try{
    cin>>x;
    if(!(x== 1|| x==2 || x==0)){
      throw x;
    }
    else{
      switch (x) {
        case 1:try{
                      emp::hike(ptr,4);
                  }
              catch(error &e){
                e.show();
              }
                break;
        case 2:emp::disp(ptr,4);
                break;
        case 0:exit(1);
                break;
      }
    }
    }
    catch(...){
      cout<<"the entered value is\t"<<x<<" which is invalid";
    }

  }
  return 0;
}
