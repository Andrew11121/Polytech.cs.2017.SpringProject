#ifndef INCLUDED_PLAYFIELD_H
#define INCLUDED_PLAYFIELD_H

#include "allegro_framework.h"
#include "block.h"

#define FIELD_WIDTH 10
#define FIELD_HEIGHT 24
#define OFFSET_X 1
#define OFFSET_Y 4
#define BLOCK_SIZE 32

void clear_playfield();
bool is_collision(Block *block, int dx, int dy);
void draw_playfield();
void copy_block_to_playfield(Block *block);

#endif
