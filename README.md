# structured-programming-practice

## students name: kamwine collins , B39055
## course : CS Structured programming
## submission date: 29 september 2026

this is a repository that contains structured programming practice exercises
## exercise 1 - basic output
source : Dietel & Dietel, C How to program , 9th Editon , Chapter 2, Exercise 2.9a, page 132,
what the program does : Displays a simple greeting and some biodata about me using single printf statements.
concepts used : printf, escape sequences (\n)
How it works : The program calls printf multiple times to print row of characters containing that info,mation
## exercise 2-input process output 
source : Dietel & Dietel, C how to program , 9th edition , chapter 2, exercise 2.16, page 134
what the program does : accepts raw input data such as student grades, performs structured operations on the data and presents clear formatted results to the user
concepts used:`printf`, string literals, escape sequence `\n`.
How it works: The program has no variables and reads no input. Each `printf` call prints one line, and `\n` moves the cursor to the next line, so the output appears in the same order as the statements.
## exercise 3-decisions
source: dietel & dietel, c How to program , 9th Edition,chapter 2, exercise 2.22 ,page 134 
What the program does: Reads an integer and displays whether it is odd or even.
Concepts used: `if...else`, remainder operator `%`, equality operator `==`.
How it works: Any multiple of 2 leaves a remainder of 0 when divided by 2. The program checks `number % 2 == 0`. If that is true the number is even, otherwise it is odd.
## exercise 4- basic loop
source :dietel & dietel , c How to program , 9th Edition, chapter 3 , exercise 3.24
What the program does: Prints the odd numbers 1, 3, 5, 7, 9, 11 and 13.
Concepts used: `for` loop, integer variable, `printf`.
How it works: The loop starts at `n = 1` and runs while `n <= 13`. After each pass it adds 2 to `n` instead of 1, so it only ever visits odd numbers.
## exercise 5- loop & calculation
source: Dietel & Dietel, c How to program , 9th Edition ,Chapter 4, exercise 4.10 page 224
what the progam does : uses a counter_controlled for loop to step through every whole number celsius temperature from 30 to 50 inclusive . On each iteration it converts the current celsisus value to Fahrenheit using the formula: F= 9/5 *c +32 and prints both values as a row in atwo column table
concepts used: for loops (counter - controlled repetition) printf with tab- separated columns and formatted floats ,loop bounds(celsius < = 50)
how the program works: Each time through the loop , C computes one Fahrenheit value and prints one line- celsisus and Fahrenheit side by side. After 21 iterations (30 through 50), you get the full table 
## exercise 6-loop input
source : Dietel & Dietel , C How to program , 9th Edition , Chapter 4 , exercise 3.17, pg 177
What the program does: Reads the principal, interest rate and term in days for several loans and displays the simple interest for each. The user enters -1 as the principal to stop.
Concepts used: `while` loop, sentinel value, `scanf` inside a loop, arithmetic.
How it works: The principal is read once before the loop. While it is not -1, the program reads the rate and days, calculates `interest = principal * rate * days / 365` and prints it. It then reads the next principal at the bottom of the loop, so the sentinel is checked again on every repeat.
## exercise 7- loop decision
Source: Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 4, Exercise 4.17 (Calculating Credit Limits), p. 225.
What the program does: For three customers, reads the account number, the credit limit before the recession and the current balance. It calculates the new limit (half of the old one), prints it, and reports whether the balance exceeds it. It also counts how many customers are over their limit.
Concepts used: `for` loop, `if...else` inside a loop, counter variable, arithmetic.
How it works: The loop runs three times, once per customer. Each time, `newCreditLimit = oldCreditLimit / 2`. An `if...else` compares `balance` with `newCreditLimit`. If the balance is higher, a warning is printed and `overLimitCount` goes up by 1. The final count is printed after the loop. 
## exercise 8- interactive Console program
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.19, page 226.
 What the program does: An online retailer sells five products at fixed prices. The user repeatedly enters a product number and the quantity sold; the program looks up the price with a switch statement, adds the line total to a running total, and stops when 0 is entered, then prints the total retail value of all sales.
 Concepts used: switch multiple-selection statement, sentinel-controlled while loop, continue, accumulator variable.
 How it works: A priming read gets the first product number. While it isn't 0, a switch picks the price for the given product (or, for an invalid number, prints an error and uses continue to skip straight to the next read). Otherwise the quantity is read, price * quantity is added to total, and the next product number is read at the bottom of the loop. After the loop ends, the total is printed.


