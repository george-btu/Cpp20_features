
/*************************************/
/* Author: Dr. rer. nat. George Assaf*/
/* Author: how to use concepts for template functions*/
/* Date: 5/2023*/
/************************************/
export module Concept_TemplateModule;

#include<algorithm>
#include<vector>
#include<list>
#include<iostream>

using namespace std;
namespace Concepts {

	// Concept definition
	/*This concepts says that a container type passed c must have a member function called find().*/
	template <typename Container>
	concept HasFindMember = requires(Container c) {
		{ c.find(0) } -> std::same_as<typename Container::iterator>;
	};


	// Templated function using the concept
	export template <typename Container>
	bool contains_element(const Container& container, const typename Container::value_type& value) {
		if constexpr (HasFindMember<Container>) {
			/*if the container, e.g., an std::vector<type> has the member function find(), then search for the passed value
	        using the the find function, i.e., container.find(val)
	        */
			return container.find(value) != container.end();
		}
		else {
			/*if the container does not have the find(val) function, then use the std::find(iterator begin(), iterator end(), value)*/

			return std::find(container.begin(), container.end(), value) != container.end();
		}
	}


	/*test function*/
	export void TestConcepts() {
		std::vector<int> vec = { 1, 2, 3, 4, 5 };
		std::list<int> lst = { 6, 7, 8, 5, 10 };

		int searchValue = 5;

		// try to find search value in a vector
		if (contains_element(vec, searchValue)) {
			cout << "Vector contains " << searchValue << std::endl;
		}
		else {
			cout << "Vector does not contain " << searchValue << std::endl;
		}

		// try to find search value in a list
		if (contains_element(lst, searchValue)) {
			cout << "List contains " << searchValue << std::endl;
		}
		else {
			cout << "List does not contain " << searchValue << std::endl;
		}
	}
	
}