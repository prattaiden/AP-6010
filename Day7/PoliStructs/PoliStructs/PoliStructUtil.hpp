//
//  PoliStructUtil.hpp
//  PoliStructs
//
//  Created by Aiden Pratt on 8/29/23.
//

#ifndef PoliStructUtil_hpp
#define PoliStructUtil_hpp
#include <string>
#include <stdio.h>
#include <vector>

struct Politician{
    std::string poliName;
    std::string partyAff;
    std::string govType;
};


bool isPoliticianFed(Politician poli);
bool isPoliticianState(Politician poli);

bool isJavacans(Politician poli);
bool isCplusers(Politician poli);

bool politicianName(Politician poli);
bool politicianName(Politician poli);


//vector for finding javacans
std::vector <Politician> Javacans(std::vector <Politician> allPoliticians);

//vector for finding cplusers
std::vector <Politician> Cplusers(std::vector <Politician> allPoliticians);

//vector for finding feds
std::vector <Politician> Feds(std::vector <Politician> allPoliticians);

//vector for federal cplusers
std::vector <Politician> federalCplusers (std::vector <Politician> allPoliticians);
    
//function needed to check a vector of politicians
#endif /* PoliStructUtil_hpp */
