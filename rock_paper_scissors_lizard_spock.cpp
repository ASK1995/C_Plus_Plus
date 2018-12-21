/* 
A program to play the rock paper scissors lizard spock game
popularized by the famous TV show The Big Bang Theory"
*/
#include <iostream>
#include <stdlib.h>

int main() {

  // Long live and prosper
srand (time(NULL));

int computer = rand() % 5 + 1;

int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) Lizard\n";
std::cout << "5) Spock\n";
  
std::cout << "shoot! ";
std::cin>>user;

if(user == 1){
std::cout<<"User choose ✊";
 }
else if(user == 2){
std::cout<<"User choose ✋";
 }
else if(user == 3){
std::cout<<"User choose ✌️";
 }
else if(user == 4){
std::cout<<"User choose Lizard";
 }
else if(user == 5){
std::cout<<"User choose Spock";
 }
  
std::cout<<"\n";

if(computer == 1){
std::cout<<"Computer choose ✊";
 }
else if(computer == 2){
std::cout<<"Computer choose ✋";
 }
else if(computer == 3){
std::cout<<"Computer choose ✌️";
 }
else if(computer == 4){
std::cout<<"Computer choose Lizard";
 }
else if(computer == 5){
std::cout<<"Computer choose Spock";
 }
  
std::cout<<"\n";
  
if(user == computer){std::cout<<"It's a tie!\n";}  
else if(user == 1){
  if(computer == 2){std::cout<<"Computer wins\n";}
  else if(computer == 3){std::cout<<"You win\n";}
  else if(computer == 4){std::cout<<"You win\n";}
  else if(computer == 5){std::cout<<"Computer wins\n";}
  
}
else if(user == 2){
  if(computer == 1){std::cout<<"You win\n";}
  else if(computer == 3){std::cout<<"Computer wins\n";}
	else if(computer == 4){std::cout<<"Computer wins\n";}
  else if(computer == 5){std::cout<<"You win\n";}
  
}
else if(user == 3){
  if(computer == 1){std::cout<<"Computer wins\n";}
  else if(computer == 2){std::cout<<"You win\n";}
	else if(computer == 4){std::cout<<"You win\n";}
  else if(computer == 5){std::cout<<"Computer wins\n";}
  
}
else if(user == 4){
  if(computer == 1){std::cout<<"Computer wins\n";}
  else if(computer == 2){std::cout<<"You win\n";}
	else if(computer == 3){std::cout<<"Computer wins\n";}
  else if(computer == 5){std::cout<<"You win\n";}
  
}
else if(user == 5){
  if(computer == 1){std::cout<<"You win\n";}
  else if(computer == 2){std::cout<<"Computer wins\n";}
	else if(computer == 3){std::cout<<"You win\n";}
  else if(computer == 4){std::cout<<"Computer wins\n";}
  
}
else{
  std::cout<<"Invalid Option chosen error\n";
}  

  
}
