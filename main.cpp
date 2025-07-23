#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include "prime-factors_test.cpp"


int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}