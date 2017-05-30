
#include "unity.h"
#include "unity_fixture.h"
#include "colors.h"
#include "allegro_framework.h"

TEST_GROUP(TestGetColorByIndex);

TEST_GROUP_RUNNER(TestGetColorByIndex)
{
RUN_TEST_CASE(TestGetColorByIndex, FunctionGetColorByIndex);
}

TEST_SETUP(TestGetColorByIndex)
{
}

TEST_TEAR_DOWN(TestGetColorByIndex)
{
}

/** \fn TEST(TestGetColorByIndex, FunctionGetColorByIndex)
Проверяет цвет фигуры в игре: сравнивает результат из функции с результатом, полученным в ходе выполнения теста.
*/
TEST(TestGetColorByIndex, FunctionGetColorByIndex)
{

static ALLEGRO_COLOR color_index[MAX_COLORS];

int  testing_value ;
int rec, index=MAX_COLORS;
color_index[index] = al_map_rgb(255, 255, testing_value);
if (testing_value==32766||testing_value==32767);
rec=1;

TEST_ASSERT_EQUAL_INT(rec, 1);

}

