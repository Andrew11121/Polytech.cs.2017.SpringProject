#include "unity.h"
#include "unity_fixture.h"
#include "allegro_framework.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

TEST_GROUP(TestIsKeyPressed);

TEST_GROUP_RUNNER(TestIsKeyPressed)
{
RUN_TEST_CASE(TestIsKeyPressed, FunctionIsKeyPressed);
}

TEST_SETUP(TestIsKeyPressed)
{
}

TEST_TEAR_DOWN(TestIsKeyPressed)
{
}
/** \fn TEST(TestIsKeyPressed, FunctionIsKeyPressed)
Тестирование условие нажатия какой-либо клавиши: тест проходит, если возвращается переменная true, переменной а присваивается значение 1 и затем сравнивается с единицей. Иначе в случае false а присваивается 0 -> тест не проходит
*/
TEST(TestIsKeyPressed, FunctionIsKeyPressed)

{
 static bool is_key_pressed;
 int keycode;
 int a=0;

 if (is_key_pressed = true)
 a=1;
 else a = 0;

TEST_ASSERT_EQUAL_INT_ARRAY(a, 1, 100);
}


