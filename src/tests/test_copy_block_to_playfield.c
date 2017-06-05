#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"
#include "block.h"
TEST_GROUP(TestCopyBlockToPlayfield);

TEST_GROUP_RUNNER(TestCopyBlockToPlayfield)
{
RUN_TEST_CASE(TestCopyBlockToPlayfield, FunctionCopyBlockToPlayfield);
}

TEST_SETUP(TestCopyBlockToPlayfield)
{
}

TEST_TEAR_DOWN(TestCopyBlockToPlayfield)
{
}
/** \fn TEST(TestCopyBlockToPlayfield, FunctionCopyBlockToPlayfield) 
тестирование появления блока в игровом поле: сравнение ожидаемого блока и блока, добавляемого с помощью функции
*/
TEST(TestCopyBlockToPlayfield, FunctionCopyBlockToPlayfield)

{
static int playfield[FIELD_HEIGHT * FIELD_WIDTH] = { 0 };
int a=0;
Block *block;
 for (int y = 0; y < 4; y++) 
   {
     for (int x = 0; x < 4; x++) 
      {
         if (block->data & (1 << ((y * 4) + x))) 
         {
           playfield[((block->y + y) * FIELD_WIDTH) + block->x + x] = block->color;
           a=1;
         }
         else 
           return 0;
      }
   }
TEST_ASSERT_EQUAL_INT_ARRAY(a, 1, 100);
}


