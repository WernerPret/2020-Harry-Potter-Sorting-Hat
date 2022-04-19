#include <iostream>

int main() {

  int gryffindor = 0;
  int huffelpuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
  std::cout << "\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cin >> answer1;

  if (answer1 == 1){
    std::cout << "One point goes to Huffelpuff.";
    huffelpuff ++;
  }
  else if (answer1 == 2){
    std::cout << "One point goes to Slytherin.";
    slytherin ++;
  }
  else if(answer1 == 3){
    std::cout << "One point goes to Ravenclaw.";
    ravenclaw ++;
  }
  else if(answer1 == 4){
    std::cout << "One point goes to Gryffindor.";
    gryffindor++;
  }
  else{
    std::cout << "MMMM I didn't quite get that....";
  }

  std::cout << "Q2) Dawn or Dusk \n";
  std::cout << "\n";
  std::cout << "  1) Dawn. \n";
  std::cout << "  2) Dusk \n";
  std::cin >> answer2;

  if(answer2 == 1){
    gryffindor++;
    ravenclaw++;
    std::cout << "One point goes to both Ravenclaw and Griffindor! \n";
  }
  else if(answer2 == 2){
    slytherin++;
    huffelpuff++;
    std::cout << "One point goes to both Slytherin, as well as Huffelpuff!\n";
  }
  else{
    std::cout << "MMMM I didn't quite get that....";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
  std::cout << " \n";
  std::cout << "  1) The violin \n";
  std::cout << "  2) The trumpet \n";
  std::cout << "  3) The piano \n";
  std::cout << "  4) The drum \n";
  std::cin >> answer3;

  if (answer3 == 1){
    slytherin ++;
  }
  else if (answer3 == 2){
    huffelpuff ++;
  }
  else if (answer3 == 3){
    ravenclaw++;
  }
  else if (answer3 == 4){
    gryffindor++;
  }
  else{
    std::cout << "MMMM I didn't quite get that.... \n";
  }
  
  std::cout << "Q4) Which road tempts you most? \n";
  std::cout << "   \n";
  std::cout << "  1) The wide, sunny grassy lane. \n";
  std::cout << "  2) The narrow, dark, lantern lit alley. \n";
  std::cout << "  3) The twisting, leaf-strewn path through woods. \n";
  std::cout << "  4) The cobbled, street lines. \n";
  std::cin >> answer4;
  
  if(answer4 == 1){
    huffelpuff++;
  }
  else if(answer4 == 2){
    slytherin++;
  }
  else if(answer4 == 3){
    gryffindor++;
  }
  else if (answer4 == 4){
    ravenclaw++;
  }
  else{
    std::cout << "MMMM I didn't quite get that.... \n";
  }

  int max = 0;
  std::string house;

  if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";

}

  if (huffelpuff > max) {

    max = huffelpuff;
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
  return 0;
}