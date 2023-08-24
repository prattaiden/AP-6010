//
//  main.cpp
//  ForLoopPractice
//
//  Created by Aiden Pratt on 8/23/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    //printing out numbers in the for loop
    std::cout << "for loop: ";
    for (int x = 1; x <= 10; x++){
        std::cout << x;
    }
    
    std::cout << "\n";
    
    //printing out numbers in the while loop
    std::cout << "while loop: ";
    int y = 0;
    while (y < 10){
        y++;
        std::cout << y;
    }
    //the for loop was more efficient and appropraite for printing these numbers because we know how many iterations we want
    
    std::cout << "\n";
    
    
    //part two, prompting user to enter 2 numbers then printing the inbetween numbers
    int numberA;
    int numberB;
    
    //asking for numbers
    std::cout << "Please enter two numbers: \n";
    std::cin >> numberA;
    std::cin >> numberB;
    
    //while loops to add to numberA or subtract from numberA so it iterates until it is equal to numberB
    while (numberA < numberB){
        std::cout << " " << numberA;
        numberA++;
    }
    
    while (numberA >= numberB){
        std::cout << " " << numberA;
        numberA--;
    }
    
    std::cout << "\n";
    //next part, printing all odd numbers from 1 - 20. two solutions
    
   //with an if statement
    for  (int number = 0; number <= 20; number++){
        if (number % 2 != 0){
            std::cout << " " << number;
        }
    }
    
    std::cout << "\n";
    
   //without an if
    for (int number = 1; number <=20; number = number + 2){
            std::cout << " " << number;
    }
    
    std::cout << "\n";

    
//next step, asking user to enter numbers and add them up until a number <0 is entered
    
  
    int newNum;
    int sumNum = 0;
    do {
        std::cout << "Enter positive numbers to add up: \n";
        std::cin >> newNum;

        sumNum = sumNum + newNum;
        std::cout << sumNum << "\n";
        
    }
    //do while now, taking the sum then subtracting the new number so that the final answer does not count the negative added
    while (newNum > 0);
    std::cout << "final number: " << sumNum - newNum << "\n";
  
    
//MULTI table
    
    for (int m = 1; m <= 5; m++){
        std::cout << "\n" << m << "x*:";
        for (int n = 1; n <= 5; n++){
            std::cout << n * m << " ";
        }
    }
    std::cout << "\n";
    
    return 0;
}






