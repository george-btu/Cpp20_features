# Cpp20_features
This repo is about the new C++ standaard (C++20). It gives some demos on major C++ additions including Modules, ranges, STL algos, and many other features.

**Modules rather than Header files**
	• Modules: They are introduced in c++20 to address the inclusion of header files in C++ programs. Using modules is a more organised and effective way to manage code dependencies
		○ C++ header files can lead to redundant compilation work and longer compilation time. By using "Modules" allow for the separation of interface declarations and definitions. The Module Inetrface Units MIUs consist of two parts.
			§ Interface: declarations that are used by other modules (.ixx files)
			§ Implementation: contains the actual definitions and details of the module (cpp files).
		○ Performance Boosting:
			§ The compiler only processes a module's interface once, even if it is included many times by multiple parts of the program. This greatly reduces redundant compile work and significantly compile time.
   
*modules don't leak macro definitions or private implementation details.

		○ Syntaxt: 
			§ the keyword 'module' is used to define a module
			§ The keyword 'import' is used to bring in dependencies
                   § The keyword 'export; is used to declare symbols that should be accessible to other modules

      In the given Demo, we give two sample examples. the first is just a simple module interface (with implementation) Example.ixx containing a Namespace with two functionalities.
       - The first is defined to be used internally  in the Namespace
       - The other one  will be specified as exported by means of the 'export' modifier, to be used by other API by using the import keyword
  *The second sample demo is more modular, where we explore the following:
  		§ Create and import modules
			§ Create a primary interface  unit
			§ Create a module partion file 
      § Create a module unit implementation file
      We define a general Module for Shapes (BasicPlane.ixx), e.g., Point, Rectangle ... etc. Each of these shapes is defined as a partion of the this module. Here the naming convension of the partions files is crucial for the compiler: In our example 
      1. BasicPlane.Figures-Point.ixx is the partion module that defines the Point structure and modify this type to be exported to other modules or APIs
      2. BasicPlane.Figures-Rectangle.ixx: The interface module for defining the Rectangle structure together with its basic methods, e.g., Area. this Partion module import the Point partionbe used to define the Rectangle structure


      Improvements for Lambda functions:
      1. Now it is allowed to use a variable capture list, exactly as in Java. The syntax including the capture list is as follows:
      type lmabda_name = [capturte list](lambda args ...) {body};
      2. It is allowed to use the sizeof operator with a lambda expression to determine the size of the lambda's type
      

