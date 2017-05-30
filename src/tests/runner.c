#include "unity.h"
#include "unity_fixture.h"
/** @file runner.c
*@brief Функция запуска всех тестов
*/
static void RunAllTests(void)
{
RUN_TEST_GROUP(TestDistanceBetweenPoints);
RUN_TEST_GROUP(TestAngleBetweenPoints);
RUN_TEST_GROUP(TestGetColorByIndex);
RUN_TEST_GROUP(TestRectangleContainsPoint);
RUN_TEST_GROUP(TestRectanglesIntersect);
RUN_TEST_GROUP(TestCirclesIntersect);
RUN_TEST_GROUP(TestCircleContainsPoint);
RUN_TEST_GROUP(TestIsCollision);
RUN_TEST_GROUP(TestCheckForLines);
RUN_TEST_GROUP(TestQuit);
RUN_TEST_GROUP(TestRollDice);

}

int main(int argc, const char * argv[])
{
return UnityMain(argc, argv, RunAllTests);
}
