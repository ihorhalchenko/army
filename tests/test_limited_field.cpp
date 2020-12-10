#include "../utils/LimitedField.h"
#include "catch.hpp"

TEST_CASE( "test LimitedField", "[LimitedField]" ) {

    LimitedField<int> f1 = LimitedField<int>(100);
    LimitedField<int> f2 = LimitedField<int>(100);
    LimitedField<int> f3 = LimitedField<int>(50);


    REQUIRE( f1.getValue() == 100 );
    REQUIRE( f1.getLimit() == 100 );

    SECTION( "LimitedField: comparison operators test" ) {
        REQUIRE(f1 == f2);
        REQUIRE(f1 == 100);
        REQUIRE(f1 != f3);
        REQUIRE(f1 != 50);

        REQUIRE_FALSE(f1 == f3);
        REQUIRE_FALSE(f1 != 100);

        REQUIRE(f1 > 50);
        REQUIRE(f1 >= f2);
        REQUIRE(f1 <= f2);
        REQUIRE(f1 <= 150);
        REQUIRE(f3 < f2);
        REQUIRE(f3 < 100);
    }
    SECTION( "LimitedField: arithmetic operators test" ) {
        REQUIRE(f1 + f2 == 200);
        REQUIRE(f1 + f2 == f3 * 4);
        REQUIRE(f1 / f2 == f3 / 50);
        REQUIRE(f1 * 2 ==  200);
        REQUIRE(f1 - f2 == 0);
        REQUIRE(f1 - 100 == 0);
        REQUIRE(f3 - f1 == -50);
    }
    SECTION( "LimitedField: change value test" ) {
        for ( int i = 0; i < 10; i++ ) {
            f1 -= 30;
        }
        REQUIRE(f1 == 0);

        for ( int i = 0; i < 10; i++ ) {
            f1 += 30;
        }
        REQUIRE(f1 == 100);

        for ( int i = 0; i < 10; i++ ) {
            f1 -= f3;
        }
        REQUIRE(f1 == 0);

        for ( int i = 0; i < 10; i++ ) {
            f1 += f3;
        }
        REQUIRE(f1 == 100);
    }
    SECTION( "LimitedField: change value test" ) {
        for ( int i = 0; i < 10; i++ ) {
            f1 -= 30;
        }
        REQUIRE(f1 == 0);

        for ( int i = 0; i < 10; i++ ) {
            f1 += 30;
        }
        REQUIRE(f1 == 100);

        for ( int i = 0; i < 10; i++ ) {
            f1 -= f3;
        }
        REQUIRE(f1 == 0);

        for ( int i = 0; i < 10; i++ ) {
            f1 += f3;
        }
        REQUIRE(f1 == 100);
    }
    SECTION( "LimitedField: final tests" ) {
        f2 = f3;

        REQUIRE(f2 == f3);

        f3 = 200;

        REQUIRE(f3 == 200);
    }
}