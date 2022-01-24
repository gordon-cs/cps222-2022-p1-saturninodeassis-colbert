#include <iostream>
#include <stdio.h>
#include "board.h"
#include "cell.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

static const char ESC = 27;

/*
short Board::aliveOrganisms() { // TODO later: make this function recursive maybe
    short aliveOrganisms = 0;
    for (short i = 0; i < boardWidth; i++) {
        for (short j = 0; j < boardHeight; j++) {
            aliveOrganisms += theBoard[i][j].getState() == Cell::LIVING? 1: 0;
        }
    }
    return aliveOrganisms;
}
 */

Board* Board::getInstance() {
    if (theBoard == nullptr) {
        new Board;
    }
    return theBoard;
}

Board::Board() {
    theBoard = this;
}


/**
    Generate board function
 
    The function that builds a frame and generates a new board
 
    Parameters:
    int newBoard - a two dimensional array of cell objects that contain the new generation's organism positions
 */

/*
void Board::generateBoard(Board newBoard) {
    
    //top border
    cout << "+";
    for (int i = 0; i < boardWidth; i++) {
        cout << "-";
    }
    cout << "+\n";
    
    // left/right borders and organisms
    for (int row = 0; row < boardHeight; row++) {
        cout << "|";
        for (int col = 0; col < boardWidth; col++) {
            if(newBoard[row][col].)
        }
        cout << "|\n";
    }
    
    //bottom border
    cout << "+";
    for (int i = 0; i < boardWidth; i++) {
        cout << "-";
    }
    cout << "+\n";
    
    
    //This code block allows the animation to be shown frame by frame
    //pressing the return key shows the next frame
    if (frameByFrame) {
        cout << ESC << "[23;1H" << ESC << "[K" << "Press RETURN to continue";
        while (cin.get() != '\n') { };
    }
    
}
 */

/**
    Main function
 
    The function that executes the main program
 */

int main(){
    int numOfOrganisms, numOfGenerations;
    string locations;
    
    cout << "How many organisms initially? ";
    cin >> numOfOrganisms;
    
    cout << "Locations? ";
    cin >> locations;
    
    cout << "Generations? ";
    cin >> numOfGenerations;
    
    while (cin.get() != '\n') { }  // see implementation notes #4

    for (int i = 1; i <= numOfGenerations; i++) {

        cout << ESC << "[H" << ESC << "[J" << "Initial:" << endl;
        cout << ESC << "[H" << "Generation: " << i << " of " << numOfGenerations << endl;
        
        //Broken:
        //Board->getInstance()->generateBoard(locations);  //<-----------------------------
        //temporary call of generateBoard.
        //Should eventually be passed a new two dimensional array
        //of organism locations generated by another function
            
    }
}
