#include <stdio.h>
#include <stdlib.h>

extern int add(int a, int b);

unsigned test1() {
    int a = random()%99;
    int b = random()%99;
    int result = add(a,b);
    printf("--------------------------------------------------------------------------------\n");
    printf("Testing your int add(a,b)\n");
    printf("add(%i, %i) | expected result: %i, Actual result: %i\n",a,b,a+b,result);
    printf("--------------------------------------------------------------------------------\n");
    if(a+b == result) return 1;
    else return 0;
}

int main(void) {
    unsigned rc = 0;

    printf("Running tests on your functions...\n");

    if( !test1() ) ++rc;


    printf("\n================================================================================\n");
    if(rc==0) printf("CONGRATULATION! All tests succeeded.\n");
    else      printf("One or more tests failed. please go back and check or ask Sven for help!\n");
    printf("================================================================================\n");
    return rc;
}
