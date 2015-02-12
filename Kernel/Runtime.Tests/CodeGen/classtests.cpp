#include "codegentests.h"

#include "../../Runtime/assembler.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace r;


namespace RuntimeTests
{


	TEST_CLASS(CodeGenTests)
	{
		BEGIN_TEST_CLASS_ATTRIBUTE()
			TEST_CLASS_ATTRIBUTE(L"Category", L"CodeGen")
			END_TEST_CLASS_ATTRIBUTE()
	public:


		TEST_METHOD(NewObjectTests)
		{
			CompileAndVerify("var obj = new Object(); obj.x = 123; log(obj.x)", "123");
		}

	};
}