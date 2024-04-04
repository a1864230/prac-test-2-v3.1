
#include "AssetPortfolio.h"

#include <iostream>

AssetPortfolio::AssetPortfolio() : capacity_(0), num_assets_(0), assets_(nullptr) {}

AssetPortfolio::AssetPortfolio(int size) : capacity_(size), num_assets_(0) {
  assets_ = new Asset[size];
}

AssetPortfolio::~AssetPortfolio() {
  delete[] assets_;
}

int AssetPortfolio::get_num_assets() {
  return num_assets_;
}

bool AssetPortfolio::has_asset(std::string product) {
  for (int i = 0; i < num_assets_; ++i) {
    
    if (assets_[i].get_product_type() == product) {
      return true;
    }
  }
  return false;
}

Asset* AssetPortfolio::get_assets() {
  return assets_;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
  if (num_assets_ == capacity_) {
    return false;
  }
  assets_[num_assets_] = new_asset;
  num_assets_++;
  return true;
}