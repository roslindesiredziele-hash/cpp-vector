#include <cassert>
#include "CitiesDistance.h"
#include <fstream>

int main() {
    // Test 1: City stores fields
    City c("test", 10.0, 20.0);
    assert(c.name == "test");
    assert(c.lat == 10.0);
    assert(c.lon == 20.0);

    // Test 2: distance() works
    City a("A", 0, 0);
    City b("B", 3, 4);
    assert(distance(a, b) == 5.0);

    {
        // Test 3: loading cities from a file
        std::ofstream f("test_cities.txt");
        f << "alpha 1 2\n";
        f << "beta 3 4\n";
        f.close();

        auto cities = loadCities("test_cities.txt");

        assert(cities.size() == 2);
        assert(cities[0].name == "alpha");
        assert(cities[0].lat == 1);
        assert(cities[0].lon == 2);

        assert(cities[1].name == "beta");
        assert(cities[1].lat == 3);
        assert(cities[1].lon == 4);
    }

    {
        // Test 4: findClosest() finds the nearest pair
        std::vector<City> cities = {
            City("A", 0, 0),
            City("B", 3, 4),   // distance 5
            City("C", 1, 1)    // distance sqrt(2) from A
        };

        CityPair result = findClosest(cities);

        assert((result.a.name == "A" && result.b.name == "C") ||
            (result.a.name == "C" && result.b.name == "A"));

        assert(result.distance == std::sqrt(2.0));
    }



    return 0;
}
