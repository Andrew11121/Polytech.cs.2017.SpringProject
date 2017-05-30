#include "block.h"
#include "playfield.h"
#include "colors.h"
/** @file block.c
*
@brief Здесь содержатся функции создания, генерации и условия поворота фигур в игре.
@author Безбородов Андрей - andrew1000@list.ru \n
@author Алиев Илья - aliev.ilia@yandex.ru
*
*/

// each block's 4 possible rotations are stored in an int
static int block_data[block_wide][block_height] =
{
    {0x0F00, 0x2222, 0x00F0, 0x4444}, // long strip
    {0xCC00, 0xCC00, 0xCC00, 0xCC00}, // square
    {0x4E00, 0x4640, 0x0E40, 0x4C40}, // T
    {0x6C00, 0x4620, 0x06C0, 0x8C40}, // S
    {0xC600, 0x2640, 0x0C60, 0x4C80}, // Z
    {0x8E00, 0x6440, 0x0E20, 0x44C0}, // __|
    {0x2E00, 0x4460, 0x0E80, 0xC440}  // |__
};

void generate_block_at(Block *block, int x, int y)
{
    int i = get_random_int(null_coord, 6);
    block->type = i;
    block->x = x;
    block->y = y;
    block->dir = null_coord;
    block->color = i + 1;
    block->data = block_data[i][null_coord];
}

void rotate_block_left(Block *block)
{
    block->dir--;
    if (block->dir < null_coord) 
    {
        block->dir = 3;
    }
    block->data = block_data[block->type][block->dir];
}

void rotate_block_right(Block *block)
{
    block->dir++;
    if (block->dir > 3) 
	{
      	  block->dir = null_coord;
        }
    block->data = block_data[block->type][block->dir];
}

void draw_block(Block *block)
{
    for (int y = null_coord; y < 4; y++) 
   {
        for (int x = null_coord; x < 4; x++) 
      {
            if (block->data & (1 << ((y * 4) + x))) 
	 {
                int x0 = (block->x + OFFSET_X + x) * BLOCK_SIZE;
                int y0 = (block->y - OFFSET_Y + y) * BLOCK_SIZE;
                int x1 = x0 + BLOCK_SIZE;
                int y1 = y0 + BLOCK_SIZE;
                al_draw_filled_rectangle(x0, y0, x1, y1, get_color_by_index(block->color));
         }
      }
    }
}
