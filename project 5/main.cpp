//
//  main.cpp
//  project 5
//
//  Created by bita yonas on 12/3/23.
//

#include "Dogs.hpp"
#include <iostream>

using namespace std;

int main() {
    Dog dogPopulation;
    string fileName = "dogs.txt"; 
    
    
    dogPopulation.loadData(fileName);
    
    int choice;
    string country;
    
    do {
        cout << "\nMENU:\n";
        cout << "1. Total number of dogs in the world\n";
        cout << "2. Number of dogs in a specific country\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Total number of dogs in the world: " << dogPopulation.getDogPopulation() << endl;
                break;
            case 2:
                cout << "Enter country name: ";
                cin >> country;
                if (dogPopulation.isCountryAvailable(country)) {
                    int countryPopulation = dogPopulation.getCountryPopulation(country);
                    if (countryPopulation != -1) {
                        cout << "Number of dogs in " << country << ": " << countryPopulation << endl;
                    } else {
                        cout << "No data found for " << country << endl;
                    }
                } else {
                    cout << "Country not found." << endl;
                }
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 3);
    
    return 0;
}
