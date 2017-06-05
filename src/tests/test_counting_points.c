#include "unity.h"
#include "unity_fixture.h"
#include "allegro_framework.h"
#include "playfield.h"
#include "block.h"
#include "colors.h"

TEST_GROUP(TestCountingPoints);

TEST_GROUP_RUNNER(TestCountingPoints)
{
RUN_TEST_CASE(TestCountingPoints, FunctionCountingPoints);
}

TEST_SETUP(TestCountingPoints)
{
}

TEST_TEAR_DOWN(TestCountingPoints)
{
}
/** \fn TEST(TestCountingPoints, FunctionCountingPoints) 
тестирование подсчёта очков в зависимости от числа собранных линий и от уровня: сравнение ожидаемого результата из теста с результатом из программы с текущими значениями 
*/

TEST(TestCountingPoints, FunctionCountingPoints)

{

int lines = 3;
int level = 5;
int score;
score = level * 350 + 350;
TEST_ASSERT_EQUAL_INT(score, 2100);
}



