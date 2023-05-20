//
//  main.cpp
//  HelloWorld
//
//  Created by bigriver on 2023-05-17.
//  Copyright © 2023 bigriver. All rights reserved.
//

// to converte F to C

//#include <iostream>
//
//int main() {
//    
//    double tempf = 60;
//    double tempc = (tempf - 32) / 1.8;
//    
//    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
//    
//}



//// library
//#include <iostream>
//
//// this is from original xcode
////int main(int argc, const char * argv[]) {
////    // insert code here...
////    std::cout << "Hello, World!\n";
////    return 0;
////}
//
//// this is simpler
////the main function
//int main() {
//
//    int tip = 0;
//
//    std::cout << "Enter tip amount: ";
//    std::cin >> tip;
//    std::cout << "You paid " << tip << " dollars." << "\n";
//}

#include <iostream>

int main() {
    
    int weight;
    std::cout << "Enter your earth weight:";
    std::cin >> weight;
    
    int planet;
    std::cout << "Enter a number for the planet you wants to fight on:";
    std::cin >> planet;
    
    double weightOnPlanet = 0.0;
    
    switch (planet) {
        case 1:
            weightOnPlanet = weight * 0.38;
            break;
        case 2:
            weightOnPlanet = weight * 0.91;
            break;
        case 3:
            weightOnPlanet = weight * 0.38;
            break;
        case 4:
            weightOnPlanet = weight * 2.34;
            break;
        case 5:
            weightOnPlanet = weight * 1.06;
            break;
        case 6:
            weightOnPlanet = weight * 0.92;
            break;
        case 7:
            weightOnPlanet = weight * 1.19;
            break;
    }
    
    std::cout << weightOnPlanet << "\n";
    return weightOnPlanet;
}
