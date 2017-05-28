
#include "unity.h"
#include "unity_fixture.h"
#include "colors.h"
#include "allegro_framework.h"

TEST_GROUP(TestColors);

TEST_GROUP_RUNNER(TestColors)
{
RUN_TEST_CASE(TestColors, FunctionColors);
}

TEST_SETUP(TestColors)
{
}

TEST_TEAR_DOWN(TestColors)
{
}

TEST(TestColors, FunctionColors)
{
static ALLEGRO_COLOR color_index[MAX_COLORS];
color_index[0] = al_map_rgb(0, 0, 0);
    color_index[1] = al_map_rgb(225, 128, 0);
    color_index[2] = al_map_rgb(255, 255, 0);
    color_index[3] = al_map_rgb(0, 128, 0);
    color_index[4] = al_map_rgb(255, 255, 255);
    color_index[5] = al_map_rgb(0, 128, 128);
    color_index[6] = al_map_rgb(0, 0, 0);
    color_index[7] = al_map_rgb(0, 255, 255);

TEST_ASSERT_EQUAL_INT( 100, 100);

}
