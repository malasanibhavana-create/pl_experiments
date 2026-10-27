#include<iostream>
using namespace std;
class vehicle
{
        public:
        void vehicle_info()
        {

                cout<<"its class vehicle."<<endl;
        }
};
class car : public vehicle
{
        public:
        void car_info()
        {
                cout<<"its car class,"<<endl;
        }
};
class electriccar : public car
{
        public:
        void electriccar_info()
        {
                cout<<"its electriccar class."<<endl;
        }
};
int main()
{
        electriccar E;
        E.electriccar_info();
        E.car_info();
        E.vehicle_info();
        return 0;
 }