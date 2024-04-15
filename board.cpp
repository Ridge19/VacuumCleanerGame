#include "board.h"
#include "game.h"
#include "player.h"
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

    std::cout << "|" << " " << "|";
    for (int col = 0; col < COLS; col++) {
        std::cout << "" << col << "|";
    }
    std::cout << std::endl;

    for (int y = 0; y < ROWS; y++) {
        std::cout << "|" << y << "|";
        for (int x = 0; x < COLS; x++) {
            std::cout << "" << " " << "|";
        }
        std::cout << std::endl;
    }
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
    if (position.x >= 0 && position.x < COLS && position.y >= 0 && position.y < ROWS) {
        if (Board::BOARD_1[position.y][position.x] == BLOCKED) {
            cout << "cell blocked! cannot place player" << endl;
            return false;
        } else {
            Player* player = new Player();
            player->position.x = position.x;
            player->position.y = position.y;
            cout << "Player placed in coordinates " << position.x << ", " << position.y << endl;
            Board::display(player);
            return true;
        }
    } else {
        cout << "Error - invalid coordinates" << endl;
        return false;
    }



    // TODO
    // return false; // feel free to revise this line, depending on your implementation.
}

PlayerMove Board::movePlayerForward(Player* player)
{
    // TODO
    return PLAYER_MOVED;
}

void Board::display(Player* player) {

    // TODO
    if (player == nullptr) {
        return;
    }
    std::cout << "|" << " " << "|";
    for (int col = 0; col < COLS; col++) {
        std::cout << "" << col << "|";
    }
    std::cout << std::endl;

    for (int y = 0; y < ROWS; y++) {
        std::cout << "|" << y << "|";
        for (int x = 0; x < COLS; x++) {
            if (player->position.x == x && player->position.y == y) {
                cout << "@|";
            }
            if (Board::BOARD_1[y][x] == 1) {
                std::cout << "*|";
            }
            if (Board::BOARD_1[y][x] == 0) {
                std::cout << " |";
            }
        }
        std::cout << std::endl;
    }
    
//     for (int y = 0; y < ROWS; y++) {
//         for (int x = 0; x < COLS; x++) {
//             // Check if current player coordinates match current board position
//             if (player->position.x == x && player->position.y == y) {
//             cout << PLAYER;
//         } else {
//             // Display the existing board element
//             cout << Board::BOARD_1[y][x];
//         }
//     }
//     cout << endl;  // Add newline after each row
//   }

    cout << PLAYER << " is at: " << player->position.x << ", " << player->position.y << endl;
}







    // if (player != nullptr && player->position.x && player->position.y != BLOCKED) {
    // //     int playerX = player->position.x;
    // //     int playerY = player->position.y;
    // }


