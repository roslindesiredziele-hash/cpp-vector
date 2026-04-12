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
