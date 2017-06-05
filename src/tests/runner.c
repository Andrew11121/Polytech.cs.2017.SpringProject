#include "unity.h"
#include "unity_fixture.h"
/** @file runner.c
*@brief Функция запуска всех тестов
*/
static void RunAllTests(void)
{

RUN_TEST_GROUP(TestGetColorByIndex);
RUN_TEST_GROUP(TestCopyBlockToPlayfield);
RUN_TEST_GROUP(TestIsCollision);
RUN_TEST_GROUP(TestCheckForLines);
RUN_TEST_GROUP(TestQuit);
RUN_TEST_GROUP(TestRollDice);
RUN_TEST_GROUP(TestClearPlayfield);
RUN_TEST_GROUP(TestDrawBlock);
RUN_TEST_GROUP(TestGenerateBlockAt);
RUN_TEST_GROUP(TestIsKeyPressed);
RUN_TEST_GROUP(TestCountingPoints);
}

int main(int argc, const char * argv[])
{
return UnityMain(argc, argv, RunAllTests);
}
