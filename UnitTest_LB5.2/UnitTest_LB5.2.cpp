#include "pch.h"
#include "CppUnitTest.h"
#include "..\LB5.2\LB5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLB52
{
	TEST_CLASS(UnitTestLB52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1;
			A(1., 0., a);
			Assert::AreEqual(1., a);
		}
	};
}
