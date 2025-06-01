#include<iostream>

using namespace std;

class vehicle{
    public:

       int mileage=120;
       int cost=150000;

    void put_vehicle_details(){

        cout<<"I am a vehicle";
        cout<<"\nMileage of vehicle is:"<<mileage;
        cout<<"\nCost of vehicale is:"<<cost;

    }

};


class car : public vehicle{
    public:
       string color="blue";
       int tyres = 4;

       void show_car_details(){
           cout <<"I am a car";
           cout<<"\n Color of car is:"<<color;
           cout<<"\nNumber of tyres in car are"<<tyres;


    }
       
    };

    int main(){

        car c1;

        c1.put_vehicle_details();
        
        c1.show_car_details();
            

        return 0;
        
    }        