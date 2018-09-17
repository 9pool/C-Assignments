#include <iostream>
using namespace std;

const int STANDARD_DECK_SIZE = 52;
// deck size is identified as a constant.

int main() {

  //Variables
  int numberOfplayers;
  int numberOfhands;
  int leftOvercards;

  cout << "How many players are there?\n";

  cin >> numberOfplayers;


  numberOfhands = STANDARD_DECK_SIZE / numberOfplayers;
  leftOvercards = STANDARD_DECK_SIZE % numberOfplayers;


  if (numberOfplayers < 2) {
    cout << "Not enough players.\n";
  }
  else if (numberOfplayers > STANDARD_DECK_SIZE) {
    cout << "There are too many players.\n";
  }
  else {
    cout << "\nWhen you play spades with " << numberOfplayers << " players " << endl;
    cout << "each player should have " << numberOfhands << " hands in the game.\n";
    cout << "Stop dealing cards when each player has " << numberOfhands << ".\n" << "There will be " << leftOvercards << " card(s) remaining in the deck.\n\n";
  }

    return 0;
}
/*
Output: How many players are there?
3

When you play spades with 3 players
each player should have 17 hands in the game.
Stop dealing cards when each player has 17.
There will be 1 card(s) remaining in the deck.

1. String literal "how many players are there?" is printed to console.
2. Prompts user for input to be assigned to numberOfplayers.
3. Number of hands is equal to standard deck size of 52 cards divided by number of players.
4. Left over cards are remainder of standard deck size divided by number of players.
5. If the number of players are invalid:
  A) If players are less than 2, print "not enough players" to console.
  B) If players are greater than 52 print "too many players" to console.
6. If neither of those are true, string literal for lines 30-33 are printed to console.
*/
