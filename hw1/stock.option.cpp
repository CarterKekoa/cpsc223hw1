//File stock.option.cpp
//Stock.option class implementation
//Carter Mooring
//CPSC 223

#include "stock.option.h"
#include <iostream>
using namespace std;

//the stock option symbol
StockOption::StockOption(std::string the_symbol)
{
}

//update the strike price value
void StockOption::set_strike_price(double the_strike_price)
{
  strike_price = the_strike_price;
}

//get the strike price value
double StockOption::get_strike_price() const
{
  return strike_price;
}

//the networth of the sell value
double StockOption::sell_value() const
{
}
