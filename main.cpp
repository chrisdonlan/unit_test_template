#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc,argv);
    int test_result = RUN_ALL_TESTS();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}