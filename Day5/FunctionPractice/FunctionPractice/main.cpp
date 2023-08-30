//
//  main.cpp
//  FunctionPractice
//
//  Created by Aiden Pratt on 8/25/23.
//

#include <iostream>
#include <cmath>

//part 1 (a) function to find the hyoptenuse of inputted numbers
float findHypotenuse(float a, float b){
    float hypotenuseAns = sqrt((pow(a , 2)) + (pow(b, 2)));
    return hypotenuseAns;
}

//part 1 (b) a function to determine x and y velocity
void findVelocity(double x, double y){
    double veloictyAnsX = x*cos(y);
    double velocityAnsY = x*sin(y);
    
    std::cout << veloictyAnsX << " " << velocityAnsY << "\n";
    
}
//part 2 isCapitalized
bool isCapitalized(std::string inputS){
    return std::isupper(inputS[0]);
}
 

//bool boolToString()
std::string boolToString(bool X){
    if (X == true){
        return "true";
        
    }
    else {
        return "false";
    }

}


//isPrime
bool isPrime(int x){
    bool numberP = true;
    
    if (x == 0 || x == 1){
        numberP = false;
    }
   for (int i = 2; i <= x / 2; i++){
        if (x % i == 0){
            numberP = false;
            break;
       }
    }
        
        
    return numberP;
}



//MAIN function
int main(int argc, const char * argv[]) {
    
//part 1(a)
    std::cout << "Enter two sides of your triangle: \n";
    float inputA = 0;
    float inputB = 0;
    std::cin >> inputA;
    std::cin >> inputB;
    
    float hypotenuseAns = findHypotenuse(inputA, inputB);
    
    std::cout << "The hyoptenuse is: " << hypotenuseAns << "\n";
    
//part 1(b)
    std::cout << "Enter your speed: \n";
    double inputSpeed = 0;
    std:: cout << "Enter your angle: \n";
    double inputAngle = 0;
    std::cin >> inputSpeed;
    std::cin >> inputAngle;
    
    findVelocity(inputSpeed, inputAngle);
    
//part 1(c) copying code in
    
    std::time_t result = std::time(nullptr);
       std::cout << std::asctime(std::localtime(&result))
    << result << " seconds since the Epoch\n";
    //this code checks the local time on the device and then displays the time since Epoch
    //it is calling "localtime" and putting it into the asctime to display the current date and time since the Epoch
    
    
//part 2
    //why wouldn't you want input from std::cin inside function?
    //if you take the cin prompt from the user in the function, they will not be recognized within the main() function because they are seperate.
    
    //Why would it be difficult to turn the speed/velocity task above into a function? What imperfect solutions can you come up with that wrap that code into one (or more) functions?
    //because it is difficult to return more than 2 values. In this case when doing it in a function, we had to just print out the answers of the equation. You could potentially have 2 different functions for each equation to solve this.
    
//part 2 isCapitalized
    std::cout << "Enter a a string: \n";
    std::string stringCap;
    std::cin >> stringCap;
    
    if (isCapitalized(stringCap)){
        std::cout << "The first letter is capitalized.\n";
    }
    else {
        std::cout << "The first letter is not capitalized.\n";
    }

//part 2 boolToString
    std::cout << "Checking if the function isCapitalized is true: \n";
    boolToString(isCapitalized(stringCap));
    if (boolToString(isCapitalized(stringCap))=="true"){
        std::cout << "The function is True\n";
    }
    else {
        std::cout << "The function is False\n";
    }
        
    
//part 2 isPrime
    std::cout << "Enter a number: \n";
    int primeNum;
    std::cin >> primeNum;
    
    isPrime(primeNum);
    
    if (isPrime(primeNum)){
        std::cout << primeNum <<  " is a prime number. \n";
    }
    else {
        std::cout << primeNum << " is not a prime number. \n";
    }
    

    return 0;
}



