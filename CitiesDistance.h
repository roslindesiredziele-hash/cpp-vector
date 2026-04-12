#pragma once
#include <string>

class City {
public:
    std::string name;
    double lat;
    double lon;

    City(const std::string& _name, double _lat, double _lon)
        : name(_name), lat(_lat), lon(_lon)
    {
    }
};
