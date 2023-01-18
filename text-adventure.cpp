# include <iostream>

int main() {

    std::cout <<"***********************************************\n";
    std::cout <<"** WELCOME to the Formula 1 Racing Simulator **\n";
    std::cout <<"***********************************************\n";
    std::cout <<"It's the 2022 F1 Manoco Grad Prix\n\n";
    std::cout <<"With only 5 Laps to go, you are driving for Redbull Racing with your teammate Max Verstappen.\n\n";
    std::cout <<"Lewis Hamilton of the Mercedes Team is in Position 1, your Teammate Max is in Position 2, and you are in Position 3.\n\n";
    std::cout << "Anything can happen at this point - you are just half a second behind your teammate Max, it's time to decide:\n\n";
    std::cout << "Decision 1\n";  
    std::cout << "----------\n";
    std::cout <<"1) Hold your position at P3, back off and let Max go after Lewis for P1.\n\n";
    std::cout <<"2) Over take Max and Lewis at any chance you get and by any means, going against the direction of your team principle.\n\n";
    std::cout <<"3) Make a pit stop for fresh tires, in hopes you get out of the pit lane in time and regain your P3 spot.\n\n";
    std::cout <<"Enter # of your Decision: ";

    int decision_1 = 0;

    std::cin >> decision_1;

    if (decision_1 == 1) {   //Decided to hold tight in P3 and let Max attack Lewis for P1.
        std::cout <<">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        std::cout << "Your teammate Max has forged ahead to P1, passing Lewis after the tunnel on the straight away.\n\n";
        std::cout << "Decision 2\n";
        std::cout << "----------\n";
        std::cout << "1) Forge ahead and attack Lewis for P2.\n";
        std::cout << "2) Hold tight and protect your P3 position.\n";
        std::cout <<"Enter # of your Decision: ";
  
        int decision_2a = 0;
        std::cin >> decision_2a;
      
        if (decision_2a == 1) {
            std::cout <<">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            std::cout <<"#%!!!-CRASH-!!!%# You just hit the wall on turn 1 trying to pass Lewis on the outside.\n";
            std::cout <<"See you at the next Formula 1 Grand Prix.\n";
            return 0;
        }
        else if (decision_2a == 2) {
            std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            std::cout << "!!!VRRRROOOM!!! Good Job, you completed the race passing the checkered flag in P3, collecting 15 points for yourself and the Redbull Racing Team. Good Team Work!!! \n";
            std::cout << "You made it known that your are a force to reckon with at the next F1 Grand Prix.\n";
            return 0;
        }
        else {
            std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            std::cout << "#%!!!-CRASH-!!!%# Your decision was invalid and dangerous, you hit wall.\n\n";
            std::cout << "See you at the next Formula 1 Grand Prix.\n";
            return 0;
        }
     }   

    if (decision_1 == 3) {    // You choose to pit stop for Decision 1
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        std::cout << "You are now exiting out of the pit lane and will be side by side with your teammate Max.\n\n";
        std::cout << "1) Push your car to the limit, and try to pass Max before the next turn.\n\n";
        std::cout << "2) Fall inline behind Max back into the P3 position.\n\n";
        std::cout <<"Enter # of your Decision: ";

        int decision_2b = 0;
        std::cin >> decision_2b;

        if (decision_2b == 1) {
            std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            std::cout << "#%!!!-CRASH-!!!%# Your decision was and dangerous, you hit wall.\n\n";
            std::cout << "See you at the next Formula 1 Grand Prix.\n";
            return 0;
        }
        else if (decision_2b == 2) {
            std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            std::cout << "!!!VRRRROOOM!!! Good Job, you completed the race passing the checkered flag in P3, collecting 15 points for yourself and the Redbull Racing Team. Good Team Work!!! \n";
            std::cout << "You made it known that your are a force to reckon with at the next F1 Grand Prix.\n";
            return 0;
        }
        else {
            std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            std::cout << "#%!!!-CRASH-!!!%# Your decision was invalid and dangerous, you hit wall.\n\n";
            std::cout << "See you at the next Formula 1 Grand Prix.\n";
            return 0;
        }
    }
    else if (decision_1 == 2) {    //Decided to over take from P3 at any change given.
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        std::cout << "You have decided to go on the attack for P2 putting the pressure on your own teammate Max.\n\n";
        std:: cout << "Decision 2\n";
        std::cout << "----------\n";
        std::cout << "1)In the straight away cross the start line try and pass Max on the outside.\n\n";
        std::cout << "2)In turn 3 try and pass Max on the outside.\n\n";
        std::cout << "3)In turn 11 in the chicane try and pass on the Max on the outside\n\n";
        std::cout << "4)After turn 9 through the tunnel make your move and pass on the inside of Max during the straight away.\n\n";
        std::cout <<"Enter # of your Decision: ";
    } 
    else {
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        std::cout << "#%!!!-CRASH-!!!%# Your decision was invalid and dangerous, you hit wall.\n\n";
        std::cout << "See you at the next Formula 1 Grand Prix.\n";
        return 0;
    }

    

  int decision_2c = 0;
  
  for ( int i = 0; i < 6; i++ ) {   //Forced to use "for" loop as codecademy IDE while loop waiting for input causes as infinite loop
      std::cin >> decision_2c;
      if (decision_2c == 4) {
          break;
      }
      else if (i == 5) {
          std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
          std::cout << "#%!!!-CRASH-!!!%#! - Too many dangerous manuvoers, you have hit the wall.\n\n";
          std::cout << "See you at the next Formula 1 Grand Prix.\n";
        return 0;
    }
      else if (decision_2c > 4) {
        std::cout << "NOT an option - BLOCKED!!! by Max - Try another option above: ";
      }
      else {
      std::cout << "BLOCKED!!! by Max - Try another option above: ";
      }
  }
  std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";  
  std::cout << "SUCCESS!!! you have overtaken Max, you are now in P2 behind Lewis.\n\n";
  std::cout << "You are feeling the wear on your tires and your window for a pitstop is gone.\n\n";
  std:: cout << "Decision 3\n";
  std::cout << "----------\n";
  std::cout << "1) Hold your P2 position behind Lewis and try to finish the race.\n\n";
  std::cout << "2) Forge ahead applying pressure on Lewis and make your move to over take him on the stright away right before the checkerd flag.\n\n";
  std::cout <<"Enter # of your Decision: ";

  int decision_3 = 0;
  std::cin >> decision_3;

  if (decision_3 == 1) {
      std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
      std::cout << "!!!VRRRROOOM!!! Good Job, you completed the race passing the checkered flag in P2, collecting 15 points for yourself and the Redbull Racing Team. Good Team Work!!! \n";
      std::cout << "You made it known that your are a force to reckon with at the next F1 Grand Prix.\n";
      return 0;
  }
  else if (decision_3 == 2) {
      std::cout <<">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
      std::cout << "!!!VRRRROOOM!!! Congratulations! You are the WINNER of 2022 F1 Monaco Grid Prix passing the checkered flag in P1, collecting 25 points for yourself and the Redbull Racing Team. Good Team Work!!! \n";
      return 0;
  }
  else {
      std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>\n";
      std::cout << "#%!!!-CRASH-!!!%# Your decision was invalid and dangerous, you hit wall.\n\n";
      std::cout << "See you at the next Formula 1 Grand Prix.\n";
      return 0;
  }
}









