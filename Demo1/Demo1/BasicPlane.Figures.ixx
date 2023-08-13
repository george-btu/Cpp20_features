/*************************************/
/* Author: Dr. rer. nat. George Assaf*/
/* Description: Modules in C++20*/
/* Date: 5/2023*/
/************************************/

/* the export module keywords mark this file as a primary module interface unit*/
export module BasicPlane.Figures; // keywords export module marks this as a primary module interface unit

export import :Point; // bring in the Point partition, and export it to consumers of this module
export import :Rectangle; // bring in the Rectangle partition, and export it to consumers of this module