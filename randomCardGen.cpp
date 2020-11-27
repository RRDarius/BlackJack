#include <iostream>
#include <vector>
#include <iterator>
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

class Card
{
public:
    int value;
    Card(int num)
    {
        value = num;
    }
};

std::vector<Card> createDeck()
{
    std::vector<Card> deck;
    int randVal;
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        randVal = rand() % 11 + 1;
        if (randVal == 1 || randVal == 11)
        {
            randVal = -1;
        }
        Card newCard(randVal);
        deck.push_back(newCard);
    }
    return deck;
}

int main()
{
    std::vector<Card> deck = createDeck();
    // std::vector<Card>::iterator ptr;
    // for (ptr = deck.begin(); ptr < deck.end(); ptr++)
    // {
    //     std::cout<<deck
    // }

    for (Card values : deck)
    {
        std::cout << values.value << std::endl;
    }
}