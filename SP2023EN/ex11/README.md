# Midterm and exam problems

## Task 1

Simulate the game of Snake (with an infinite size of the snake) for a given sequence of moves. The dimensions of a field (rectangular matrix) and the position (row, column - zero based) of the apple (the goal) are given. The snake is initially located in the upper left corner (row 0, column 0) and is heading down. While playing the game, the following moves are possible:

F - step forward (move towards to the cell which is in front of the snake)

L - turn left (move to the cell that is left from the head of the snake regarding its current heading and change the heading (direction of movement) of the snake)

R - turn right (move to the cell that is right from the head of the snake regarding its current heading and change the heading (direction of movement) of the snake)

If in some of the moves the snake leaves the field (gets out of the matrix) or if it bites itself (steps for the second time in the same cell) the game ends and a message GAME OVER Ouch should be printed. If the snake gets to the cell where the apple is located, the game ends and a message NJAM should be printed. If the sequence of moves ends and the snake hasn't reached the apple - the game ends and the message GAMEOVER should be printed. At the moment when the snake gets to the cell where the apple is located (even if there are more moves left in the sequence), the game ends, the message NJAM is printed and the rest of the moves should be ignored.

Write a program that for given dimensions of the field (M, N, smaller than 100), the position of the apple K, L (0<=K<M, 0<=L<N), and the commands to move the snake (sequence of characters F, L and R not longer than 1000 characters), will simulate the game.

## Task 2

The length of an array N (N<100) and the elements of the array are read from SI. Write a program that will transform the array in such a way that all even numbers will be moved to the beginning of the array in the same order as they occur in the array and all the odd numbers will follow after the even numbers but in the reverse order than the order in which they occur in the original array. The transformation of the array needs to be done with a separate function. The transformed array should be printed on SO.

Example.

Original array: 5 2 7 12 3 5 10

Transformed array: 2 12 10 5 3 7 5

Explanation: 2,12 and 10 are even numbers so they are the first three elements in the transformed array. 5,7,3,5 are the odd numbers and they follow after the even numbers but in the reverse order.

## Task 3

Sequences of no more than 80 characters (letters, digits, and special characters), each in a separate line, are read from SI. Write a program that will erase all the vowels from the text (regardless of the case of the letters) and will print the resulting text on the standard output in the same format as in the input.


For example:

Input	

Denes e Ubav den a polagame

Strukturno programiranje vo 200ab bcd

Result

Dns  bv dn  plgm

Strktrn prgrmrnj v 200b bcd

## Task 4

The dimensions of a matrix (m<100 and n<100) and its integer elements are read from SI. Print all the elements from the matrix that satisfy the condition: the sum of the remaining elements in the corresponding row and column where the element is located is an odd number.  The numbers should be printed from the left to right and from top to bottom.


Input:

3 3

1 2 3

4 5 6

7 8 9


Output:

2 4 6 8

Explanation: 2 is in the first row, second column. The rest of the numbers that lay in the first row are 1 and 3, and the numbers in the second column are 5 and 8, so 1+3+5+8 is odd, and 2 is printed. 4 -> 1+7+5+6 is odd, ...


## Task 5

Read from SI input lines of text. Each line has no more than 80 characters and the characters are letters, special characters, and digits. The first line in the file has a row number of 1, the second has a row number of 2, etc. Write a program that will print the row number of the line with the longest subarray that contains only digits. If the input does not contain any lines with numbers, the program should print a message There are no such lines. If there is more than one line with the same max number of letters, than the row number of the last read line is printed.
For example:

Input	

never!?!odd.27,or12even356

A_man_a*$Plan510123a_canal,PanamA.

Rise?!12to45vote&*siR

Result
2

## Task 6

From SI read N strings not longer than 80 chars. At the beginning of the program read two integers:

N - number of strings you are going to read
X - shifting size.
Each of the read strings should be transformed in such a way that lowercase and uppercase letters (a-z, A-Z) are replaced with the same letter shifted X places afterwards in the alphabet (a-z). If you overflow the range of alphabet, continue cyclic from the beginning of the alphabet. Transformed string should be printed on SO.

Transformation of a string should be implemented in a separate recursive function.

Example:

Welcome -> transformed with shift 5 -> Bjqhtrj