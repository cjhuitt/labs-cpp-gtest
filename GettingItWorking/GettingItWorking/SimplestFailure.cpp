
#include "gtest/gtest.h"

TEST(ThatWeFailQUickly, TautologiesAreTrue) {
	EXPECT_TRUE(false);
}

int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
