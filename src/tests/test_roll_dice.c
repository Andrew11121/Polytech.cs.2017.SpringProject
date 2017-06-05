#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"
#include "allegro_framework.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

TEST_GROUP(TestRollDice);

TEST_GROUP_RUNNER(TestRollDice)
{
RUN_TEST_CASE(TestRollDice, FunctionRollDice);
}

TEST_SETUP(TestRollDice)
{
}

TEST_TEAR_DOWN(TestRollDice)
{
}

/** \fn TEST(TestRollDice, FunctionRollDice)
тестирование результата функции, которая получает случаную величину: сравнение ожидаемой величины с величиной, которую мы получаем из функции с определенными параметрами
*/
TEST(TestRollDice, FunctionRollDice)

{  
   int a, b = 10;
   int number = 10, sides = 1;
   int result = 0;
    for (int i = 0; i < number; i++)
        result += get_random_int(1, sides);
    a = result;
  

TEST_ASSERT_EQUAL_INT(a, b);
}
