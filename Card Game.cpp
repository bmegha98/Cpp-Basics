/*
The program imitates a game played by cardsharps (professional gamblers) at carnivals. The cardsharp shows you three cards, then places 
them face down on the table and interchanges their positions several times. If you can guess correctly where a particular card is, you win.
Everything is in plain sight, yet the cardsharp switches the cards so rapidly and confusingly that the player (the mark) almost always 
loses track of the card and loses the game, which is,of course, played for money.
*/

#include<iostream>

using namespace std;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

enum Suits {clubs,diamonds,hearts,spades};
struct card
{
	int number;
	Suits suit;
};

int main()
{
	card temp,chosen,prize;
	int position;
	
	card card1 = { 7, clubs }; 
	cout << "Card 1 is the seven of clubs\n";
	card card2 = { jack, hearts }; 
	cout << "Card 2 is the jack of hearts\n";
	card card3 = { ace, spades }; 
	cout << "Card 3 is the ace of spades\n";
	
	prize = card3;
	
	cout << "I'm swapping card 1 and card 3\n";
	temp = card3; card3 = card1; card1 = temp;
	cout << "I'm swapping card 2 and card 3\n";
	temp = card3; card3 = card2; card2 = temp;
	cout << "I'm swapping card 1 and card 2\n";
	temp = card2; card2 = card1; card1 = temp;
	
	cout << "Now, where (1, 2, or 3) is the ace of spades? ";
	cin >> position;
	
	switch(position)
	{
		case 1 : chosen = card1;
					break;
		case 2 : chosen = card2;
					break;
		case 3 : chosen = card3;
					break;
	}
	
	if(chosen.number == prize.number && chosen.suit == prize.suit)
	 cout<<"Hurray !! You guessed it right :)"<<endl;
	else
	 cout<<"Better luck next time :("<<endl;
   
  return 0;
  }
