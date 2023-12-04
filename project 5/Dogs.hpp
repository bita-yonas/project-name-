//
//  Dogs.hpp
//  project 5
//
//  Created by bita yonas on 12/3/23.
//

#ifndef DOG_H
#define DOG_H

#include <string>
#include <unordered_map>

class Dog {
public:
    Dog();
    int getDogPopulation();
    int getCountryPopulation(const std::string& country);
    bool isCountryAvailable(const std::string& country);
    void loadData(const std::string& fileName);
    virtual ~Dog();

protected:

private:
    int m_dogPopulation = 0;
    std::unordered_map<std::string, int> m_dogs;
};

#endif 
