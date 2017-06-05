#include "unity.h"
#include "unity_fixture.h"
#include "block.h"
#include "playfield.h"
#include "colors.h"

TEST_GROUP(TestDrawBlock);

TEST_GROUP_RUNNER(TestDrawBlock)
{
RUN_TEST_CASE(TestDrawBlock, FunctionDrawBlock);
}

TEST_SETUP(TestDrawBlock)
{
}

TEST_TEAR_DOWN(TestDrawBlock)
{
}
/** \fn TEST(TestDrawBlock, FunctionDrawBlock) 
тестирование вывода блока на экран: сравнение ожидаемого результата из теста с результатом из программы с текущими значениями 
*/

TEST(TestDrawBlock, FunctionDrawBlock)

{

int a=0, x1, y1, x0, y0, x, y;
Block *block;
   for (y = 0; y < 4; y++) 
   {
        for (x = 0; x < 4; x++) 
      {
            x1 = x0 + 32;
            y1 = y0 + 32;
      }
    }

if (x1 < 0 || y1 < 0 || x < 0 || y < 0)
  a = 3;
TEST_ASSERT_EQUAL_INT_ARRAY(a, 3, 100);
}
