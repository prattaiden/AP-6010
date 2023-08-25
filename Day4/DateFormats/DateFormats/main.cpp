//
//  main.cpp
//  DateFormats
//
//  Created by Aiden Pratt on 8/24/23.
//

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, const char * argv[]) {
  
    //starting prompt and variables
    std::cout << "Enter a date (mm/dd/yyyy) ";
    std::string userDate;
    std::cin >> userDate;
    std::stoi(userDate);
    
    //array of months
    std::string allMonths[12] = {"January" ,"February" ,"March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  
    
    //making a substring for the month
    std::string sub1 = userDate.substr(0,2);
    int sub1_int = std::stoi(sub1);
    std::cout << allMonths[sub1_int - 1] << " ";
    if(sub1_int > 12){
        std::cout << "invalid date\n";
        return 0;
    }
    
    //making a substring for the days
    std::string sub2 = userDate.substr(3,2);
    std::cout << sub2 << ", ";
    int sub2_int = std::stoi(sub2);
    if (sub2_int > 31){
        std::cout << "invalid date\n";
        return 0;
    }
    
    //making a substring for the years
    std::string sub3 = userDate.substr(6,4);
    std::cout << sub3 << "\n";

    
    
    
    return 0;
}
