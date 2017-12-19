#include <Kraskal.hpp>
#include <catch.hpp>

SCENARIO("coplex init", "[init]"){
	Graph test(0);
  REQUIRE (test.count() == 0);
}
