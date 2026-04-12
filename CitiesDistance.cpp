#include "CitiesDistance.h"
#include <cmath>

double distance(City& a, City& b) {
    double dlat = b.lat - a.lat;
    double dlon = b.lon - a.lon;
    return std::sqrt(dlat * dlat + dlon * dlon);
}
