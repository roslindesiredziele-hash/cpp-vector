#include <cassert>
#include "CitiesDistance.h"

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

    return 0;
}
