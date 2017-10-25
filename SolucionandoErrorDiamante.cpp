#include<iostream>
using namespace std;
class Vehicle{
  public:
  int placa;
};
class Car:public virtual Vehicle{
};
class sportCar:public virtual Vehicle{
};
class mounsterCar:public Car,public sportCar{
};
int main(){
  mounsterCar a;
  a.placa=30;
  cout<<a.placa;
  return 0;
}
