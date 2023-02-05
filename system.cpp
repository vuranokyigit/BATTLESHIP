//You must the enter 2 numbers between 0-3
//Your entry just like 1 and 2 lika that for an arrays

#include <iostream>

using namespace std;

main()
{

bool hittenShips[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int shootTheShips = 0;
int numOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (shootTheShips < 4) {
  int row, column;

  cout << "Selecting coordinates\n";

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;

  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (hittenShips[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    hittenShips[row][column] = 0;

    // Increase the hit counter
    shootTheShips++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit!! " << (4-shootTheShips) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss??\n\n";
  }

  // Count how many turns the player has taken
  numOfTurns++;
}

cout << "Congratss!\n";
cout << "You won in " << numOfTurns << " times";
}
