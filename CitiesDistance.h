#pragma once
#include <string>
#include <vector>

class City {
public:
    std::string name;
    double lat;
    double lon;

    City(const std::string& _name, double _lat, double _lon)
        : name(_name), lat(_lat), lon(_lon) {
    }
};

double distance(City& a, City& b);

struct CityPair {
    City a;
    City b;
    double distance;
};

CityPair findClosest(const std::vector<City>& cities);
CityPair findFarthest(const std::vector<City>& cities);


std::vector<City> loadCities(const std::string& filename);