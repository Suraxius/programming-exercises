#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int echo(int a);       // Test 1
extern int add(int a, int b); // Test 2

unsigned test1() {
    int a = rand() % 99 + 1;
    int result = echo(a);
    if(a == result) {
        printf("Test 1 - Completed\n");
        return 1;
    }
    else {
        printf("--------------------------------------------------------------------------------\n");
        printf("Test 1 - Testing your int echo(a)\n");
        printf("echo(%i) | expected result: %i, Actual result: %i\n",a,a,result);
        printf("--------------------------------------------------------------------------------\n");
        return 0;
    }
}

unsigned test2() {
    int a = rand() % 99 + 1;
    int b = rand() % 99 + 1;
    int result = add(a,b);

    if(a+b == result) {
        printf("Test 2 - Completed\n");
        return 1;
    }
    else {
        printf("--------------------------------------------------------------------------------\n");
        printf("Test 2 - Testing your int add(a,b)\n");
        printf("add(%i, %i) | expected result: %i, Actual result: %i\n",a,b,a+b,result);
        printf("--------------------------------------------------------------------------------\n");
        return 0;
    }
}

int main(void) {
    unsigned rc = 0;
    srand(time(NULL));

    printf("\n\nRunning tests on your functions...\n\n");

    if( !test1() ) ++rc;
    if( !test2() ) ++rc;


    printf("\n================================================================================\n");
    if(rc==0) printf("CONGRATULATION! All tests succeeded.\n");
    else      printf("One or more tests failed. please go back into exam.c file and check your work!\n");
    printf("================================================================================\n");
    return rc;
}
