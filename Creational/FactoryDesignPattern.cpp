#include <bits/stdc++.h>
using namespace std;
class Vehcile {
  
  public:
   virtual void createVehcile() = 0;
};

class car: public Vehcile {

    public:
    void createVehcile() {
        cout<<"Car created";
    }
};

class bike: public Vehcile {

    public:
    void createVehcile() {
        cout<<"Bike created";
    }
};

class vechileFactory {
  
  public:
   static Vehcile* getVechile(string vehcileType) {
       Vehcile* vehcile;
        if(vehcileType == "car") {
            vehcile = new car();
        }
        else if(vehcileType == "bike") {
            vehcile = new bike();
        }
       return vehcile;
   }
};

int main() {
    string vec;
    cin>>vec;
    
    Vehcile* vehcile;
    vehcile = vechileFactory::getVechile(vec);
    vehcile->createVehcile();
}
