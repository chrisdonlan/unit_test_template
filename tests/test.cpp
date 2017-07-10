//
// Created by cdonlan3-gtri on 7/10/2017.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "YourClass.h"

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        YourClass obj;
        ClassDeclaration(){
            obj; // make method here
        }
    };
}

TEST_F(ClassDeclaration, nameOfTest1){
    ASSERT_EQ("","");
}
TEST_F(ClassDeclaration, nameOfTest2){
    ASSERT_EQ("","1");
}