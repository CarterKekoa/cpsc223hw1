//File stock.cpp
//Stock class implementation
//Carter Mooring
//CPSC 223

#include "stock.h"
#include <iostream>
using namespace std;

//the symbol for the stock
Stock::Stock(std::string the_symbol)
{
}

//update the purchase price
void Stock::set_purchase_price(double the_purchase_price)
{
  purchase_price = the_purchase_price;
}

//get the purchase price
double Stock::get_purchase_price() const
{
  return purchase_price;
}

//compute the sell value
double Stock::sell_value() const
{
}
