#include "types.h"
#include "defs.h"

static uint32 next = 0;

void 
random_seed(void) {
    next = ticks ? ticks : 1; // xorshift requires a nonzero state
}

uint32
random_next(void)
{
  next ^= next << 13;
  next ^= next >> 17;
  next ^= next << 5;
  return next;
}

// implemented simple xorshift prng