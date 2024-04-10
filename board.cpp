#include "board.h"
using std::vector;

using std::cout;
using std::endl;


#define ROWS 10
#define COLS 10

const vector<vector<Cell>> Board::BOARD_1 =
{
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { BLOCKED, BLOCKED, BLOCKED, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY }
};

const vector<vector<Cell>> Board::BOARD_2 =
{
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY, BLOCKED, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLOCKED, EMPTY },
    { EMPTY, BLOCKED, BLOCKED, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY },
    { EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY }
};

Board::Board()
{ 
    // // TODO
    Board::BOARD_1[ROWS][COLS];
    Board::BOARD_2[ROWS][COLS];

}

Board::~Board()
{
    // TODO
    cout << "deleting from memory" << endl;
    delete board;
}

void Board::load(int boardId)
{
    // TODO
    if (boardId == 1) {
        std::cout << "|" << " " << "|";
            for (int col = 0; col < COLS; col++) {
                std::cout << "" << col << "|";
            }
            std::cout << std::endl;

        for (int y = 0; y < ROWS; y++) {
            std::cout << "|" << y << "|";
            for (int x = 0; x < COLS; x++) {
                if (Board::BOARD_1[y][x] == 1) {
                    std::cout << "*|";
                }
                if (Board::BOARD_1[y][x] == 0) {
                    std::cout << " |";
                }
            }
            std::cout << std::endl;
        }
    } else if (boardId == 2) {
        std::cout << "|" << " " << "|";
            for (int col = 0; col < COLS; col++) {
                std::cout << "" << col << "|";
            }
            std::cout << std::endl;

        for (int y = 0; y < ROWS; y++) {
            std::cout << "|" << y << "|";
            for (int x = 0; x < COLS; x++) {
                if (Board::BOARD_2[y][x] == 1) {
                    std::cout << "*|";
                }
                if (Board::BOARD_2[y][x] == 0) {
                    std::cout << " |";
                }
            }
            std::cout << std::endl;
        }
    }
    else {
        Helper::printInvalidInput();
    }
}

bool Board::placePlayer(Position position)
{
    // TODO
    return false; // feel free to revise this line, depending on your implementation.
}

PlayerMove Board::movePlayerForward(Player* player)
{
    // TODO
    return PLAYER_MOVED;
}

void Board::display(Player* player)
{
    // TODO
}


