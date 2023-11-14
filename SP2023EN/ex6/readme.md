Two integers X and N are read from SI, followed by N natural numbers (all of them larger than 9). For each read number, check whether the number X is a divisor of the number which is constructed by relocating the first digit of the number to the end of the number.

For each read number print YES on the screen if the condition is satisfied, and print NO otherwise.

Example: The number 1234 after the relocation of the first digit to the end of the number will be 2341. The number 10 will be 1, the number 200 will be 2.

Example.
Input
2 2
43
100

Output
YES
NO

An explanation for the example:
X=2, N=2 (the program should read two more natural numbers)
43 -> 34, 2 is divisor of 34 (output: YES)
100 -> 1, 2 is not a divisor of 1 (output: NO)


For example:

Input	Result
2 2
43
100
YES
NO
