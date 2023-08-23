01.Problem: Drawing a Fort
Write a program that reads from the console an integer n and draws a fort 2 * n columns wide and n 
rows tall, as in the examples below. The left and right columns inside are n / 2 wide.
Input Data
The input is an integer n within the range [3 … 1000].
Output Data
Print on the console n text rows, depicting the fort exactly as in the examples.
Sample Input and Output
Input Output 
3
      /^\/^\
      |    |
      \_/\_/
Input Output
4
      /^^\/^^\
      |      |
      |      |
      \__/\__/
Input Output
5
      /^^\__/^^\
      |        |
      |        |
      |   __   |
      \__/  \__/
Hints and Guidelines
Let’s solve the problem step by step: read the input, perform some calculations, print the fort roof, 
print the fort body, print the fort base.

02.Problem: Butterfly
Write a program that takes an integer n from the console and draws a butterfly 2 * n - 1 columns
wide and 2 * (n - 2) + 1 rows tall, as in the examples below. The left and right parts are n - 1 wide.
Input Data
The input is an integer n within the range [3 … 1000].
Output Data
Print on the console 2 * (n - 2) + 1 text rows, depicting the butterfly as in the examples.
Sample Input and Output
Input Output 
3
      *\ /*
        @ 
      */ \*
Input Output
5
      ***\ /***
      ---\ /---
      ***\ /***
          @ 
      ***/ \***
      ---/ \---
      ***/ \***
Input Output
7
      *****\ /*****
      -----\ /-----
      *****\ /*****
      -----\ /-----
      *****\ /*****
            @ 
      *****/ \*****
      -----/ \-----
      *****/ \*****
      -----/ \-----
      *****/ \*****
Hints and Guidelines
We can see in the explanation that the input data will be taken from only one row which contains an 
integer within the range [3 … 1000]. This is why we will use a variable of int type.

03.Problem: "Stop" Sign
Write a program that takes an integer n from the console and draws a warning sign STOP with size 
as in the examples below.
Input Data
The input is an integer N within the range [3 … 1000].
Output Data
Print on the console text lines, which depict the warning sign STOP, as in the examples.
Sample Input and Output
Input Output 
3
      ...._______....
      ...//_____\\...
      ..//_______\\..
      .//_________\\.
      //___STOP!___\\
      \\___________//
      .\\_________//.
      ..\\_______//..
Input Output
6
      ......._____________.......
      ......//___________\\......
      .....//_____________\\.....
      ....//_______________\\....
      ...//_________________\\...
      ..//___________________\\..
      .//_____________________\\.
      //_________STOP!_________\\
      \\_______________________//
      .\\_____________________//.
      ..\\___________________//..
      ...\\_________________//...
      ....\\_______________//....
      .....\\\___________//.....
Hints and Guidelines
We can see from the explanation that the input data will come from only one line which contains an 
integer within the range [3 … 1000]. Therefore, we will use a variable of int type.


