#include "allegro_framework.h"
#include "playfield.h"
#include "block.h"
#include "colors.h"

#define SCREEN_WIDTH ((FIELD_WIDTH+5) * BLOCK_SIZE)
#define SCREEN_HEIGHT ((FIELD_HEIGHT-2) * BLOCK_SIZE)

static Block current_block;    
static Block next_block;       
static bool dead = false;           
static int score = 0;               
static int lines = 0;               
static int level = 0;               
static int fall_delay = 0;          
static int fall_speed = 30;         
static int key_delay = 0;           
static int counter = 0;             

//func for gameover
static void setup_game()
{
    dead = false;
    score = lines = level = 0;
    generate_block_at(&current_block, (FIELD_WIDTH / 2) - 2, 0);
    generate_block_at(&next_block, FIELD_WIDTH, 4);
    clear_playfield();
}

static void update()
{
    
    if (key_delay <= 0) {
        key_delay = 5;

        if (is_key_down(ALLEGRO_KEY_LEFT) && !is_collision(&current_block, -1, 0)) {
            current_block.x--;
        }
        else if (is_key_down(ALLEGRO_KEY_RIGHT) && !is_collision(&current_block, 1, 0)) {
            current_block.x++;
        }
        else if (is_key_down(ALLEGRO_KEY_DOWN) && !is_collision(&current_block, 0, 1)) {
            current_block.y++;
            score++;
        }
        else if (is_key_down(ALLEGRO_KEY_A)) {
            key_delay = 10;
            rotate_block_left(&current_block);
            if (is_collision(&current_block, 0, 0)) {
                rotate_block_right(&current_block);
            }
        }
        else if (is_key_down(ALLEGRO_KEY_S)) {
            key_delay = 10;
            rotate_block_right(&current_block);
            if (is_collision(&current_block, 0, 0)) {
                rotate_block_left(&current_block);
            }
        }
        else if (is_key_down(ALLEGRO_KEY_SPACE)) {
            key_delay = 20;
            while (!is_collision(&current_block, 0, 1)) {
                current_block.y++;
            }
        }
        else {
            key_delay = 0;
        }
    }
    key_delay--;

    
    if (fall_delay <= 0) {
        fall_delay = fall_speed;

        if (is_collision(&current_block, 0, 1)) {
            if (current_block.y == 0) {
                dead = true;
            }

            copy_block_to_playfield(&current_block);

            // make the next block the current one
            current_block = next_block;
            current_block.x = (FIELD_WIDTH / 2) - 2;
            current_block.y = 0;

            // generate a new next block
            generate_block_at(&next_block, FIELD_WIDTH, 4);
        }
        else {
            current_block.y++;
        }
    }
    fall_delay--;

    counter++;
    if (counter > 3600) {
        counter = 0;
        level++;
        fall_speed = 30 - level;
    }

    int cleared_lines = check_for_lines();
    lines += cleared_lines;
    switch (cleared_lines) {
        case 0: score += 0; break;
        case 1: score += level * 40 + 40; break;
        case 2: score += level * 100 + 100; break;
        case 3: score += level * 300 + 300; break;
        default: score += level * 1200 + 1200; break;
    }

    if (dead) {
        game_over();
        setup_game();
    }

    if (is_key_down(ALLEGRO_KEY_ESCAPE)) {
        quit();
    }
}

//func to draw
int main(int argc, char *argv[])
{
    init_framework("tetris", SCREEN_WIDTH, SCREEN_HEIGHT, false);
    setup_color_index();
    setup_game();
    run_game_loop(update, draw);
    return 0;
}
