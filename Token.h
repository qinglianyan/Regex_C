#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TokenType.h"
#include "Pos.h"
typedef struct{
    TokenTypes tokenType;
    char * value;
    Pos startPos;
    Pos endPos;
}Token;

int main(){

    return 0;
}