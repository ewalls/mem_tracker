#include "mem_tracker.h"

void
mem_tracker_validate(
    void)
{

}

void *
mem_tracker_alloc_internal(
    size_t size,
    int lineNumber,
    char *fileName)
{
    Allocation *allocationTracking = NULL;
    void *newAllocation = NULL;

    /* Allocate the tracking structure and all internal values. */
    allocationTracking = (Allocation *)malloc(sizeof(Allocation));

    if (NULL == allocationTracking)
    {
            goto alloc_internal_end;
    }

    allocationTracking->fileName = (char *)calloc(
        strlen(fileName) + 1,
         sizeof(char));

    if(NULL == allocationTracking->fileName)
    {
        goto alloc_internal_end;
    }

    newAllocation = malloc(size);

    if (NULL == newAllocation)
    {
        goto alloc_internal_end;
    }

    allocationTracking->lineNumber = lineNumber;
    allocationTracking->size = size;

    memcpy(allocationTracking->fileName, fileName, strlen(fileName));

    

alloc_internal_end:

    if (NULL == newAllocatoin)
    {
        // Free the allocation tracking structure here.
        // Make a function to handle that.
    }

    return newAllocation;
}

void *
mem_tracker_calloc(
    size_t count,
    size_t size)
{

}

void mem_tracker_free(
    void)
{

}
