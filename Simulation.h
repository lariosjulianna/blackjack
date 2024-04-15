/*
Full name : Julianna Larios
Student ID : 2431409
Chapman email : jlarios@chapman.edu
Assignment: Open Source Assignment for SE320
*/

#ifndef Simulation_H
#define Simulation_H

#include <iostream>


class Simulation{
public: 
 Simulation();
    ~Simulation();
void startGame();
bool isGameInPlay();
void deal();
void hit(int dealerTotal, int playerTotal);
void hold(int dealerTotal, int playerTotal);
void calcWinner(int dealerTotal, int playerTotal);
// bool gameInProgress();
// functions public
  
private:
  // private functionns
  bool gameInPlay;
 
};

#endif 
//SIMULATION_H