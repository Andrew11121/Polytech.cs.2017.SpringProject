#pragma once
#ifndef INCLUDED_BLOCK_H
#define INCLUDED_BLOCK_H
#define block_wide 7
#define block_height 4
#define null_coord 0
#include "allegro_framework.h"
/** @file block.h
*
@brief Заголовочный файл для файла с функциями создания, генерации и условия поворота фигур в игре.
@author Безбородов Андрей - andrew1000@list.ru \n
@author Алиев Илья - aliev.ilia@yandex.ru
*
*/

/** \class no_name
*
\brief Полное задание фигуры на поле
Структура, хранящая данные об определенной фигуре в игре.
*
*/

/** \typedef Block
*
Имя структуры "no_name".
*
*/
typedef struct
{
int type; //!< Какая именно фигура игры
int color; //!< Индекс цвета фигуры
int x, y; //!< Расположение фигуры на игровом поле
int dir; //!< Переменная для поворота блока
int data; //!< Информация о форме блока
} Block;

void generate_block_at(Block *block, int x, int y);
void rotate_block_left(Block *block);
void rotate_block_right(Block *block);
void draw_block(Block *block);

#endif
