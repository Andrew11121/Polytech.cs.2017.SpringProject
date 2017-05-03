#include "playfield.h"
#include "colors.h"

static int playfield[FIELD_HEIGHT * FIELD_WIDTH] = { 0 };

void clear_playfield()
{
    for (int y = 0; y < FIELD_HEIGHT; y++) {
        for (int x = 0; x < FIELD_WIDTH; x++) {
            playfield[(y * FIELD_WIDTH) + x] = 0;
        }
    }
}

//copping block to playfield

bool is_collision(Block *block, int dx, int dy)
{
    for (int y = 0; y < 4; y ++) {
        for (int x = 0; x < 4; x ++) {
            if ((((block->x + dx + x < 0) || (block->y + dy + y < 0) ||
                (block->x + dx + x >= FIELD_WIDTH) || (block->y + dy + y >= FIELD_HEIGHT)) ||
                (playfield[((block->y + dy + y) * FIELD_WIDTH) + block->x + dx + x] != 0)) &&
                (block->data & (1 << ((y * 4) + x)))) {
                    return true;
            }
        }
    }

    return false;
}

//func to check the lines is required
void draw_playfield()
{
    for (int y = 0; y < FIELD_HEIGHT; y++) {
        for (int x = 0; x < FIELD_WIDTH; x++) {
            int x0 = (x + OFFSET_X) * BLOCK_SIZE;
            int y0 = (y - OFFSET_Y) * BLOCK_SIZE;
            int x1 = x0 + BLOCK_SIZE;
            int y1 = y0 + BLOCK_SIZE;
            al_draw_filled_rectangle(x0, y0, x1, y1, get_color_by_index(playfield[y * FIELD_WIDTH + x]));
        }
    }
}
