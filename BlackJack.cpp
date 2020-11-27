#include <iostream>

class Card
{
public:
    int value;
    std::string face;
    Card(int num, std::string faceVal)
    {
        value = num;
        face = faceVal;
    }
};

int main()
{
    Card cardOne(10, "jack");
    std::cout << cardOne.face << "\n";
}