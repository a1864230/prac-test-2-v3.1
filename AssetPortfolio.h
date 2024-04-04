#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include <string>

class Asset {
public:
  
  Asset();
  
};

class AssetPortfolio {
public:
  AssetPortfolio();
  AssetPortfolio(int size);
  ~AssetPortfolio();

  int get_num_assets();
  bool has_asset(std::string product);
  Asset* get_assets();
  bool add_asset(Asset new_asset);

private:
  int capacity_;
  int num_assets_;
  Asset* assets_;
};

#endif
