#include "Dogs.hpp"
#include <fstream>
#include <iostream>

using namespace std;

Dog::Dog() {
    
}

int Dog::getDogPopulation() {
    return m_dogPopulation;
}

int Dog::getCountryPopulation(const string& country) {
    if (m_dogs.find(country) != m_dogs.end()) {
        return m_dogs[country];
    } else {
        return -1;     }
}

bool Dog::isCountryAvailable(const string& country) {
    return m_dogs.find(country) != m_dogs.end();
}

void Dog::loadData(const string& fileName) {
    ifstream file(fileName);
    if (file.is_open()) {
        string country;
        int population;
        while (file >> country >> population) {
            m_dogs[country] = population;
            m_dogPopulation += population;
            
        }
        file.close();
    } else {
        cerr << "Unable to open the file.\n";
    }
}


Dog::~Dog() {
    // Perform cleanup if needed
}
