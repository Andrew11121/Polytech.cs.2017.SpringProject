#pragma once
#ifndef INCLUDED_COLORS_H
#define INCLUDED_COLORS_H

#include "allegro_framework.h"

#define MAX_COLORS 8
/** @file colors.h
*
@brief Заголовочный файл для файла с записью и передачей разных цветов для фигур в тетрисе.
@author Безбородов Андрей - andrew1000@list.ru \n
@author Алиев Илья - aliev.ilia@yandex.ru
*
*/
void setup_color_index();
ALLEGRO_COLOR get_color_by_index(int index);

#endif
