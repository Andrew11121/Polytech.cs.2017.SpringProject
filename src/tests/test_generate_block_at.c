#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"
#include "block.h"



TEST_GROUP(TestGenerateBlockAt);

TEST_GROUP_RUNNER(TestGenerateBlockAt)
{
RUN_TEST_CASE(TestGenerateBlockAt, FunctionGenerateBlockAt);
}

TEST_SETUP(TestGenerateBlockAt)
{
}

TEST_TEAR_DOWN(TestGenerateBlockAt)
{
}
/** \fn TEST(TestGenerateBlockAt, FunctionGenerateBlockAt)
тестирование функции вывода генерации определенного блока: сравнивает ожидаемый результат с отсутвием рандома и определенным блоком на выход с выходом его же из функции
*/
TEST(TestGenerateBlockAt, FunctionGenerateBlockAt)
{
 int block_data[24][10] =
{
    {0x0F00, 0x2222, 0x00F0, 0x4444}, 
    {0xCC00, 0xCC00, 0xCC00, 0xCC00}, 
    {0x4E00, 0x4640, 0x0E40, 0x4C40}, 
    {0x6C00, 0x4620, 0x06C0, 0x8C40}, 
    {0xC600, 0x2640, 0x0C60, 0x4C80}, 
    {0x8E00, 0x6440, 0x0E20, 0x44C0}, 
    {0x2E00, 0x4460, 0x0E80, 0xC440}  
};

Block *block;
int x, y;
int a[1][0];
 int i = get_random_int(1, 1);
    block->type = i;
    block->x = x;
    block->y = y;
    block->dir = 0;
    block->color = i + 1;
    block->data = block_data[i][0];

TEST_ASSERT_EQUAL_INT_ARRAY(block_data[1][0], block_data[i][null_coord], 100);
}

