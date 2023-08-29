//
//  PoliStructUtil.cpp
//  PoliStructs
//
//  Created by Aiden Pratt on 8/29/23.
//

#include "PoliStructUtil.hpp"

//finding if the politician is federal or state
bool isPoliticianFed(Politician poli){
    return poli.govType=="federal";
}

bool isPoliticianState(Politician poli){
    return poli.govType=="state";
}

//finding if the politician is java or cplus
bool isJavacans(Politician poli){
    return poli.partyAff=="javacan";
}

bool isCplusers(Politician poli){
    return poli.partyAff=="cpluser";
}

//vector and loop to determine if politician is cpluser or javacans
std::vector <Politician> Javacans(std::vector <Politician> allPoliticians){
    std::vector<Politician> JavacanVector;

    //method 1
//    for (int i = 0; i <allPoliticians.size(); i++){
//        if ( isJavacans(allPoliticians[i])) {
//            JavacanVector.push_back(allPoliticians[i]);
//        }
//    }
    
//    for (Politician p1:allPoliticians){
//        if (p1.partyAff=="javacan"){
//            JavacanVector.push_back(p1);
//        }
//    }
        
    for (Politician p1:allPoliticians){
        if (isJavacans(p1)){
            JavacanVector.push_back(p1);
        }
    }

    return JavacanVector;
        
        }

std::vector <Politician> Cplusers(std::vector <Politician> allPoliticians){
    std::vector<Politician> CpluserVector;
    
    for (Politician p1:allPoliticians){
        if (isCplusers(p1)){
            CpluserVector.push_back(p1);
        }
    }
    return CpluserVector;
}


std::vector <Politician> Feds(std::vector <Politician> allPoliticians){
    std::vector<Politician> FedsVector;
    
    for (Politician p1:allPoliticians){
        if (isPoliticianFed(p1)){
            FedsVector.push_back(p1);
        }
    }
    return FedsVector;
}



std::vector <Politician> federalCplusers (std::vector <Politician> allPoliticians){
    std::vector<Politician> FederalCplusersVector;
    
    for (Politician p1:allPoliticians){
        if (isPoliticianFed(p1) && isCplusers(p1)){
            FederalCplusersVector.push_back(p1);
        }
    }
    return FederalCplusersVector;
}



            
