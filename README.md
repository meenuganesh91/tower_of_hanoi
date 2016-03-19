# tower_of_hanoi
Implementation of Tower of Hanoi

Tower of Hanoi is a mathematical puzzle that originated in India. It consists of three rods, and a number of disks of different sizes which can slide onto any rod. Monks predicted that the world would end by the time a tower with a height of 64 discs was solved as per the following conditions:
1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3. No disk may be placed on top of a smaller disk.

The optimal number of movements would be 2^n -1, wherein n is the height of the tower.

In the initial implementation I've used a recursive algorithm which uses 2^n -1 moves.
