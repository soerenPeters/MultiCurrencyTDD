#include "gmock/gmock.h"

#include "Dollar.h"
#include "Franc.h"

using namespace testing;


TEST(DollarTest, addTwoDollars)
{
    ASSERT_TRUE(Dollar(5).plus(Dollar(5)) == Dollar(10));
}

TEST(DollarTest, mulitplyDollars)
{
    ASSERT_TRUE(Dollar(5).times(2) == Dollar(10));
}

TEST(DollarTest, addTwoFrancs)
{
    ASSERT_TRUE(Franc(5).plus(Franc(5)) == Franc(10));
}

TEST(FrancTest, multiplyFrancs)
{
    ASSERT_TRUE(Franc(5).times(2) == Franc(10));
}

TEST(MoneyTest, equailityMoney)
{
    ASSERT_TRUE(Franc(5) == Franc(5));
    ASSERT_FALSE(Franc(5) == Franc(6));
    ASSERT_TRUE(Dollar(5) == Dollar(5));
    ASSERT_FALSE(Dollar(5) == Dollar(6));
    ASSERT_FALSE(Franc(5) == Dollar(5));
}