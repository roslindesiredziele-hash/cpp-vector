#include <cassert>
#include "CitiesDistance.h"

int main() {
    City c("test", 10.0, 20.0);

    assert(c.name == "test");
    assert(c.lat == 10.0);
    assert(c.lon == 20.0);

    return 0;
}
