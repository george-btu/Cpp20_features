// MyProgram.cpp
#include <iostream>
 
import Example;
import Lambda_newFeatures;
import BasicPlane.Figures;
import Concept_TemplateModule;


using namespace std;

int main()
{

	/************************Modules*******************************/

	cout << "The result of f() is " << Example_NS::f() << endl; // 42
	// int i = Example_NS::f_internal(); //supresses Error C2039
	 //cout << i << endl;
	// int j = ANSWER; //supresses Error C2065

	Rectangle r{ {1,8}, {11,3} };

	cout << "area: " << area(r) << '\n';
	
	cout << "width: " << width(r) << '\n';

	/************************Lambda functions*******************************/


	int argument = 5;

	cout << "Lambda Expression with capturing the local value x and a given argument : " << LambdaUtils::ObtaineLambdaExpResultofTimes(argument) << endl;

	cout << "Lambda simple power without capturing local  variables: " << LambdaUtils::power(argument)<<endl;

   /* Lambda function with SizeOf of Lambda result type */
	LambdaUtils::LambdaUnevaluatedContextFeature();


	/************************Concepts for Tempalte functions*******************************/

	Concepts::TestConcepts();
    

}