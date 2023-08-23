//
//  main.cpp
//  IfStatementPractice
//
//  Created by Aiden Pratt on 8/23/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int userAge;
    
    std::cout << "Enter your age:\n";
    std::cin >> userAge;
    
    //voting age
    if (userAge >= 18) {
        std::cout << "You are old enough to vote!\n";
    }
    else if (userAge < 18) {
        std::cout << "You are not old enough to vote.\n";
    }
    
    //senate age
    if (userAge >= 30) {
        std::cout << "You are old enough to run for Senate!\n";
    }
    else if (userAge < 30) {
        std::cout << "You are not old enough to run for Senate.\n";
        
    }
    //generations
    
    if (userAge >= 80) {
        std::cout << "You are part of the greatest generation!\n";
    }
    else if (userAge < 80 && userAge > 60){
        std::cout << "You are a baby boomer!\n";
    }
    else if (userAge < 60 && userAge > 40){
        std::cout << "You are part of generation X!\n";
    }
    else if (userAge < 40 && userAge > 20){
        std::cout << "You are a millenniel!\n";
    }
    else {
        std::cout << "You are an iKid!\n";
    }
    
    //part 2 sleeping in...
    char weekdayAnswer;
    std::cout << "Is it a weekday? (Y/N)\n";
    std::cin >> weekdayAnswer;
    
    //setting bool for Y or N being true or false
    bool isWeekday = false;
    if (weekdayAnswer == 'Y'){
        isWeekday = true;
    }
    else if (weekdayAnswer == 'N') {
        isWeekday = false;
    }
  
    
    char holidayAnswer;
    std::cout << "Is it a holiday? (Y/N)\n";
    std::cin >> holidayAnswer;
    
    //setting bool for Y or N being true or false
    bool isHoliday = false;
    if (holidayAnswer == 'Y'){
        isHoliday = true;
    }
    else if (holidayAnswer == 'N'){
        isHoliday = false;
    }
   
    char childAnswer;
    std::cout << "Do you have children? (Y/N)\n";
    std::cin >> childAnswer;
    
    //setting bool for Y or N being true or false
    bool hasChild = false;
    if (childAnswer == 'Y'){
        hasChild = true;
    }
    else {
        hasChild = false;
    }

    
    //now checking if each question is true or false determining sleeping in
    if (hasChild){
        std::cout << "You cannot sleep in.\n";
    }
    else if ((!hasChild && isHoliday) || (!hasChild && isHoliday && isWeekday)){
        std::cout << "You can sleep in.\n";
    }
    else {
        std::cout << "You cannot sleep in.\n";
    }
    

}
