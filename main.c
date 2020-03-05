#include <dirent.h>
#include "apue.h"
#define BUFFSIZE 4096

int main(int argc, char *argv[]) {
    printf("Hello World from process ID %ld",(long)getpid());
    exit(0);
}
