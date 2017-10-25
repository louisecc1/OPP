#include<iostream>
using namespace std;
class Vehicle{
  protected:
  string license;//las cosas dentro de protected son visibles en la clase y en las subclases.
  int year;
  public:
  Vehicle (const string &mylicense,const int myyear)
    :license(mylicense),year(myyear){}
  
};
class Car :public Vehicle{
  protected:
  string style;
  public:
  Car(const string &mylicense,const int myyear,const string &mystyle )
  :Vehicle(mylicense,myyear),style(mystyle){}  
};
class sportsCar :public Vehicle{
  protected:
  string marca;
  public:
  sportsCar(const string &mylicense,const int myyear,const string &mymarca)
  :Vehicle(mylicense,myyear),marca(mymarca){}
};
class mounsterCar :public sportsCar{
  protected:
  int tamano;
  public:
  mounsterCar(const string &mylicense,const int myyear,const int mytamano,const string &mymarca)
  :sportsCar(mylicense,myyear,mymarca),tamano(mytamano){}
  const string getDesc (){
    return license +' '+ to_string(year)+' '+to_string(tamano)+' '+marca;
  }
};
int main(){

  mounsterCar a("d3f2f2",2015,13,"ferrari");
  mounsterCar *r=&a;
  cout<<r->getDesc();
  return 0;
}
