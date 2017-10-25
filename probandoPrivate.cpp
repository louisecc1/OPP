#include<iostream>
using namespace std;
class Vehicle{       //al usar private en vez de protected, license solo puede ser modificado invocando su constructor
  private:          //o es solo disponible ser accedido dentro de la clase que los define
  string license;  //por ejemplo getDesc mounsterCar, imprime license,year,tamano,marca, desde moounsterCar
  int year;       //resultando error porque no puede acceder a estas porque solo son visibles dentro de la clase misma
  public:
  Vehicle (const string &mylicense,const int myyear)
    :license(mylicense),year(myyear){}
  
};
class Car :public Vehicle{
  private:
  string style;
  public:
  Car(const string &mylicense,const int myyear,const string &mystyle )
  :Vehicle(mylicense,myyear),style(mystyle){}  
};
class sportsCar :public Vehicle{
  private:
  string marca;
  public:
  sportsCar(const string &mylicense,const int myyear,const string &mymarca)
  :Vehicle(mylicense,myyear),marca(mymarca){}
};
class mounsterCar :public sportsCar{
  private:
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
