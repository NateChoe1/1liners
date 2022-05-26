static int tape[2000];
static int ptr;
static int state;
/* These aren't set to anything because I count that as logic. */

#define HALT -0x8000
#define TURING_START int main(int argc) { return \
	(argc >= 0) ? ((ptr = 1000, state = 0, memset(tape, 0, sizeof tape), main(-1))) : /* Initialize variables */ \
	(state == HALT) ? 0 : /* Handle halt state */
#define TURING_END 1 ;}

#define LEFT -1
#define RIGHT 1

#define STATE(num, newsym0, dir0, newstate0, newsym1, dir1, newstate1) \
	(state == num) ? ((tape[ptr] ? \
			(tape[ptr] = !!newsym1, ptr += dir1, state = newstate1) : \
			(tape[ptr] = !!newsym0, ptr += dir0, state = newstate0)), \
		main(-1) \
	) : 
