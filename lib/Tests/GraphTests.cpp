#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Structures/ClassName.h"
#include "Structures/Graph.h"
#include "Structures/LinkedList.h"

using testing::Eq;

namespace {
    class UnitTesting2 : public testing::Test {
    public:
        Graph *pGraph = new Graph();

        void newGraph();
        UnitTesting2(){
            Graph graph;
            std::cout<<pGraph->addVertex(9);
        }
    };
    void UnitTesting2::newGraph() {
        pGraph->addVertex(0);
        pGraph->addVertex(1);
        pGraph->addVertex(2);
        pGraph->addVertex(3);
        pGraph->addVertex(4);
        pGraph->addVertex(5);
        pGraph->addVertex(6);
        pGraph->addVertex(7);
        pGraph->addVertex(8);

        pGraph->addEdge(0, 1, 3);
        pGraph->addEdge(0, 3, 2);
        pGraph->addEdge(0, 8, 4);
        pGraph->addEdge(1, 7, 4);
        pGraph->addEdge(2, 3, 6);
        pGraph->addEdge(2, 5, 1);
        pGraph->addEdge(2, 7, 2);
        pGraph->addEdge(3, 4, 1);
        pGraph->addEdge(4, 8, 8);
        pGraph->addEdge(5, 6, 8);
        pGraph->floydWarshall();


    }
}

TEST_F(UnitTesting2, Vertex){
    newGraph();
    ASSERT_EQ(1, pGraph->addVertex(9));
}
TEST_F(UnitTesting2, VertexRepeat){
    newGraph();

    EXPECT_EQ(1, pGraph->addVertex(3));
}
TEST_F(UnitTesting2, EnteringSameVerticesInEdgeAdding){
    newGraph();
    EXPECT_EQ(1, pGraph->addEdge(3,3,6));
}
TEST_F(UnitTesting2, AddNeagtiveWeight) {
    newGraph();
    EXPECT_EQ(1, pGraph->addEdge(1,2,-6));
}
TEST_F(UnitTesting2, Add0Weight) {
    newGraph();
    EXPECT_EQ(1, pGraph->addEdge(1,2,0));
}
TEST_F(UnitTesting2, AddEdgeWIthoutExistentVertex) {
    newGraph();
    EXPECT_EQ(1, pGraph->addEdge(22,2,5));
}

TEST_F(UnitTesting2, AddExistentsAndConnectedVertex) {
    newGraph();
    EXPECT_EQ(1, pGraph->addEdge(0,1,3));
}
TEST_F(UnitTesting2, GettShortestROute {
    newGraph();
    EXPECT_EQ(1, pGraph->addEdge(0,1,3));
}
