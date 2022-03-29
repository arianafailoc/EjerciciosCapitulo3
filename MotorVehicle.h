#include <iostream>
#include <string>
class MotorVehicle {
    public:
        MotorVehicle(std::string _make,std::string _fuelType,std::string _color) {
            make = _make; 
            fuelType = _fuelType;
            color = _color;

        }
        void displayCarDetails() {
            std::cout << "make: "<<make<<"\n";
            std::cout <<"fuelTyoe: "<<fuelType<<"\n";
            std::cout <<"yearOfManufacture: "<<yearOfManufacture<<"\n";
            std::cout <<"color: "<<color<<"\n";
            std::cout <<"engineCapacity: "<<engineCapacity<<"\n";


        }

    private:
        std::string make;
        std::string fuelType;
        int yearOfManufacture;
        std::string color;
        int engineCapacity;
};
