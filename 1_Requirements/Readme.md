# Requirements
## Introduction

Scientific calculators usually have more features than a standard function calculator like Arithmetic, Scientific and Trigonometric Functions.

Here in this project some of those features will be implemented by C programming which will be able to operate on Windows and Linux.

## Research
[Research paper](https://www.informs.org/Publications/INFORMS-Journals/Mathematics-of-Operations-Research)
This is an easy-to-use Scientific Calculator. It does not have any complex operations. The necesary functions have been implemented by studying the facts.

## Cost and Features
The requirements will meet the cost & depending on the market and the project it can be varied.

- Addition : add() takes 2 values as input and returns a+b.
- Subtraction : sub() takes 2 values as input and returns a-b.
- Multiplication : mul() takes 2 values as input and returns a*b.
- Division : div() takes 2 values as input and returns a/b.
- Power: pow() takes 2 values as input and returns a ^ b.
- Squareroot : root() takes 1 value and returns √a.
- Sine : sin() takes 1 value in radian and return sin(a).
- Cosine : cos() takes 1 value in radian and return cos(a).
- Tangent : tan() takes 1 value in radian and return tan(a).
- Secant : sec() takes 1 value in radian and return sec(a).
- Cosec : cosec() takes 1 value in radian and return cosec(a).
- Cot : cot() takes 1 value in radian and return cot(a).

## Defining Our System
  **Architecture:**
  
   

   
 - The Scientific Calculator application has the following functions:
	 -  Arithmetic Operations
		 1. Addition 
		 2. Subtraction
		 3. Multiplication
	 -  Scientific Operations
		 1. Power
		 2. Square Root
	 	 3. Division
	 - Trigonometric Opretions
		 1. Sin     
		 2. Cos     
		 3. Tan     
		 4. Sec
		 5. Cosec
		 6. Cot	 
    

## SWOT ANALYSIS
 
- Strengths : With many included operations this calculator is easy to use and user-friendly. More functions can be added later.

- Weaknesses : Does not have a good user interface.

- Opportunities : Ever changing user needs mean more scope for more calculators with more efficient functions in the market. It is useful for students and small businesses. 

- Threats : Advanced more featured calculators are available and growth is bit slow in this industry.


# 4W&#39;s and 1&#39;H

## Who:

- The project can be used by everyone in daily life. Any student or employee requiring calculations can use the program to find their answer. This has friendly user interface and accurate & fast calculations.

## What:

- User can use the program in an efficient manner for arithmetic, scientific & trogonometric operations and get the required results.


## When:

- This project can be used whenever calculations are required  and obtain accurate fast answers.

## Where:

- It can be used in all the domains & is portable and user friendly. It should overcome all drawbacks of old existing system & more importantly meet the requirements of the user.

## How:

- The Project will be implemented in C programming language for Windows & Linux.
- The constraints of the project are developing using industry standards with multi-file approach.

# Detail requirements
## High Level Requirements:
|ID| Description |Category|status|
|--|------------|------|---------|
|H_01 |Arithemetic Operations| operations such +, -, *, / |Implemented
|H_02 |Trigonomety Operations|sin, cos, tan, sec, cosec , cot|Implemented
|H_03|Scientific Operations like |power, square root|Implemented
|H_04|Wrong Choice Operation and any time exit and continue again to calculate more | Which operation to perform & when to exit the task |Implemented


##  Low level Requirements:
|ID| Description |HLR ID | status|
|--|------------|------|---------|
|L_01 |When user performs `+ ` it has to add  |H_01|Implemented
|L_02 |When user performs `- ` it has to subtact |H_01|Implemented
|L_03|When user performs `* ` it has to multiply  |H_01 |Implemented
|L_04|When user performs `/ ` it has to divide & considering the case when 0 is the divisor  |H_01 |Implemented
|L_05|To calcualate the value of `sin` from input in radian |H_02 |Implemented
|L_06|To calcualate the value of `cos` from input in radian |H-02 |Implemented
|L_07|To calcualate the value of `tan` from input in radian |H_02 |Implemented
|L_08|To calcualate the value of `sec` from input in radian |H_02 |Implemented
|L_09|To calcualate the value of `cosec` given input radian |H_02 |Implemented
|L_10|To calcualate the value of `cot` given input radian |H_02 |Implemented
|L_11|perform power operations like a^2, a^3 ... `a^b` |H_03 |Implemented
|L_12|perform squareroot `√a ` & considering the case when 0 or negative numbers |H_03 |Implemented
|L_13|perform wrong choice other than those mentioned|H_04 |Implemented
|L_14|Press 0 to exit the calculator |H_04 |Implemented

