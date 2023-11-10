#include<iostream>

long health,mana;
long first_fight[2],second_fight[2],third_fight[2];

int main(){

    std::cout << "enter your health points: ";
    std::cin >> health;

    std::cout << "enter your mana points: ";
    std::cin >> mana;

    std::cout << "enter first fight losses: ";
    std::cin >> first_fight[0];
    health -= first_fight[0];
    std::cin >> first_fight[1];
    mana -= first_fight[1];

    
    std::cout << "enter second fight losses: ";
    std::cin >> second_fight[0];
    health -= second_fight[0];
    std::cin >> second_fight[1];
    mana -= second_fight[1];

    std::cout << "enter third fight losses: ";
    std::cin >> third_fight[0];
    health -= third_fight[0];
    std::cin >> third_fight[1];
    mana -= third_fight[1];
    
    bool result;
    result = true;

    if (first_fight[0] && first_fight[1])
        result = false;

    if (second_fight[0] && second_fight[1])
        result = false;

    if (third_fight[0] && third_fight[1])
        result = false;

    if(health < 0 || mana < 0)
        result = false;

    if (result)
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}