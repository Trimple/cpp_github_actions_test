#include "gtest/gtest.h"

TEST(templateTests, equal_fine)
{
    ASSERT_EQ(1, 1);
}

TEST(templateTests, equal_error)
{
    ASSERT_EQ(2, 2);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}