#include <stdio.h>
#include <stdlib.h>
#ifdef IMP
#include "reference_stackADT.h"
#else
#include "stackADT.h"
#endif
#include "memtrace.h"

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/* Stack structure */
typedef struct{
    int top;
    unsigned int size;
    void *data;
} Stack;

