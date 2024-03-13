#include <time.h>
#include <stdlib.h>

int util(){
    srand(time(NULL));
    int answer = rand() % 1000;
    return answer;
}