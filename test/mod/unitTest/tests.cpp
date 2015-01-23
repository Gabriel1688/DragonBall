#include "whattotest.cpp"
#include <gtest/gtest.h>
TEST(squartRootTest, PositiveNos)
{
    ASSERT_EQ(6,squartRoot(36.0));
}

TEST(squartRootTest, NegativeNos)
{
    ASSERT_EQ(-1.0,squartRoot(-15.0));
}
