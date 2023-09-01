//
//  main.cpp
//  CommandLineArgs
//
//  Created by Aiden Pratt on 9/1/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    
    for (int i = 1; i < argc; i++){
        std::cout << argv[i] << " ";
    }

    

    
    return 0;
}
