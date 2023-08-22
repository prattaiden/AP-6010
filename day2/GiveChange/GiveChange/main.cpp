//
//  main.cpp
//  GiveChange
//
//  Created by Aiden Pratt on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int itemPrice;
    int moneyPaid;
    int changeReturn;
    
    //giving values to the coins
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    //prompting user to enter values for the code
    std::cout << "Enter the price of the item in cents:\n";
    std::cin >> itemPrice;
    std::cout << "Enter the amount of money paid in cents:\n";
    std::cin >> moneyPaid;
    
    //defining the variable changeReturn as the difference between price and paid
    changeReturn = moneyPaid - itemPrice;
    
    std::cout << "Change = " << changeReturn << "\n";
    
    //new variable is the number of quarters needed to return
    int changeQuarters = changeReturn / quarter;
    
    std::cout << "Quarters: " << changeQuarters << "\n";
        
    //updating the change return value after quarters
    changeReturn = changeReturn - changeQuarters * quarter;
    
    //new variable is the number of dimes needed to return
    int changeDimes = changeReturn/dime ;
    std::cout << "Dimes: " << changeDimes << "\n";
    
    //updating change return value after dimes
    changeReturn = changeReturn - changeDimes * dime;
    
    //new variable is the number of nickels needed to return
    int changeNickels = changeReturn/nickel;
    std::cout << "Nickels: " << changeNickels << "\n";
    
    //updating the change return value after nickels
    changeReturn = changeReturn - changeNickels * nickel;
    
    //new variable for change in pennies to return
    int changePennies = changeReturn/penny;
    std::cout << "Pennies: " << changePennies << "\n";

    
    return 0;
}
