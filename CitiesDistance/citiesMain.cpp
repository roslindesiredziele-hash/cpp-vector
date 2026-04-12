#include <iostream>
#include <string>
#include "CitiesDistance.h"

int main() {
    std::string filename = "cities10k.txt";

    // Load cities
    auto cities = loadCities(filename);
    if (cities.empty()) {
        std::cerr << "Error: Could not load cities from " << filename << "\n";
        return 1;
    }

    // Compute closest and farthest pairs
    CityPair closest = findClosest(cities);
    CityPair farthest = findFarthest(cities);

    // Print results
    std::cout << "Loaded " << cities.size() << " cities from " << filename << "\n\n";

    std::cout << "Closest cities:\n";
    std::cout << "  " << closest.a.name << " <-> " << closest.b.name
        << "  distance = " << closest.distance << "\n\n";

    std::cout << "Farthest cities:\n";
    std::cout << "  " << farthest.a.name << " <-> " << farthest.b.name
        << "  distance = " << farthest.distance << "\n";

    return 0;
}
