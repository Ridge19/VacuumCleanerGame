#include "game.h"
#include "helper.h"

using std::string;
using std::cout; 
using std::endl;
using std::cin;

void showStudentInformation(string name, string id, string email){
    cout << "------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Student ID: " << id << endl;
    cout << "Email: " << email << endl;
    cout << "------------------------\n" << endl;
}

void menu();

void game();

void gameMenu();


void Quit();

int main()
{
    menu();
    std::string userInput;

    userInput = Helper::readInput();

    if (userInput == "1") {
        gameMenu();
        
    } else if (userInput == "2") {
        showStudentInformation("Ridge Tagala", "s3934367", "s3934367@student.rmit.edu.au");
    } else if (userInput ==  "3") {
        Quit();
    }
    /**
     * TODO: here's the main function. You can write the "main menu" loop/code
     * here or you can make separate functions - up to you.
     */
}

void menu() {
    cout << "\nWelcome to the Vaccum Cleaning Game!" << endl;
    cout << "------------------------" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Show Student Information" << endl;
    cout << "3. Quit" << endl;

    cout << "Please enter your choice: ";
    cout << endl; 
}

void gameMenu() {
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

    std::string gameInput; 

    cout << "Enter option: " << endl;
    gameInput = Helper::readInput();

    

}

void Quit() {
    cout << "good bye!\n" << endl;
}






