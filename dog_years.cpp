#include <iostream>

int main() 
{
  int dog_age=6; //dog_age should be greater than 2 years.
  int early_years = 21; // first 2 years of dog count to 21.
  int later_years = (dog_age - 2)* 4; //subsequent years account for 4 human years.
  int human_years = early_years + later_years;//total years is sum of both.
  std::cout<<"My name is Dog! Ruff ruff, I am "<< human_years << " years old in human years.";
  
  return 0;
    
}
