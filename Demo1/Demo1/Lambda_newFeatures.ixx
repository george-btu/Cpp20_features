/*************************************/
/* Author: Dr. rer. nat. George Assaf*/
/* Description: lambda functions additions to C++20: Variable  Capture list + SizeOf lambda function type*/
/* Date: 5/2023*/
/************************************/
export module Lambda_newFeatures;
#include<iostream>

namespace LambdaUtils {

	int x = 7;/* a local varible to be captured by lambda function in the capture list */

	export int ObtaineLambdaExpResultofTimes(const int& y)
	{
		/* capturing list of local variables, here x, i.e., [capture list expression](args...) {} is newly introduced for the C++20 */
		/* it is now exactly like in Java*/
		auto times_exp = [x = x + 1](const int& parameter)
			{
				return x * parameter;
			};

		return times_exp(y);
	}

	// remove 'export' modifier to prevent importing this lambda function
	export  auto power = [](const int& parameter)
	{
		return parameter * parameter;
	};

	export void LambdaUnevaluatedContextFeature() {
		// Lambda expression in an unevaluated context (sizeof)
		size_t lambdaSize = sizeof([](int a, int b) { return a + b; });
		std::cout << "Size of lambda: " << lambdaSize << " bytes" << std::endl;
	}
}