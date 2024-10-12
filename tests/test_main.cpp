#include "gtest/gtest.h"
#include "project_name/example.h"

TEST(ExampleTest, TestExampleFunction) {
    // Test exampleFunction (Example test case)
    ASSERT_TRUE(true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
