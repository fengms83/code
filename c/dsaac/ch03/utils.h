#pragma once

#include <stdio.h>
#include <assert.h>
#include "list.h"

typedef int BOOL;
#define TRUE  1
#define FALSE 0

BOOL is_equal(struct list* head, int* array, int len);