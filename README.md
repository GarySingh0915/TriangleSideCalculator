# TriangleSideCalculator
Problem: Given the lengths of the three sides of a triangle, determine whether the triangle is a Right Triangle or not.

The Assignment: Design, develop and test a C++ program that prompts the user to enter the lengths of three sides of a
triangle and then outputs a message indicating whether the triangle is a right triangle or not.

Discussion: In a right triangle, the square of the length of the longest side (the hypotenuse) is equal to the sum of the
squares of the lengths of the two shorter sides. Use the following steps to complete the assignment.
• Input three values representing the lengths of three sides of a triangle. Assume the units for these lengths to be
inches. The program must accept these values in any order – entering the longest value first, second, or last
must not affect the operation of the program.
• Identify the longest side as the apparent hypotenuse.
• If the sum of the lengths of the two shorter sides is less than the length of the longest side, declare the sides to
be “Not a Triangle”, and require the user to re-enter all three side lengths.
• Calculate the expected length of the hypotenuse based on the lengths of the two shorter sides.
• Compare the expected length of the hypotenuse to the length of the apparent hypotenuse. If the two lengths
are “the same”, declare the triangle to be “Right”. Otherwise, declare the triangle to be “Not Right”.
• Display the input values, apparent hypotenuse length, expected hypotenuse length, and result of the
comparison.
