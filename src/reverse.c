#include <string.h>
#include <stdio.h>
#include "reverseStr.h"

int main(int argc, char **argv)
{
    char dfstr[] = "geeksforgeeks";
    char *rString;
    if(argc > 1){
        rString = reverseStr(argv[1]);
    } else {
        rString = reverseStr(dfstr);
    }
    printf("%s\n", rString);
    return 0;
}
