#include <iostream>
#include <cstdlib>
#include <ctime>

char board [3][3] = {{' ',' ',' '},
                     {' ',' ',' '},
                     {' ',' ',' '}};
bool chooseAgain = false;

void printboard(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "[" << board[i][j] << "]";
        }
        std::cout << "\n";
    }

    int place = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "[" << place << "]";
            place++;
        }
        std::cout << "\n";
    }
}

void bImput(int player,int num){
    chooseAgain = false;
    int doneNum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(board[i][j] == ' '){
                doneNum++;
            }
        }
    }
    if(doneNum > 0){
        if (num == 1){
            if (board[0][0] == ' '){
                if(player == 1){
                    board[0][0] = 'O';
                }
                else
                    board[0][0] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 2){
            if (board[0][1] == ' '){
                if(player == 1){
                    board[0][1] = 'O';
                }
                else
                    board[0][1] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 3){
            if (board[0][2] == ' '){
                if(player == 1){
                    board[0][2] = 'O';
                }
                else
                    board[0][2] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 4){
            if (board[1][0] == ' '){
                if(player == 1){
                    board[1][0] = 'O';
                }
                else
                    board[1][0] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 5){
            if (board[1][1] == ' '){
                if(player == 1){
                    board[1][1] = 'O';
                }
                else
                    board[1][1] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 6){
            if (board[1][2] == ' '){
                if(player == 1){
                    board[1][2] = 'O';
                }
                else
                    board[1][2] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 7){
            if (board[2][0] == ' '){
                if(player == 1){
                    board[2][0] = 'O';
                }
                else
                    board[2][0] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 8){
            if (board[2][1] == ' '){
                if(player == 1){
                    board[2][1] = 'O';
                }
                else
                    board[2][1] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else if (num == 9){
            if (board[2][2] == ' '){
                if(player == 1){
                    board[2][2] = 'O';
                }
                else
                    board[2][2] = 'X';
            }
            else
            {
                if(player == 1){
                    board[0][0] = 'O';
                    std::cout << "That position has already been chosen" << std::endl;
                }
                else
                    board[0][0] = 'X';
                chooseAgain = true;
            }
        }
        else{
            std::cout << "Chosen number is not in between 1-9" << std::endl;
        }
    }
}

bool checkWinner(){
    int fullboard = 0;

    if (board[0][0] != ' '){
        if(board[0][1] == board[0][0]){
            if(board[0][2] == board[0][0]){
                if(board[0][0] == 'X'){
                    std::cout << "The computer has won!" << std::endl;
                    printboard();
                    return true;
                }
                else{
                    std::cout << "You have won!" << std::endl;
                    printboard();
                    return true;
                }
            }
        }
        else if(board[1][1] == board[0][0]){
                if(board[2][2] == board[0][0]){
                    if(board[0][0] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
                }
            }
        else if(board[1][0] == board[0][0]){
                if(board[2][0] == board[0][0]){
                    if(board[0][0] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
                }
            }
        
    }
    else if(board[0][1] != ' '){
        if(board[1][1] == board[0][1]){
            if(board[2][1] == board[0][1]){
                if(board[0][1] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
            }
        }
    }
    else if(board[0][2] != ' '){
        if(board[1][2] == board[0][2]){
            if(board[2][2] == board[0][2]){
                if(board[0][2] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
            }
        }
        if(board[1][1] == board[0][2]){
            if(board[2][0] == board[0][2]){
                if(board[0][2] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
            }
        }
    }
    else if (board[1][0] != ' '){
        if(board[1][1] == board[1][0]){
            if(board[1][2] == board[1][0]){
                if(board[1][0] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
            }
        }
    }
    else if(board[2][0] != ' '){
        if(board[2][1] == board[2][0]){
            if(board[2][2] == board[2][0]){
                if(board[2][0] == 'X'){
                        std::cout << "The computer has won!" << std::endl;
                        printboard();
                        return true;
                    }
                    else{
                        std::cout << "You have won!" << std::endl;
                        printboard();
                        return true;
                    }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(board[i][j] == ' '){
                fullboard++;
            }
        }
    }

    if(fullboard == 0){
        printboard();
        std::cout << "There are no more spaces, it's a tie!" << std::endl;
        return true;
    }

    printboard();
    return false;
}

int main(){
    std::string decision = "";
    std::srand(std::time(nullptr));
    int num1 = 0;
    int num2 = 0;

    printboard();

    std::cout << "Choose who goes first: 1 (you) or 2 (computer):" << std::endl;
    std::cin >> decision;
    if (stoi(decision) == 1)
    {
        while(checkWinner() == false)
        {
            std::cout << "Choose where to put the O: " << std::endl;
            std::cin >> decision;
            num1 = stoi(decision);
            bImput(1,stoi(decision));
            while(chooseAgain == true)
            {
                std::cout << "Choose where to put the O: " << std::endl;
                std::cin >> decision;
                num1 = stoi(decision);
                bImput(1,stoi(decision));
            }

            bImput(2,std::rand() % 9 + 1);
            while(chooseAgain == true)
            {
                bImput(2,std::rand() % 9 + 1);
            }
        }
    }
    else if (stoi(decision) == 2)
    {
        bImput(2,std::rand() % 9 + 1);

        while(checkWinner() == false)
        {   
            std::cout << "Choose where to put the O: " << std::endl;
            std::cin >> decision;
            num1 = stoi(decision);
            bImput(1,stoi(decision));
            while(chooseAgain == true)
            {
                std::cout << "Choose where to put the O: " << std::endl;
                std::cin >> decision;
                num1 = stoi(decision);
                bImput(1,stoi(decision));
            }
            bImput(2,std::rand() % 9 + 1);
            while(chooseAgain == true)
            {
                bImput(2,std::rand() % 9 + 1);
            }
        }
    }
    else{
        std::cout << "Error: User didn't enter 1 or 2" << std::endl;
        return 1;
    }
    
    return 0;
}
