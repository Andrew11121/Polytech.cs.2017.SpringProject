#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"

TEST_GROUP(TestIsCollision);

TEST_GROUP_RUNNER(TestIsCollision)
{
RUN_TEST_CASE(TestIsCollision, FunctionIsCollision);
}

TEST_SETUP(TestIsCollision)
{
}

TEST_TEAR_DOWN(TestIsCollision)
{
}
/** \fn TEST(TestIsCollision, FunctionIsCollision) 
тестирование столкновения фигур: сравнение ожидаемого результата из теста с результатом из программы с текущими значениями
*/
TEST(TestIsCollision, FunctionIsCollision)

{
    static int playfield[FIELD_HEIGHT * FIELD_WIDTH] = { 0 };
    Block *block;
    int dx, dy;
    int a = 1 , b = 0;
     for (int y = 0; y < 4; y ++) 
     {
     for (int x = 0; x < 4; x ++) 
       {
          if ((((block->x + dx + x < 0) || (block->y + dy + y < 0) ||
             (block->x + dx + x >= FIELD_WIDTH) || (block->y + dy + y >= FIELD_HEIGHT)) ||
             (playfield[((block->y + dy + y) * FIELD_WIDTH) + block->x + dx + x] != 0)) &&
             (block->data & (1 << ((y * 4) + x)))) 
          {
             return a;
          }
      }
   }
    return b;

TEST_ASSERT_EQUAL_INT_ARRAY(is_collision(0, 0, 0), a, 100);
}

