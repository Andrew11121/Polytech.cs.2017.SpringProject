#include "unity.h"
#include "unity_fixture.h"

static void RunAllTests(void)
{
RUN_TEST_GROUP(TestDistanceBetweenPoints);
RUN_TEST_GROUP(TestAngleBetweenPoints);
RUN_TEST_GROUP(TestColors);
RUN_TEST_GROUP(TestRectangleContainsPoint);
RUN_TEST_GROUP(TestRectanglesIntersect);
}

int main(int argc, const char * argv[])
{
return UnityMain(argc, argv, RunAllTests);
}
