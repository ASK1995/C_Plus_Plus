#include <iostream>
#include <cmath>

int main() {
  double a,b,c,root1,root2;
  
  std::cout<<"Enter a:";
  std::cin>>a;
  
  std::cout<<"Enter b:";
  std::cin>>b;
  
  std::cout<<"Enter c:";
  std::cin>>c;
  
  root1 = (-b + sqrt(b*b - 4*a*c) )/ (2*a) ;
  root2 = (-b - sqrt(b*b - 4*a*c) )/ (2*a) ;
  
  std::cout<<"The roots of the given equation "<<a<<"x2+"<<b<<"x+"<<c<<"are "<<root1<<" and "<<root2;
  
  return 0;
  
}
