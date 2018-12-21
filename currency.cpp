#include <iostream>

int main() 
{
  double p,q,c,dollars=0;
  
  std::cout<<"Enter number of Mexican Pesos:";
  std::cin>>p;
  std::cout<<"Enter number of Guatemalan Quetzals:";
  std::cin>>q;
  std::cout<<"Enter number of Salvadoran Colóns:";
  std::cin>>c;
  dollars+= p*0.05 + q*0.13 + c*0.0017;
  
  std::cout<<"US Dollars = $"<<dollars<<"\n";

  return 0;
}
