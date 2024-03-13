#include <iostream>
#include <string>

int game(int answer);
int util();

int main(){

    int answer;

    answer = util();
    // std::cout << "Answer is "<< answer << std::endl; 
    std::printf("Answer is %03d\n", answer);
    game(answer);

}