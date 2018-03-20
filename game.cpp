#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int random_coordinate_X()
{
  int x = rand() % 11;
  return x;
}
int random_coordinate_Y()
{
  int y = rand() % 5;
  return y;
}

int main()
{
  int path_score = 0;
  int basic_score = 0;
  int blue_bird_x, blue_bird_y;
  int red_bird_x, red_bird_y;
  int white_bird_x, white_bird_y;
  cout << "Welcome to the game FIND A WHITE BIRD. Here are the rules of the game."
  <<"You are a hunter BLUE BIRD.You need to find the hidden WHITE BIRDS inputing x(in range from 0 to 10)"
  <<" and y(from 0 to 4) coordinates. If you are lucky you earn 50 points, if not we have a bonus for you! 10 points!"
  <<" But disaster! If you meet RED BIRD, you will loose 100 poins and the game. Now... Good luck!!!" << endl << endl;
  do {
    cout << "Pls input BLUE BIRD'S x and y coordinates:   x:  ";
    cin >> blue_bird_x;
    while(cin.fail()) {
       cout << "Wrong input. Try again." << std::endl;
       cin.clear();
       cin.ignore(256,'\n');
       cout << "x:";
       cin >> blue_bird_x;
    }
    cout << "y:  ";
    cin >> blue_bird_y;
    while(std::cin.fail()) {
       std::cout << "Wrong input. Try again." << std::endl;
       std::cin.clear();
       std::cin.ignore(256,'\n');
       std::cin >> blue_bird_y;
    }
    cout << endl;
    red_bird_x = random_coordinate_X();
    red_bird_y = random_coordinate_Y();
    white_bird_x = random_coordinate_X();
    white_bird_y = random_coordinate_Y();
    path_score += 10;
    if(blue_bird_x == white_bird_x && blue_bird_y == white_bird_y)
    {
      cout << "Bravissimo! White Bird ^_^  ~ +50 ~";
      basic_score += 50;
    }
    if(blue_bird_x == red_bird_x && blue_bird_y == red_bird_y)
    {
      cout << "-100 :(" << endl;
      cout << "Oops! Red bird -_-" << endl << "Your game is over and your FINAL SCORE is " << path_score + basic_score - 100;
      break;
    }
    cout << "Don't surrender. Try again! Find a WHITE BIRD and earn 50 points!" << endl;
  }
  while(true);

  return 0;
}
