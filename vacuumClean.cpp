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
    cout << "------------------------" << endl;
}

void menu();

void game();

void gameMenu();

void Quit();

int main()
{
    while (!cin.eof()) {
        Board board;
        Player *player = new Player();

        int input = 0;

        menu();

        cin >> input;

        if (input == 1) {
            gameMenu();

            string gameInput;

            cout << "enter input: " << endl;
            cin >> gameInput;

            if (gameInput == "load" || gameInput == "Load") {
                cout << "Loading game" << endl;
                board.load(1);
                board.display(player);
            }
            else if (gameInput == "quit" || gameInput == "Quit") {
                gameMenu();
            }
            else {
                cout << "invalid input! try again." << endl;
                menu();
            }
        }
        else if (input == 2) {
            showStudentInformation("Ridge Tagala", "s3934367", "s3934367@student.rmit.edu.au");
        }
        else if (input == 3) {
            Quit();
            return EXIT_SUCCESS;
        }
        else {
            cout << "error - not a valid input" << endl;
            cout << "program will now terminate" << endl;
            Quit();
        }
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

    cout << "Please enter your choice: " << endl;
}

void gameMenu() {
    cout << endl;
    cout << "Game is a work in progress. " << endl;
    cout << endl;

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
    cout << "good bye!\n" << endl;
}






