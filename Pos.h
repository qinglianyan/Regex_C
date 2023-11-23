#ifndef _POS_H_
#define _POS_H_
typedef struct{
    int row;
    int col;
}Pos;

Pos nextCol(Pos a){
    a.col=a.col+1;
    return a;
}
Pos nextRow(Pos a){
    a.row=a.row+1;
    return a;
}

#endif