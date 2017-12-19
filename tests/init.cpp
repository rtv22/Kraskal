#include <Kraskal.hpp>
#include <catch.hpp>

SCENARIO("", "[init]"){
	Graph test(6);
	test.AddWeightedEdge(0, 1, 6);
	test.AddWeightedEdge(0, 2, 1);
	test.AddWeightedEdge(0, 3, 5);
	test.AddWeightedEdge(1, 0, 6);
	test.AddWeightedEdge(1, 2, 5);
	test.AddWeightedEdge(1, 4, 3);
	test.AddWeightedEdge(2, 0, 1);
	test.AddWeightedEdge(2, 1, 5);
	test.AddWeightedEdge(2, 3, 5);
	test.AddWeightedEdge(2, 4, 6);
	test.AddWeightedEdge(2, 5, 4);
	test.AddWeightedEdge(3, 0, 5);
	test.AddWeightedEdge(3, 2, 5);
	test.AddWeightedEdge(3, 5, 2);
	test.AddWeightedEdge(4, 1, 3);
	test.AddWeightedEdge(4, 2, 6);
	test.AddWeightedEdge(4, 5, 6);
	test.AddWeightedEdge(5, 3, 2);
	test.AddWeightedEdge(5, 2, 4);
	test.AddWeightedEdge(5, 4, 6);
	test.kruskal();
	Graph test_1(6);
	test_1.AddWeightedEdge(0, 2, 1);
	test_1.AddWeightedEdge(3, 5, 2);
	test_1.AddWeightedEdge(1, 4, 3);
	test_1.AddWeightedEdge(2, 5, 4);
	test_1.AddWeightedEdge(1, 2, 5);
	REQUIRE(test == 6);
	REQUIRE(test_1 == 6);
}


