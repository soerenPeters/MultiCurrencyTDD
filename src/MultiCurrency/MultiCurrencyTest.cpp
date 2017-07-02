#include "gmock/gmock.h"

#include "Dollar.h"

using namespace testing;


TEST(DollarTest, createDollarWithAmount)
{
    ASSERT_THAT(Dollar(5).amount, Eq(5));
}

TEST(DollarTest, addTwoDollars)
{
    Dollar d1(5);
    Dollar d2(5);

    ASSERT_THAT(d1.plus(d2).amount, Eq(10));
}

TEST(DollarTest, mulitplyDollars)
{
    Dollar d(5);
    Dollar newDollar = d.times(2);

    ASSERT_THAT(newDollar.amount, 10);

}