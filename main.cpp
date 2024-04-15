/*
Full name : Julianna Larios
Student ID : 2431409
Chapman email : jlarios@chapman.edu
Assignment: Open Source Assignment for SE320 
*/

//#include "Simulation.h"
#include <iostream>
#include <fstream>
#include "Simulation.h"


using namespace std;

int main(int argc, char* argv[]) {
    // ! Google Test
    // ::testing::InitGoogleTest(&argc, argv);
    // return RUN_ALL_TESTS();

//   // file processing for command line argument
//   if (argc != 2) {
//     std::cerr << "Error opening file: " << argv[0] << " <input.txt>" << std::endl;
//     return 1;
//   }

//   // open file from command line argument
//   std::ifstream file(argv[1]); 

//   // error handling
//     if (!file.is_open()) {
//         std::cerr << "Error: Unable to open file " << argv[1] << std::endl;
//         return 1; // exit with an error code
//     }
string input;

Simulation simulation;

cout << "Hello, let's play Black Jack!" << endl;
cout << "Press '1' to start!" << endl;
cout << "-----------------------------------" << endl;

cin >> input;

if(input == "1"){
    // cout << "Dealer: Here we go!" << endl;
    // cout << "-----------------------------------" << endl;
    simulation.startGame();
    // trigger function in Simulation to start the game
} else if(input != "1"){
    string exit_input;
    cout << "To exit, press 0. To play, press 1!" << endl;
    cout << "-----------------------------------" << endl;
    cin >> exit_input;
    if (exit_input == "0"){
        cout << "See you next time!" << endl;
        cout << "-----------------------------------" << endl;
    } else if(exit_input == "1"){
        simulation.startGame();
        // trigger start function
        

    }}
    
}