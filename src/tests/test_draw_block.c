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

int a=0;
Block *block;
   for (int y = null_coord; y < 4; y++) 
   {
        for (int x = null_coord; x < 4; x++) 
      {
            if (block->data & (1 << ((y * 4) + x))) 
	 {
                int x0 = (block->x + OFFSET_X + x) * BLOCK_SIZE;
                int y0 = (block->y - OFFSET_Y + y) * BLOCK_SIZE;
                int x1 = x0 + BLOCK_SIZE;
                int y1 = y0 + BLOCK_SIZE;
                if (x1 < 0 || x0 < 0 || y1 < 0 || y0<0)
                return a=3;
         }
      }
    }

TEST_ASSERT_EQUAL_INT_ARRAY(a, 0, 100);
}

