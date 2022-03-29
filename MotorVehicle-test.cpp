#include "MotorVehicle.h"

int main() {
    MotorVehicle motorvehicle{"Toyota","E5","Black"};
    motorvehicle.setEngineCapacity (5000);
    motorvehicle.setYearOfManufacture(2015);

    motorvehicle.displayCarDetails();
}

