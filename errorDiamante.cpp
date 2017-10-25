#include<iostream>
using namespace std;
class Vehicle{
  public:
  int placa;
};
class Car:public  Vehicle{
};
class sportCar:public  Vehicle{
};
class mounsterCar:public Car,public sportCar{
};
int main(){
  mounsterCar a;
  a.placa=30;//la variable placa es ambigua,al momentto de herencia , hereda 2 veces
  cout<<a.placa;  //dicha variable
  return 0;
}
