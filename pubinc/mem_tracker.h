#include <stdlib.h>

#include "../inc/mem_tracker_internal.h"

void 
mem_tracker_validate(
    void);

void *
mem_tracker_alloc(
    size_t size);

void *
mem_tracker_calloc(
    size_t count,
     size_t size);

void mem_tracker_free(
    void);
