#include "gmock/gmock.h"

#include "Dollar.h"

using namespace testing;


TEST(DollarTest, createDollarWithAmount)
{
    ASSERT_THAT(Dollar(5).amount, Eq(5));
}