#include <iostream>
#include <stdio.h>

using namespace std;

using namespace std;

static const char ESC = 27; 

static const bool frameByFrame = true;
static const int boardWidth = 50;
static const int boardHeight = 18;

//two dimensional array that holds integers for now but should hold cell class objects
int theBoard[boardWidth][boardHeight];


/**
    Generate board function
 
    The function that builds a frame and generates a new board
 
    Parameters:
    int newBoard - a two dimensional array of cell objects that contain the new generation's organism positions
 */

void generateBoard(string newBoard){
    
    //top border
    cout << "+";
    for(int i = 0; i < boardWidth; i++){
        cout << "-";
    }
    cout << "+\n";
    
    // left/right borders and organisms
    
    for(int row = 0; row < boardHeight; row++){
        cout << "|";
        for(int col = 0; col < boardWidth; col++){
            cout << theBoard[row][col];
        }
        cout << "|\n";
    }
    
    //bottom border
    cout << "+";
    for(int i = 0; i < boardWidth; i++){
        cout << "-";
    }
    cout << "+\n";
    
    
    //This code block allows the animation to be shown frame by frame
    //pressing the return key shows the next frame
    
    if(frameByFrame){
        cout << ESC << "[23;1H" << ESC << "[K"  << "Press RETURN to continue"; 
        while (cin.get() != '\n') { };
    }
    
}

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
}
