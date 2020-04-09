#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  

void delay(int milli_seconds) 
{ 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds) 
        ; 
} 
  

char randSlash() {
    if (rand()%2) {
        return 92;
    } else {
        return 47;
    }
}

int main(int argc, char *argv[]) 
{ 
    time_t t;
    srand((unsigned) time(&t));
	int delaytime = 100;

	if (argc > 1) {
		long conv = strtol(argv[1], NULL, 10);
		delaytime = conv;
	}

	for(;;) {
		printf("%c", randSlash());
		fflush(stdout);
		delay(delaytime);
	}
    return 0; 
} 
