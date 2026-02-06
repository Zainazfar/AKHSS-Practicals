#include <iostream>
using namespace std;

int main() 
{
  int age, game_score; 
  cout << "Enter your age: " << endl;
  cin >> age;
  cout << "Enter your Game Score: " << endl;
  cin >> game_score;
    if (age < 13){
      cout << "Access Denied"<< endl; 
    }

    else if (game_score >= 90){
      cout << "Welcome to Elite Rank" << endl; 
    }
    
    else if (game_score >= 80){
      cout << "Welcome to World Class Rank" << endl; 
    }
    
    else if (game_score >= 70){
      cout << "Welcome to Pro Rank" << endl; 
    }
    
    else if (game_score >= 40){
      cout << "Welcome to Casual Rank" << endl; 
    }
    
    if else {
      cout << "Welcome to Beginner Rank" << endl;
    }
    
  return 0; 
}