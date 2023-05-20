//
//  main.cpp
//  HelloWorld
//
//  Created by bigriver on 2023-05-17.
//  Copyright © 2023 bigriver. All rights reserved.
//

// library
#include <iostream>

// this is from original xcode
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

// this is simpler
//the main function
int main() {
    
    int tip = 0;

    std::cout << "Enter tip amount: ";
    std::cin >> tip;
    std::cout << "You paid " << tip << " dollars." << "\n";
}
