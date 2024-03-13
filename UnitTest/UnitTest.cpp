#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.1_STR/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestCount) {
			string testString = "ab***cd***ef***gh";
			int expectedCount = 3;
			int actualCount = Count(testString);
			Assert::AreEqual(expectedCount, actualCount);
		}

		TEST_METHOD(TestChange) {
			string testString = "ab***cd***ef***gh";
			string expectedString = "ab!!cd!!ef!!gh";
			string actualString = Change(testString);
			Assert::AreEqual(expectedString, actualString);
		}
	};
}
