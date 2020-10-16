#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        ClassName obj;
        ClassDeclaration(){
            obj;
        }
    };
}
TEST_F(ClassDeclaration, nameOfTheTest1){
    obj.setAge(22);
    ASSERT_EQ(22, obj.getAge());
    ASSERT_EQ("", "");
}
TEST_F(ClassDeclaration, nameOfTheTest2){
    obj.setAge(23);
    ASSERT_THAT(23, testing::Eq(obj.getAge()));
    ASSERT_EQ("", "");
}
