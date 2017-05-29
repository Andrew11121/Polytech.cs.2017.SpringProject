#include "unity.h"
#include "unity_fixture.h"
#include "allegro_framework.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

TEST_GROUP(TestQuit);

TEST_GROUP_RUNNER(TestQuit)
{
RUN_TEST_CASE(TestQuit, FunctionQuit);
}

TEST_SETUP(TestQuit)
{
}

TEST_TEAR_DOWN(TestQuit)
{
}

TEST(TestQuit, FunctionQuit)

{
 static bool is_done;
is_done = true;

TEST_ASSERT_EQUAL_INT_ARRAY(is_done, true, 100);
}


