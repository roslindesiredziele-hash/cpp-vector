#include "CitiesDistance.h"
#include <cmath>
#include <fstream>
#include <vector>

double distance(City& a, City& b)
{
    double dlat = b.lat - a.lat;
    double dlon = b.lon - a.lon;
    return std::sqrt(dlat * dlat + dlon * dlon);
}


std::vector<City> loadCities(const std::string& filename)
{
    std::vector<City> result;
    std::ifstream f(filename);

    std::string name;
    double lat, lon;

    while (f >> name >> lat >> lon) {
        result.emplace_back(name, lat, lon);
    }

    return result;
}

CityPair findClosest(const std::vector<City>& cities) {
    double best = 1e18;
    City A("", 0, 0), B("", 0, 0);

    for (size_t i = 0; i < cities.size(); ++i) {
        for (size_t j = i + 1; j < cities.size(); ++j) {
            double d = distance((City&)cities[i], (City&)cities[j]);
            if (d < best) {
                best = d;
                A = cities[i];
                B = cities[j];
            }
        }
    }

    return { A, B, best };
}

CityPair findFarthest(const std::vector<City>& cities) {
    double best = -1.0;
    City A("", 0, 0), B("", 0, 0);

    for (size_t i = 0; i < cities.size(); ++i) {
        for (size_t j = i + 1; j < cities.size(); ++j) {
            double d = distance((City&)cities[i], (City&)cities[j]);
            if (d > best) {
                best = d;
                A = cities[i];
                B = cities[j];
            }
        }
    }

    return { A, B, best };
}
