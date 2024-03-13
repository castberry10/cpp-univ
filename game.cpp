#include <iostream>
int game(int answer){

    int guess;
    int answerchar[3];
    int guesschar[3];
    answerchar[0] = answer / 100;
    answerchar[1] = (answer % 100) / 10;
    answerchar[2] = answer % 10;
    int strike = 0;
    int ball = 0;

    while(1){
        std::cout << "Enter a guess :";
        std::cin >> guess;

        if (answer == guess){
            std::cout << "You win!";
            break;
        }
        else{
            guesschar[0] = guess / 100;
            guesschar[1] = (guess % 100) / 10;
            guesschar[2] = guess % 10;
            // 스트라이크 판별
            if (guesschar[0] == answerchar[0]) strike++;
            if (guesschar[1] == answerchar[1]) strike++;
            if (guesschar[2] == answerchar[2]) strike++;

            // 볼 판별
            if (guesschar[0] == answerchar[1]) ball++;
            if (guesschar[0] == answerchar[2]) ball++;
            if (guesschar[1] == answerchar[0]) ball++;
            if (guesschar[1] == answerchar[2]) ball++;
            if (guesschar[2] == answerchar[0]) ball++;
            if (guesschar[2] == answerchar[1]) ball++;
            std::cout << "Strikes: " << strike << ", Balls: " << ball <<std::endl;
            ball = 0;
            strike = 0;
        }

    }
}