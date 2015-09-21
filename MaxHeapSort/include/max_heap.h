/*
 * max_heap.h
 *
 *  Created on: 2015年9月10日
 *      Author: bob.sun
 */

#ifndef INCLUDE_MAX_HEAP_H_
#define INCLUDE_MAX_HEAP_H_

extern int LeftLeafOf(int i);
extern int RightLeafOf(int i);
extern int RootOf(int i);
extern int LengthOf(int* array);
extern void Exchange(int* array, int l, int r);
extern void Build(int* array, int arraySize);

#endif /* INCLUDE_MAX_HEAP_H_ */
