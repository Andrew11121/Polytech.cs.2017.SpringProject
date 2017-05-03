#ifndef INCLUDED_BLOCK_H
#define INCLUDED_BLOCK_H

#include "allegro_framework.h"

typedef struct {
    int type;   
    int color;  
    int x, y;   
    int dir;    
    int data;   
} Block;

void generate_block_at(Block *block, int x, int y);

#endif
