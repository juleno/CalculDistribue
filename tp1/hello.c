#include <stdio.h>
#include <pthread.h>
int main() {
    printf("Hello world");
    sleep(10);
    printf("Bye");
    return 0;
}