#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Structures/ClassName.h"
#include "Structures/LinkedList.h"

using testing::Eq;

namespace {
    class UnitTesting : public testing::Test {
    public:
        LinkedList *prueba = new LinkedList();
        void newList(int);
        UnitTesting(){
            LinkedList List;
        }
    };
    void UnitTesting::newList(int num) {
        prueba->append(num);
    }
}

TEST_F(UnitTesting, Test1_Exists){

    newList(45);
    ASSERT_EQ(true, prueba->exists(45));
}

TEST_F(UnitTesting, Test2_Head){
    newList(5);
    ASSERT_EQ(5, prueba->getHead()->getData());
}

TEST_F(UnitTesting, Test3_Lenght){
    newList(34);
    newList(27);
    ASSERT_THAT(2, testing::Eq(prueba->getLength()));

}
TEST_F(UnitTesting,Test4_GetBy_Index){
    newList(33);
    newList(12);
    newList(66);
    newList(4);
    ASSERT_EQ(66, prueba->getByIndex(2)->getData());
}


