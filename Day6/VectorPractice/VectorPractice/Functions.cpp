//
//  Functions.cpp
//  VectorPractice
//
//  Created by Aiden Pratt on 8/28/23.
//

#include "Functions.hpp"
#include <vector>

int sum(vector<int> vector){
    
    int sumV = 0;
    for (int i = 0; i < vector.size(); i++){
        sumV += vector[i];
    }
    return sumV;
}
