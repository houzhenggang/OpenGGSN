/*
------------------------------------------------------------------------------
By Bob Jenkins, September 1996.
lookupa.h, a hash function for table lookup, same function as lookup.c.
Use this code in any way you wish.  Public Domain.  It has no warranty.
Source is http://burtleburtle.net/bob/c/lookupa.h
------------------------------------------------------------------------------
*/

/* Uncommented by Jens Jakobsen 20020717 
#ifndef STANDARD
#include "standard.h"
#endif
*/

#ifndef LOOKUPA
#define LOOKUPA

typedef  unsigned long  int  ub4;   /* unsigned 4-byte quantities */
typedef  unsigned       char ub1;

#define CHECKSTATE 8
#define hashsize(n) ((ub4)1<<(n))
#define hashmask(n) (hashsize(n)-1)

ub4 lookup(/*_ ub1 *k, ub4 length, ub4 level _*/);
void checksum(/*_ ub1 *k, ub4 length, ub4 *state _*/);

#endif /* LOOKUPA */
