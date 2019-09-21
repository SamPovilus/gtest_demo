#include <gtest/gtest.h>
#include "rectangle.hpp"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST (RectangleTest, area) { 
    auto testRect = new Rectangle();
    testRect->set_height(1);
    testRect->set_width(1);
    EXPECT_EQ (1, testRect->get_area());
    testRect->set_width(2);
    EXPECT_EQ (2, testRect->get_area());

    testRect->set_height(2);
    EXPECT_EQ (4, testRect->get_area());
}

TEST (Rectangle, zero) { 
    auto testRect = new Rectangle();
    testRect->set_height(1);
    testRect->set_width(1);
    EXPECT_EQ (1, testRect->get_area());
    testRect->set_width(0);
    EXPECT_EQ (0, testRect->get_area());
}