#include<iostream>
using namespace std;

class Car{
    public:

        string Model;
        string Manufacturer;
        int price;

        void print(){
            cout << "The " << Manufacturer << Model << " is available at a price of " << price << " rupees.";
        }
};

int main(){

    //initialization

    int a = 30;  //copy initialization
    int b(370);  //direct initilization
    int c{40}; //direct list initilization

    Car myCar; //creating a object of the Car class.
    myCar.Manufacturer = "BMW";
    myCar.Model = "M5";
    myCar.price = 20000000;

    myCar.print();

    return 0;
}