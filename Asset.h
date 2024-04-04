#ifndef Asset_H
#define Asset_H

#include <string>



class Asset {
private:
    std::string product type;
    int value;

public:
    Asset();
    Asset(std::string product type, int value);

    std::string get_product_type();
    int get_value();
};

#endif

