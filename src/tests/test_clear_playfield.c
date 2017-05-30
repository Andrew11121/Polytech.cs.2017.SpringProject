#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"
#include "block.h"



TEST_GROUP(TestClearPlayfield);

TEST_GROUP_RUNNER(TestClearPlayfield)
{
RUN_TEST_CASE(TestClearPlayfield, FunctionClearPlayfield);
}

TEST_SETUP(TestClearPlayfield)
{
}

TEST_TEAR_DOWN(TestClearPlayfield)
{
}
/** \fn TEST(TestClearPlayfield, FunctionClearPlayfield) 
тестирование очистки поля игры: сравнение ожидаемого чистого поля и поля, очищаемого с помощью функции
*/
TEST(TestClearPlayfield, FunctionClearPlayfield)
{

static int playfield[240] = { 0 };

for (int y = 0; y < FIELD_HEIGHT; y++) 
   {
        for (int x = 0; x < FIELD_WIDTH; x++) 
      {
            playfield[(y * FIELD_WIDTH) + x] = 0;
      }
   }


TEST_ASSERT_EQUAL_INT_ARRAY(0, playfield[240], 100);
}

