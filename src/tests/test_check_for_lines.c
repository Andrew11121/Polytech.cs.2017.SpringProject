#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"

TEST_GROUP(TestCheckForLines);

TEST_GROUP_RUNNER(TestCheckForLines)
{
RUN_TEST_CASE(TestCheckForLines, FunctionCheckForLines);
}

TEST_SETUP(TestCheckForLines)
{
}

TEST_TEAR_DOWN(TestCheckForLines)
{
}

/** \fn TEST(TestCheckForLines, FunctionCheckForLines)
Проверяет количество линий в игре: сравнивает результат из функции с результатом, полученным в ходе выполнения теста.

*/
TEST(TestCheckForLines, FunctionCheckForLines)

{
static int playfield[10 * 24] = { 0 };
int lines = 0;

for (int y = 0; y < 24; y++)
   {
   int total = 0;

      for (int x = 0; x < 10; x++)
      {
      if (playfield[(y * 10) + x])
         {
         total++;
         }
      }

     if (total == 10)
     {
     for(int i = y; i > 0; i--)
      {
      memcpy(&playfield[i * 10], &playfield[(i - 1) * 10], sizeof(int) * 10);
      }

     memset(&playfield[0], 0, sizeof(int) * FIELD_WIDTH);
     lines++;
     }
   }

TEST_ASSERT_EQUAL_INT_ARRAY( check_for_lines(), lines, 100);
}
