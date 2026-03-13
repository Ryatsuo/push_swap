# push_swap

push_swap is a 42 School algorithm project where the goal is to sort a stack of integers using only a limited set of operations and two stacks: A and B.

The program must print the list of operations required to sort stack A in ascending order while minimizing the number of moves.

## Project goals

- Practice linked-list based stack manipulation
- Build a sorting strategy under strict operation constraints
- Reduce the total number of instructions
- Handle parsing errors and edge cases correctly
- Follow 42 coding standards

## Rules

- Two stacks are available: A and B
- At start, A contains all numbers and B is empty
- The final state must be A sorted in ascending order

Allowed operations:

- sa, sb, ss
- pa, pb
- ra, rb, rr
- rra, rrb, rrr

## Algorithm strategy used in this project

This implementation uses a hybrid approach, not a single classic algorithm like radix only.

1. Index normalization

Each input value is mapped to a rank index (0 to n-1). Sorting decisions are then made on indexes, not raw values.

2. Dynamic chunk push from A to B

The program pushes values from A to B using a dynamic window (chunk threshold):

- small inputs: chunk end starts around 2
- medium inputs: chunk end starts around 13
- large inputs: chunk end starts around 30

If the top of A is inside the current chunk, it is pushed to B and the chunk grows. Otherwise, A is rotated in the direction that brings smaller values faster.

3. Smart reconstruction from B to A

When rebuilding A, the program compares two options:

- push current maximum first
- or push next-maximum first, then maximum

It computes a rotation cost for both choices and selects the cheaper path. This greedy choice helps reduce extra rotations.

In short, the algorithm combines:

- rank/index preprocessing
- chunk-based partitioning
- cost-based greedy decisions when reinserting

## Build

```bash
make
```

Other targets:

```bash
make clean
make fclean
make re
```

## Usage

Run with either split arguments or a single quoted string:

```bash
./push_swap 2 1 3 6 5 8
./push_swap "2 1 3 6 5 8"
```

The output is the list of operations to execute.

## Quick random tests (100 / 500 numbers)

Generate unique random numbers, run push_swap, and count instructions:

```bash
ARG=$(shuf -i 1-1000 -n 100 | tr '\n' ' ')
./push_swap $ARG | wc -l

ARG=$(shuf -i 1-5000 -n 500 | tr '\n' ' ')
./push_swap $ARG | wc -l
```

If you have checker available, you can also validate correctness:

```bash
ARG=$(shuf -i 1-1000 -n 100 | tr '\n' ' ')
./push_swap $ARG | ./checker_linux $ARG

ARG=$(shuf -i 1-5000 -n 500 | tr '\n' ' ')
./push_swap $ARG | ./checker_linux $ARG
```

## Error handling

The program prints Error and exits when:

- an argument is not a valid integer
- a value is outside int range
- duplicate values are provided

## Notes

- If input is already sorted, no operations are printed.
- If there is only one element, the program returns immediately.
