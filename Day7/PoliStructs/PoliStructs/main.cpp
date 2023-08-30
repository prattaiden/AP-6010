//
//  main.cpp
//  PoliStructs
//
//  Created by Aiden Pratt on 8/29/23.
//

#include <iostream>
#include "PoliStructUtil.hpp"
#include <vector>

int main(int argc, const char * argv[]) {

//objects of each politician
    Politician p1 {"Aiden", "cpluser", "federal"};
    Politician p2 {"Jake", "javacan", "state"};
    Politician p3 {"Grant", "cpluser", "state"};
    Politician p4 {"Selena", "cpluser", "state"};
    Politician p5 {"Jessica", "javacan", "federal"};
    

//list of politicians
    std::vector <Politician> listOfPoliticians {p1, p2, p3, p4, p5};

    
//list of javacans
    std::vector <Politician> listOfJavacans;

//calling function javacans
    listOfJavacans = Javacans(listOfPoliticians);

//for each loop which prints the list of javacans from politicians
    for (Politician p: listOfJavacans){
        std::cout << "Javacan " << p.poliName << "\n";
    }
    
//list of Cplusers
    std::vector <Politician> listOfFedsAndCplusers;
    
    //test cpluser

//calling function for fedcplusers
    listOfFedsAndCplusers = federalCplusers(listOfPoliticians);
    
//for each loop to find and print cplusers and feds
    for (Politician p: listOfFedsAndCplusers){
        std::cout << "Cpluser and Federal " << p.poliName << "\n";
    }
    
    return 0;
    
    
}
