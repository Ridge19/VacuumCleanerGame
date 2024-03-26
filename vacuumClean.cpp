#include "game.h"
#include "helper.h"
#include "player.h"
#include "board.h"

#include <iostream>


using std::string;
using std::cout;
using std::endl;
using std::cin;


void showStudentInformation(string name, string id, string email){
    // TODO
    cout << "------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Student ID: " << id << endl;
    cout << "Email: " << email << endl;
    cout << "------------------------\n" << endl;
}

void mainMenu();

void game();

void gameMenu();

void Quit();

int main() {
    /**
     * TODO: here's the main function. You can write the "main menu" loop/code
     * here or you can make separate functions - up to you.
     */
    while (true) {
        mainMenu();

        Board board;
        std::string userInput; //for main Menu (vacuum cleaner menu)
        std::string gameInput; //for game menu (load board menu)
        userInput = Helper::readInput();

        if (userInput == "1") {
            gameMenu();
            cout << "Enter option: " << endl;
            gameInput = Helper::readInput();
            if (gameInput == "load 1" || gameInput == "1") {
                cout << "loading board 1" << endl;
                board.load(1);
                gameMenu();
                // IMPLEMENT REST OF GAME FUNCTION FOR BOARD 1 HERE 
            } else if (gameInput == "load 2" || gameInput == "2") {
                cout << "loading board 2" << endl;
                board.load(2);
                gameMenu();
                // IMPLEMENT REST OF GAME FUNCTION FOR BOARD 2 HERE 
            } else if (gameInput == "quit" || gameInput == "Quit") {
                cout << "going back to main menu" << endl;
            } else {
                Helper::printInvalidInput(); //prints invalid output by calling helper class 
            }
        } else if (userInput == "2") {
            showStudentInformation("Ridge Tagala", "s3934367", "s3934367@student.rmit.edu.au");

        } else if (userInput == "3") {
            Quit();
            return EXIT_SUCCESS;
        } else {
            Helper::printInvalidInput();
        }
    }
} 

void mainMenu() { //userInput 
    cout << "\nWelcome to the Vaccum Cleaning Game!" << endl;
    cout << "------------------------" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Show Student Information" << endl;
    cout << "3. Quit" << endl;

    cout << "Please enter your choice: ";
    cout << endl;
}

void gameMenu() { //gameInput
    cout << "You can use the following commands to play the game: \n" << endl;
    cout << "load <g>" << endl;
    cout << "\t" << "g: number of the game board to load" << endl;
    cout << "init <x>,<y>,<direction>" << endl;
    cout << "\tx: horizontal position of the vacuum cleaner in the room (between 0 and 9)" << endl;
    cout << "\ty: veritcal position of the vacuum cleaner in the room (between 0 and 9)" << endl;
    cout << "\tdirection: direction of the vacuum cleaner's movement (north, east, south, west)" << endl;
    cout << "forward (or f)" << endl;
    cout << "turn_left (or l)" << endl;
    cout << "turn_right (or r)" << endl;
    cout << "quit" << endl; 
}

void Quit() {
    cout << "Good bye!\n\n";

}

