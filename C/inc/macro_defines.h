#ifndef __MACRO_DEFINE_H_
#define __MACRO_DEFINE_H_

#define MIN(a, b) ({ \
        typeof(a) _min1 = (a); \
        typeof(b) _min2 = (b); \
        (void)(&_min1 == &_min2); \
        _min1 > _min2 ? _min2:_min1;})



#endif
