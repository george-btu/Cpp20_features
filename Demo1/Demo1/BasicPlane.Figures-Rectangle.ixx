
/*************************************/
/* Author: Dr. rer. nat. George Assaf*/
/* Description:define the partion module Rectangle of the module BasicPlane.Figures*/
/* Date: 5/2023*/
/************************************/

export module BasicPlane.Figures:Rectangle; // defines the module partition Rectangle

import :Point;/*to import the module partition "Point"*/

export struct Rectangle // make this struct visible to importers
{
    Point ul, lr;
};

// These functions are declared, but will
// be defined in a module implementation file
export int area(const Rectangle& r);
export int height(const Rectangle& r);
export int width(const Rectangle& r);