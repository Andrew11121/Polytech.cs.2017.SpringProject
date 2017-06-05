#pragma once
#ifndef INCLUDED_PLAYFIELD_H
#define INCLUDED_PLAYFIELD_H

#include "allegro_framework.h"
#include "block.h"

#define FIELD_WIDTH 10
#define FIELD_HEIGHT 24
#define OFFSET_X 1
#define OFFSET_Y 4
#define BLOCK_SIZE 32
/** @file playfield.h
*
@brief Функции для работы с игровым полем.
@author Безбородов Андрей - andrew1000@list.ru \n
@author Алиев Илья - aliev.ilia@yandex.ru
*
*/
void clear_playfield();
void copy_block_to_playfield(Block *block);
bool is_collision(Block *block, int dx, int dy);
int check_for_lines();
void draw_playfield();

#endif
