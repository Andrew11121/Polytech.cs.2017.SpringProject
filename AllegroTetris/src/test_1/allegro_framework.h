#ifndef INCLUDED_ALLEGRO_FRAMEWORK_H
#define INCLUDED_ALLEGRO_FRAMEWORK_H

#ifdef __cplusplus
   extern "C" 
{
#endif

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_image.h>

#define log_message(...) write_logfile(LOG_MESSAGE, __VA_ARGS__);
#define log_warning(...) write_logfile(LOG_WARNING, __VA_ARGS__);
#define log_error(...)   write_logfile(LOG_ERROR, __VA_ARGS__);


enum 
{
    LOG_MESSAGE,
    LOG_WARNING,
    LOG_ERROR
};

void write_logfile(int log_level, const char *format, ...);

void init_framework(const char *title, int window_width, int window_height, bool fullscreen);

void destroy_framework();

void alt_tab_should_pause(bool true_or_false);

void run_game_loop(void (*update_proc)(), void (*render_proc)());

void quit();

int get_window_width();

int get_window_height();

bool is_key_down(int keycode);

bool is_key_pressed(int keycode);

bool is_key_released(int keycode);

enum 
{
    MOUSE_LEFT_BUTTON,
    MOUSE_RIGHT_BUTTON,
    MOUSE_MIDDLE_BUTTON,
    MAX_MOUSE_BUTTONS
};

int get_mouse_x();

int get_mouse_y();

int get_mouse_dx();

int get_mouse_dy();

bool is_mouse_button_down(int mouse_button);

bool is_mouse_button_pressed(int mouse_button);

bool is_mouse_button_released(int mouse_button);

int wait_for_keypress();

int get_random_int(int min, int max);

float get_random_float(float min, float max);

bool one_in(int chance);

int roll_dice(int number, int sides);

ALLEGRO_FONT* get_default_font();

extern ALLEGRO_COLOR black_color;
extern ALLEGRO_COLOR white_color;
extern ALLEGRO_COLOR dark_grey_color;
extern ALLEGRO_COLOR grey_color;
extern ALLEGRO_COLOR light_grey_color;
extern ALLEGRO_COLOR red_color;
extern ALLEGRO_COLOR green_color;
extern ALLEGRO_COLOR dark_green_color;
extern ALLEGRO_COLOR blue_color;
extern ALLEGRO_COLOR yellow_color;
extern ALLEGRO_COLOR cyan_color;
extern ALLEGRO_COLOR magenta_color;
extern ALLEGRO_COLOR maroon_color;
extern ALLEGRO_COLOR purple_color;
extern ALLEGRO_COLOR lime_color;
extern ALLEGRO_COLOR olive_color;
extern ALLEGRO_COLOR navy_color;
extern ALLEGRO_COLOR teal_color;
extern ALLEGRO_COLOR brown_color;

#ifdef __cplusplus
   }
#endif

#endif
