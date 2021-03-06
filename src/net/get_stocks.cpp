#include <iostream>
#include <string>

#include "data/Industry.hpp"
#include "data/Sector.hpp"
#include "net/yahoo_finance.hpp"

int main(int argc, char * argv[]) {
  using namespace yafic;
  yfContainer<Sector> sectors;
  yfContainer<Industry> industries;
  yahoo_finance::load_industries(sectors, industries);
  yfContainer<Stock> stocks;
  yahoo_finance::load_stocks(industries, stocks);
  std::cout << stocks.size() << " stocks found!" << std::endl;
}
