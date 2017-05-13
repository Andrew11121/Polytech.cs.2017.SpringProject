#include "unity.h"
#include "unity_fixture.h"

static void RunAllTests(void)
{
RUN_TEST_GROUP(TestDistanceBetweenPoints);
RUN_TEST_GROUP(TestAngleBetweenPoints);
}

int main(int argc, const char * argv[])
{
return UnityMain(argc, argv, RunAllTests);
}
