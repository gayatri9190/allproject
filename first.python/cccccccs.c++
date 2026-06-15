#include<iostream>
using namespace std;
/*class abc{
  public:
  int a, b, c; //data member//
  //defult :it is with out argument//
  abc(){
    a=10;
    b=20;   //constructor//

  }
  void f1(){ //member function//
    c=a+b;
    cout<<c;
  }
};
int main(){
  abc add;
  add.f1();
  return 0;
}*/


/*class bca{//belong oprator outside work//
  public:
  int a, b, c;
  public:
  void f1();
  
};
void bca::f1(){
  a=10;
  b=20;
  c=a+b;
  cout<<c;
}
int main(){
  bca obj;
  obj.f1();
  return 0;
}*/


/*class bca{ //friend function//
  private:
  int a, b;
  public:
  void f1()
  {
    a=10;
    b=20;
  }
  friend void bb(bca x);
};
void bb(bca x)
{
  cout<<x.a<<endl;
  cout<<x.b;
}
int main(){
  bca obj;
  obj.f1();
  bb(obj);
}*/
/*//destructor
class bca{
  public://data member
  int a,b,c;
  public:
  bca()//construtor
  {
    a=10;
    b=20;
  }
  void f1(){//function member
    c=a+b;
    cout<<c;
  }
  ~ bca()//destructor when your work finish then he delete and the memory is free
  {

  }
};
int main(){
  bca p1;//object
  p1.f1();//calling function
}*/

//function overloading where same function name use many time
/*void f1(){//without argument
  cout<<"bca"<<endl;
}
void f1(int x){ //with argument
  cout<<x<<endl;
}
void f1(int x, int y){
int m;
m=x+y;
cout<<m;
}
int main(){
  f1();
  f1(5);
  f1(10,25);
  return 0;
}*/
//pointer
/*
int main(){
int a,b,c,d;
int *p1 ,*p2;//store the value
a=30;
b=20;
p1=&a;//&it is use to store the address
p2=&b;
c=*p1+*p2;
d=*p1-*p2;
cout<<c<<endl;
cout<<d<<endl;
return 0;
}*/
//single inheritance
/*
class bca
{
  public:
  void f1(){
    cout<<"hello"<<endl;
  }
};
class mca:public bca
{
  public:
  void f2(){
    cout<<"how are you";
  }
};
int main(){
  mca obj;
  obj.f1();
  obj.f2();
}*/
//hirechical inheritance
/*
class bca
{
  public:
  void f1(){
    cout<<"hello"<<endl;
  }
};
class mca:public bca
{
  public:
  void f2(){
    cout<<"how are you";
  }
};
class btech:public bca
{
  public:
  void f3(){
    cout<<"are you fine";
  }
};
int main(){
  mca obj;
  obj.f1();
  obj.f2();
  btech obj1;
  obj1.f1();
  obj1.f3();
}
  */
//multi inheritance
/*
class bca
{
  public:
  void f1(){
    cout<<"hello"<<endl;
  }
};
class mca:public bca
{
  public:
  void f2(){
    cout<<"how are you"<<endl;
  }
};
class btech:public mca
{
  public:
  void f3(){
    cout<<"are you fine";
  }
};
int main(){
  btech obj;
  obj.f1();
  obj.f2();
  obj.f3();
}
*/
//multiple-inheritance
/*
class ba
{
  public:
  void f1(){
    cout<<"hello"<<endl;
  }
};
class bca
{
  public:
  void f2(){
    cout<<"how are you"<<endl;
  }
};
class msc:public ba,public bca
{
  public:
  void f3(){
    cout<<"are you fine";
  }
};
int main(){
  msc obj;
  obj.f1();
  obj.f2();
  obj.f3();
}
*/
//hybride inheritance
/*
class ba
{
  public:
  void f1(){
    cout<<"hello"<<endl;
  }
};
class ma:public ba
{
  public:
  void f2(){
    cout<<"how are you"<<endl;
  }
};
class mphil:public ma
{
  public:
  void f3(){
    cout<<"are you fine";
  }
};
class phd:public ma
{
  public:
  void f4(){
    cout<<"where are you";
  }
};
int main(){
  mphil obj;
  obj.f1();
  obj.f2();
  obj.f3();
  phd p1;
  p1.f1();
  p1.f2();
  p1.f4();
}*/
//nested class
/*
class bca //enclosing class
{
  int a,b,c;
  public:
  void f1()
  {
    a=5;
    b=a*a;
    cout<<b<<endl;
  }
  class mca //enclosed class
  {
    public:
    int x,y,z;
    void f2()
    {
      x=20;
      y=30;
      z=x+y;
      cout<<z<<endl;
    }
  };
};
int main()
{
  bca p1;
  p1.f1();
  bca::mca p2;
p2.f2();
}
*/
//container class
/*
class bca
{
  int a,b,c;
  public:
  void f1()
  {
    a=5;
    b=a*a;
    cout<<b<<endl;
  }
};
  class mca //enclosed class
  {
    public:
    int x,y,z;
    bca p1;//create obj
    void f2()
    {
      x=20;
      y=30;
      z=x+y;
      cout<<z<<endl;
      p1.f1();//calling guys
    }

  };
  int main()
  {
    mca p;
    p.f2();
  }*/
 
// specifiers ,access modifire, derivaiton//
/*class bca 
{
  public:
  int b;
  protected:
  int c;
  private:
  int a;
  public:
  bca ()
  {
    a=10;
    b=20;
    c=30;
  }
  void aa()
  {
    cout<<"hello im base class"<<a<<endl;
     cout<<"hello im base class"<<b<<endl;
      cout<<"hello im base class"<<c<<endl;
  }
};
class mca:public bca
{
  int m,s;
  public: 
  void bb()
  {
    m=10;
    s=c+b+m;
    cout<<s<<endl;
  }
};
int main()
{
  mca obj;
  obj.bb();
  obj.aa();
}*/
//operator overloading(unary opertor) we use -- in decriment
/*class bca 
{
  private:
  int a;
  public:
  bca(){
    a=5;
  }
void operator ++(){
   a=a+1;
}
  void f1(){
    cout<<a<<endl;
  }
};
int main()
{
  bca p,q;
  p.f1();
  ++p;
  ++p;
  ++p;
  p.f1();
  q.f1();
}*/
