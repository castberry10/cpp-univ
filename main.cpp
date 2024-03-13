#include <iostream>
#include <string>

int game(int answer);
int main(){

    int answer;

    std::cout << "Enter a answer: ";
    std::cin >> answer;

    game(answer);

}