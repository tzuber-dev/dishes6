#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"


TEST_CASE("list does not crash upon reaching the maximum space") {
ClassTwo listitem;

 listitem.push(Dish("desc1"));
 listitem.push(Dish("desc1"));
 listitem.push(Dish("desc1"));
 listitem.push(Dish("desc1"));

 REQUIRE(listitem.size() == 4);


 listitem.push(Dish("overlimit"));


 REQUIRE(listitem.size() == 4);




};

TEST_CASE( "basic peek method works" ) {
 ClassTwo listitem;
 Dish item1("Item1");
 Dish item2("Item2");


 listitem.push(item1);
 listitem.push(item2);


 Dish verybeginningdish= listitem.peek();


 REQUIRE(verybeginningdish.get_description() == "Item2");
 REQUIRE(listitem.size() == 2);

};



