//File security.cpp
//Security class implementation
//Carter Mooring
//CPSC 223

#include "security.h"
#include <iostream>
using namespace std;

//update the symbol
Security::Security(std::string the_symbol)
{
  symbol = the_symbol;
}

//get the symbol
std::string Security::get_symbol()
{
  return symbol;
}

//update the share value
void Security::set_share_value(double current_share_value){
  share_value = current_share_value;
}

//get the share value
void Security::get_share_value() const
{
  return share_value;
}

//update the number of holdings
void Security::set_holdings(int number_of_holdings){
  holdings = number_of_holdings;
}

//get the number of holdings
int Security::get_holdings() const
{
  return holdings;
}

//return the market worth
double Security::market_worth() const
{
  return return holdings * share_value;
}
