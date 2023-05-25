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

//#include <iostream>
//
//int main() {
//
//    int weight;
//    std::cout << "Enter your earth weight:";
//    std::cin >> weight;
//
//    int planet;
//    std::cout << "Enter a number for the planet you wants to fight on:";
//    std::cin >> planet;
//
//    double weightOnPlanet = 0.0;
//
//    switch (planet) {
//        case 1:
//            weightOnPlanet = weight * 0.38;
//            break;
//        case 2:
//            weightOnPlanet = weight * 0.91;
//            break;
//        case 3:
//            weightOnPlanet = weight * 0.38;
//            break;
//        case 4:
//            weightOnPlanet = weight * 2.34;
//            break;
//        case 5:
//            weightOnPlanet = weight * 1.06;
//            break;
//        case 6:
//            weightOnPlanet = weight * 0.92;
//            break;
//        case 7:
//            weightOnPlanet = weight * 1.19;
//            break;
//    }
//
//    std::cout << weightOnPlanet << "\n";
//    return weightOnPlanet;
//}


//#include <iostream>
//
//// Leap Year
//
//int main() {
//
//    int year;
//
//    std::cout << "Input a year: ";
//    std::cin >> year;
//
//    std::string yearString = std::to_string(year);
//
//    if (yearString.length() != 4) {
//        std::cout << "This is not a 4 didits year.";
//    };
//
//    if (year % 100 == 0 && year % 400 != 0) {
//        std::cout << "This is not a leap year. \n";
//    } else if (year % 400 == 0) {
//        std::cout << "This is a leap year. \n";
//    } else if (year % 4 == 0) {
//        std::cout << "This is a leap year. \n";
//    } else {
//        std::cout << "This is not a leap year. \n";
//    }
//
//}

// Converter from C to F

//#include<iostream>
////#include<conio.h>
//using namespace std;
//
//int main() {
//    float C;
//    float F;
//
//    cout<<"Input temperature in Celsius is = ";
//    cin>>C;
//
//    F = C * 9/5 + 32;
//
//
//    cout<<F<<"\n";
//    return 0;
//
//}

//}

//#include <iostream>
//
//int main() {
//    
//    int i = 0;
//    int square = 0;
//    
//
//    // Write a while loop here:
//    while ( i != 10 ) {
//        square = i * i;
//        std::cout << i << "   " << square << "\n";
//        i = i + 1;
//    }

#include <iostream>
#include <vector>

int main() {
    
    std::vector<double> subway_adult;
    
    std::vector<double> subway_child;
    
    
}
