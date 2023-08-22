//
//  main.cpp
//  RoadTripCalculator
//
//  Created by Aiden Pratt on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    float distanceMiles;
    float vehicleMPG;
    float gasCost;
    float costOfTrip;
   
    
    std::cout << "Road trip time!\n"; //intro to the program
    std::cout << "Enter the distance in miles you want to travel:\n"; //asking user to enter their desired distance to travel
    std::cin >> distanceMiles; //taking an integer input
    std::cout << "You will travel " << distanceMiles << " miles.\n"; //repeating the desired distance to travel
    std::cout << "How many miles per gallon does your vehicle get?\n"; //asking for MPG
    std::cin >> vehicleMPG; //asking for miles per gallon from the user
    std::cout << "Your vehicle gets " << vehicleMPG << " MPG.\n"; // reapeating
    std::cout << "How much does one gallon of gas cost?\n"; //prompting to entire gas price
    std::cin >> gasCost;//user enters the price of gas per gallon
    std::cout << "Gas costs $" << gasCost << " per gallon.\n"; //repeating the cost of gas
    
    costOfTrip = distanceMiles * gasCost/vehicleMPG; //calculating the cost of the trip with the provided information from the user
    
    std::cout << "This trip will cost you $" << costOfTrip << "!\n"; //final costs of trip
    
    
    return 0;
}
