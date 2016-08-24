#include <stdlib.h>

typedef struct Allocation
{
    char *fileName;
    int lineNumber;
    int size;
    struct Allocation *next;
} Allocation;

static Allocation *allocationHead = NULL;

bool
addToAllocationList(
    Allocation *allocation
);

void
freeAllocationEntry(
    Allocation *allocation);
