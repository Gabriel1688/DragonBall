#include <stdlib.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
int main(int argc, char **argv)
{
    int result;
    ::testing::GTEST_FLAG(throw_on_failure) = false;
    ::testing::GTEST_FLAG(output) = "xml:./";
    testing::InitGoogleMock(&argc,argv);
    testing::InitGoogleTest(&argc,argv);
    result =  RUN_ALL_TESTS();
    std::cout << "Result = " << result << "( 0 means OK, otherwise NOK)" << std::endl;
    return result;
}
