/**
 * @file calc_header.h
 * @author 260281 
 * @calculator operations
 */
#ifndef __calc_header_H__
#define __calc_header_H__
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
/**
 * stucture consisting of val1 and val2 as member variables
 * @param val1
 * @param val2
 */
typedef struct cal{
    int value1;
    int value2;
}cal;

/*function prototypes for all functions*/
/**
* adds the val1 and val2 and prints the result
* @param[in] val1
* @param[in] val2 
* @return Result of val1 + val2
*/
int addn(cal *obj);
/**
* subtracts the val2 from val1 and prints the result
* @param[in] val1
* @param[in] val2
* @return Result of val1 - val2
*/
int subn(cal *obj);
/**
* multiplies the val1 and val2 and prints the result
* @param[in] val1 
* @param[in] val2
* @return Result of val1 * val2
*/
int muln(cal *obj);
/**
* divides the val1 and val2 and prints the result
* @param[in] val1 
* @param[in] val2 
* @return Result of val1 / val2
*/
int divn(cal *obj);
/**
* power of val1 and val2 and prints the result
* @param[in] val1
* @param[in] val2 
* @return Result of val1 ^ val2
*/
int pown(cal *obj);
/**
* squareroot of val1
* @param[in] val1; 
* @return Result of sqrt of val1
*/
int rootn(cal *obj);
/**
* sin of val1
* @param[in] val1 (val1 is in radian)
* @return Result of sin of val1
*/
int sinn(cal *obj);
/**
* cos of val1
* @param[in] val1 (val1 is in radian)
* @return Result of cos of val1
*/
int cosn(cal *obj);
/**
* tan of val1
* @param[in] val1 (val1 is in radian)
* @return Result of tan of val1
*/
int tann(cal *obj);
/**
* sec of val1
* @param[in] val1 (val1 is in radian)
* @return Result of sec of val1
*/
int sec(cal *obj);
/**
* cose of val1
* @param[in] val1 (val1 is in radian)
* @return Result of cosec of val1
*/
int cosec(cal *obj);
/**
* cot of val1
* @param[in] val1 (val1 is in radian)
* @return Result of cot of val1
*/
int cot(cal *obj);
#endif  /* #define __calc_header_H__ */