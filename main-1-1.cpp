

#include <iostream>
#include "Asset.h"

int main() {
    Asset a1;
    std::cout << "product_type: " << a1.get_product_type() << ", value: " << a1.get_value() << std::endl;

    Asset a2("Plane", 3);
    std::cout << "product_type: " << a2.get_product_type() << ", value: " << a2.get_value() << std::endl;

    return 0;
}
