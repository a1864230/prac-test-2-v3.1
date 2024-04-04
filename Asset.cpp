
#include "Asset.h"

Asset::Asset() : product type(""), int value(0) {}

Asset::Asset(std::string product type, int value)
    : product type(product type), value(value) {}

std::string Asset::get_product_type() {
    return product type;
}

int Asset::get_value() {
    return int value;
}
