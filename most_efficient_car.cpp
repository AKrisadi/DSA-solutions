// Problem Link - https://www.codingninjas.com/studio/problems/most-cost-efficient-car_983602?leftPanelTab=0
#include <bits/stdc++.h> 
/*
    --------------------------- Car class for reference ---------------------------
    
    class Car {
        public:
            int priceOfCar;
            int maintenanceCostPerMonth;
            int numberOfkilometerCarRunInOneLiter;
            int pricePerLiter;
            int numberOfKilometerCarRunInaMonth;

            Car(int priceOfCar, int maintenanceCostPerMonth, int numberOfkilometerCarRunInOneLiter,
                int pricePerLiter, int numberOfKilometerCarRunInaMonth) {
                
                this->priceOfCar = priceOfCar;
                this->maintenanceCostPerMonth = maintenanceCostPerMonth;
                this->numberOfkilometerCarRunInOneLiter = numberOfkilometerCarRunInOneLiter;
                this->numberOfKilometerCarRunInaMonth = numberOfKilometerCarRunInaMonth;
                this->pricePerLiter = pricePerLiter;
                
            }
    };
*/

int mostCostEfficientCar(Car petrolCar, Car dieselCar) {
    // Write your code here.
    int actualCost = petrolCar.priceOfCar; 
    int maintainanceCost = petrolCar.maintenanceCostPerMonth * 6; 
    int pricePerKilometer = petrolCar.pricePerLiter / petrolCar.numberOfkilometerCarRunInOneLiter; 
    int fuelCost = pricePerKilometer * petrolCar.numberOfKilometerCarRunInaMonth * 6; 
    int costOfPetrolCar = actualCost + maintainanceCost + fuelCost; 
    // Calculate for 'Diesel' car. 
    actualCost = dieselCar.priceOfCar; 
    maintainanceCost = dieselCar.maintenanceCostPerMonth * 6; 
    pricePerKilometer = dieselCar.pricePerLiter / dieselCar.numberOfkilometerCarRunInOneLiter; 
    fuelCost = pricePerKilometer * dieselCar.numberOfKilometerCarRunInaMonth * 6; 
    int costOfDieselCar = actualCost + maintainanceCost + fuelCost; 

    
    if (costOfDieselCar > costOfPetrolCar) { 
        return 0; 
    } 
    else if (costOfPetrolCar > costOfDieselCar) {
            return 1;
    } else {
      return -1;
    }
}
