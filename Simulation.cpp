/*
Full name : Julianna Larios
Student ID : 2431409
Chapman email : jlarios@chapman.edu
Assignment: Open Source Assignment for SE320 
*/
#include <iostream>
#include <cstdlib> 
#include "Simulation.h"


Simulation::Simulation(){
  std::string name = "";
  // m_conn = NULL;
}

Simulation::~Simulation(){
// 
}

// void Simulation::dealFirstCards(){
// //  
// }

// void Deal::dealHit(){
// //   
// }

bool gameInPlay;

// ? Function that starts the game/changes the boolean/gives instructions/triggers the card dealing
void Simulation::startGame(){
  // input from user about instructions prompt
std::string i_in;
  // second input from user about instruction prompt
std::string i_in2;

std::cout << "Dealer: Welcome to Black Jack, do you know how to play?" << std::endl;
std::cout << "Press 1 if you do, 0 if you need instructions." << std::endl;
std::cin >> i_in;
std::cout << "-----------------------------------" << std::endl;


if (i_in == "1"){
  deal();
    // deal cards function
     gameInPlay = true;
} else if (i_in == "0"){
    gameInPlay = false;
    std::cout << "Players play against the Dealer. Both will begin with two random cards, the Dealer's first card will be face up. After you look at your two cards, you decide if you want to hit (get another card), or hold (keep your current hand). The goal is to get exactly 21, or a higher number than the dealer -- but you can't go OVER 21, or you lose." << std::endl;
    std::cout << "Ready to play? Press 1 to start." << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cin >> i_in2;
    if (i_in2 == "1"){
    std::cout << "Dealer: Here we go!" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
        gameInPlay = true;
        deal();
    } 
}
}

// ? Bool function to see if the game is in play or not
bool Simulation::isGameInPlay(){
return gameInPlay;
}

// deal cards
// will give random two cards to dealer and player
// show player their cards
void Simulation::deal(){
int d1 = rand() % 13 + 1;
int d2 = rand() % 13 + 1;

int dealerTotal = d1 + d2;
// code probability of dealer hitting

int c1 = rand() % 13 + 1;
int c2 = rand() % 13 + 1;
int playerTotal = c1 + c2;
std::cout << "This is your hand: " << std::endl;
std::cout << "Card 1: " << c1 << std::endl;
std::cout << "Card 2: " << c2 << std::endl;
std::cout << "Dealer: Would you like to Hit (press 1) or Hold (press 0)?" << std::endl;

// user input to hit or hold variable
int h_in;
std::cin >> h_in;
if(h_in == 1){
  // hit
  hit(dealerTotal, playerTotal);
}else if(h_in == 0){
  hold(dealerTotal, playerTotal);
}
}

// hit
// another ranomd card dealt to user
void Simulation::hit(int dealerTotal, int playerTotal){
 // std::cout << "test " << std::endl;
    int new_c = rand() % 13 + 1;
    std::cout << "New Card: " << new_c << std::endl;
    std::cout << "Dealer: Would you like to Hit (press 1) or Hold (press 0)?" << std::endl;

    // return new_c;

    int newTotal = playerTotal + new_c;
    
    // std::cout << "New Card: " << new_c << std::endl;
    // std::cout << "Dealer: Would you like to Hit (press 1) or Hold (press 0)?" << std::endl;

    int h2_in;
    std::cin >> h2_in;

    if(h2_in == 1){
      hit(dealerTotal, playerTotal);
    }else if(h2_in == 0){
      calcWinner(dealerTotal, playerTotal);
    }
}

// hold
// user doesnt get another card
void Simulation::hold(int dealerTotal, int playerTotal){
  calcWinner(dealerTotal, playerTotal);
}

// if(gameInPlay == true){
    
// }
// hold
// calcWinner
void Simulation::calcWinner(int dealerTotal, int playerTotal){
   std::cout << "dealer: " << dealerTotal << std::endl;
   std::cout << "player: " << playerTotal << std::endl;
  if(dealerTotal && playerTotal == 21 ){
    // tie
    std::cout << "Tie " << std::endl;
  }else if(dealerTotal || playerTotal > 21){
    // yall lose
    std::cout << "Both lose " << std::endl;
  }else if(playerTotal > dealerTotal){
    // player wins
    std::cout << "Player wins " << std::endl;
  }else{
    // dealer wins!
    std::cout << "Dealer wins " << std::endl;
  }
 // int result = dealerTot;
}

