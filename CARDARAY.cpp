/*
There are 4 suits- Spades, Diamonds, Clubs and Hearts. So, there are 13 cards of each suit.
In each suit, there are 9 number cards from 2–10, a Jack, a Queen, a King and an Ace. 
So, we can say that there are a total of 9*4= 36 number cards; 4 Jacks; 4 Queens; 4 Kings and 4 Ace cards.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit{clubs,diamonds,hearts,spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
	int number;
	Suit suit;
	public:
		Card()
		{}
		void set(int n,Suit s)
		{
			number = n;
			suit = s;
		}
		void Display();
};

void Card::Display()
{
	if(number >=2 && number <= 10)
		cout<<number;
	else
		switch(number)
		{
			case jack:	cout<<"J";break;
			case queen:	cout<<"Q";break;
			case king:	cout<<"K";break;
			case ace:	cout<<"A";break;
		}
	
	switch(suit)
	{
		case clubs:     cout<<'C';break;
		case diamonds:	cout<<'D';break;
		case hearts:	cout<<'H';break;
		case spades:	cout<<'S';break;
	}
}

int main()
{
	Card deck[52];
	int j;
	for(j = 0;j<52;j++)
	{
		int num = (j % 13)+2; 			// cycles through 2 to 14  4 times
		Suit su = Suit(j / 13);			// cycles through 0 to 3  13 times
		deck[j].set(num,su);
	}
	cout<<"\nOrdered Deck:\n";
	for(j = 0;j<52;j++)
	{
		deck[j].Display();
		cout<<"   ";
		if((j+1) % 13 == 0)
			cout<<endl;
	}
	
	srand(time(NULL) ); 					//seed random numbers with time
	for(j=0; j<52; j++)
	{
		int k = rand() % 52;
		Card temp = deck[j];
		deck[j] = deck[k];
		deck[k] = temp;
	}
	cout<<"\nOShuffled Deck:\n";
	for(j = 0;j<52;j++)
	{
		deck[j].Display();
		cout<<"   ";
		if((j+1) % 13 == 0)
			cout<<endl;
	}
	
	system("pause");
	return 0;
	
}

