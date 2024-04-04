#include <iostream>
#include "AssetPortfolio.h"

int main() {
  
  AssetPortfolio portfolio1;
  std::cout << "Portfolio 1 capacity: " << portfolio1.get_num_assets() << std::endl;


  AssetPortfolio portfolio2(3);
  std::cout << "Portfolio 2 capacity: " << portfolio2.get_num_assets() << std::endl;

  
  Asset asset1;

  asset1.set_product_type("some variable");
  if (portfolio2.add_asset(asset1)) {
    std::cout << "Added asset to portfolio 2" << std::endl;
  }

  
  if (portfolio2.has_asset("some variable")) {
    std::cout << "Portfolio 2 contains some variable" << std::endl;
  }

  
  Asset* assets = portfolio2.get_assets();
  

  return 0;
}