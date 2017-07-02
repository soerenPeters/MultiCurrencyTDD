#include "gmock/gmock.h"

#include "Dollar.h"

using namespace testing;


TEST(DollarTest, addTwoDollars)
{
    ASSERT_TRUE(Dollar(5).plus(Dollar(5)) == Dollar(10));
}

TEST(DollarTest, mulitplyDollars)
{
    ASSERT_TRUE(Dollar(5).times(2) == Dollar(10));
}