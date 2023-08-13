
/*************************************/
/* Author: Dr. rer. nat. George Assaf*/
/* Description:define the partion module Point of the module BasicPlane.Figures*/
/* Date: 5/2023*/
/************************************/



/*defines a module partition, Point, that's part of the module BasicPlane.Figures*/
/*The naming convention of the module file is interpreted by the compiler as module partition file,
The partion Point is part of the module Figures, reffered to by hyphen '-' and 'Point' hereafter*/
export module BasicPlane.Figures:Point; 


/* the sturct Point will be exported to the program importing this partion*/
export struct Point
{
    int x, y;
};