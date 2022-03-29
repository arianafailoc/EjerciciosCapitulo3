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
            std::cout <<"fuelType: "<<fuelType<<"\n";
            std::cout <<"yearOfManufacture: "<<yearOfManufacture<<"\n";
            std::cout <<"color: "<<color<<"\n";
            std::cout <<"engineCapacity: "<<engineCapacity<<"\n";

//SET
        }
        void setMake(std::string _make) {
            make =_make;
            }
        void setFuelType(std::string _fuelType) {
            fuelType =_fuelType;
            }
        void setYearOfManufacture(int _yearOfManufacture) {
            yearOfManufacture =_yearOfManufacture;
            }
        void setColor(std::string _color) {
            color =_color;
            }
        void setEngineCapacity(int _engineCapacity) {
            engineCapacity =_engineCapacity;
            }
//GET
        std::string getMake() const{
            return make;
        }

         std::string getfuelType() const{
            return fuelType;
        }

        int getYearOfManufacture() const {
            return yearOfManufacture;
        }

          std::string getColor() const{
            return color;
        }

        int getEngineCapacity() const {
            return engineCapacity;
        }

    private:
        std::string make;
        std::string fuelType;
        int yearOfManufacture;
        std::string color;
        int engineCapacity;
};
