#include <time.h>
#include <stdlib.h>

int util(){
    int answer;
    int answerchar[3];
    
    while(1){
        srand(time(NULL));
        answer = rand() % 1000;
        answerchar[0] = answer / 100;
        answerchar[1] = (answer % 100) / 10;
        answerchar[2] = answer % 10;
        if(answerchar[0] != answerchar[1] && answerchar[0] != answerchar[2] && answerchar[0] != answerchar[1]){
            break;
        }
    }
    
    return answer;
}