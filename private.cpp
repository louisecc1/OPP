#include<iostream>
using namespace std;
class Vehicle{
  private:
  string license;
  int year;
  public:
  Vehicle (const string &mylicense,const int myyear)
    :license(mylicense),year(myyear){}
  const string & getLicense () const { return license ;}
  const int getYear () const { return year ;}
};
class Car :public Vehicle{
  private:
  string style;
  public:
  Car(const string &mylicense,const int myyear,const string &mystyle )
  :Vehicle(mylicense,myyear),style(mystyle){}
  const string & getStyle () { return style ;}
};
class sportsCar :public Vehicle{
  private:
  string marca;
  public:
  sportsCar(const string &mylicense,const int myyear,const string &mymarca)
  :Vehicle(mylicense,myyear),marca(mymarca){}
  const string & getMarca () { return marca ;}
};
class mounsterCar :public sportsCar{
  private:
  int tamano;
  public:
  mounsterCar(const string &mylicense,const int myyear,const int mytamano,const string &mymarca)
  :sportsCar(mylicense,myyear,mymarca),tamano(mytamano){}
  const string getTamano(){ return to_string(tamano);}
};
int main(){

  mounsterCar a("d3f2f2",2015,13,"ferrari");
  mounsterCar *r=&a;
  cout<<r->getLicense()<<"\n";
  cout<<r->getYear()<<"\n";
  cout<<r->getMarca()<<"\n";
  cout<<r->getTamano()<<"\n";
  return 0;
}
