#include <iostream>

int main() {
	int gryffindor=0,hufflepuff=0,ravenclaw=0,slytherin=0;
  int answer1,answer2,answer3,answer4;
  std::cout<<"The Sorting Hat Quiz!";
  std::cout<<"Q1) When I'm dead, I want people to remember me as:  1) The Good 2) The Great 3) The Wise 4) The Bold\n";
    
  std::cin>>answer1; 
  if(answer1 == 1){gryffindor++;}
  else if(answer1 == 2){hufflepuff++;}
  else if(answer1 == 3){ravenclaw++;}
  else if(answer1 == 4){slytherin++;}
  else{std::cout<<"Invalid input";}
  // The magic starts here
std::cout<<"Q2) Dawn or Dusk?  1) Dawn   2) Dusk\n";
std::cin>>answer2; 
  if(answer2 == 1){
    	gryffindor++;
      ravenclaw++;
   }
  else if(answer2 == 2){
    hufflepuff++;
  	slytherin++;
  }
  else{std::cout<<"Invalid input";}
  // The magic starts here
std::cout<<"Q3) Which kind of instrument most pleases your ear  1) The violin  2) The trumpet 3) The piano 4) The drum\n";
std::cin>>answer3; 
  if(answer3 == 1){slytherin++;}
  else if(answer3 == 2){hufflepuff++;}
  else if(answer3 == 3){ravenclaw++;}
  else if(answer3 == 4){gryffindor++;}
  else{std::cout<<"Invalid input";}
  // The magic starts here
std::cout<<"Q4) Which road tempts you most? 1) The wide, sunny grassy lane 2) The narrow, dark, lantern-lit alley  3) The twisting, leaf-strewn path through woods 4) The cobbled street lined (ancient buildings)\n";
std::cin>>answer4; 
  if(answer4 == 1){hufflepuff++;}
  else if(answer4 == 2){slytherin++;}
  else if(answer4 == 3){gryffindor++;}
  else if(answer4 == 4){ravenclaw++;}
  else{std::cout<<"Invalid input";}
  // The magic starts here
  int max = 0;
  std::string house="";
  if (gryffindor > max) {

  max = gryffindor;
  house = "Gryffindor";

}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

}

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

}

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

}

std::cout << house << "!\n";
  
}
