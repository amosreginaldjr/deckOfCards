#include<iostream>
using namespace std;

enum CardLetterValue
{
	A = 1, K = 10, Q = 10,  J = 1
};

class Cards
{
private:
	struct Card
	{
		string /*int*/ value;
		string suit;
		bool isKnown; //is this card known to the user
	};
	Card card[52];
	string suits[4] = { "Hearts", "Diamond", "Club", "Spade" };
	string letter[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	
	
	void generateDeck();

public:
	Cards();
	void printFullDeck();
};

Cards::Cards()
{
	generateDeck();
}

void Cards::generateDeck()
{
	int counter = 0;
	for (int i = 0; i < 4; i++)	//suit
	{
		for (int j = 0; j < 13; j++) //value
		{
			this->card[counter].value = letter[j];
			this->card[counter].suit = suits[i];
			counter++;
		}
	}
}

void Cards::printFullDeck()
{
	for (int i = 0; i < 52; i++)
	{
		cout << this->card[i].value << ' ' << this->card[i].suit << endl;
	}
}

int main()
{
	Cards card;
	
	card.printFullDeck();

	return 0;
}