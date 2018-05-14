# [NCTU CS IOC5167] Software Testing HW2

## Requirement
* Use your Implementations of the Triangle, NextDate, Commission problems by TDD
  * using XUnit for writing testing code
  * google testing framework, PHPUnit, …
* Analyze test data according to C0,C1, C2, and MCDC coverage metrics
  * writing test code using these analyses

## To Do
- [x] Installing your own XUnit framework and related libraries
- [x] Using Continuous Integration (Travis)
- [x] Practice coverage analysis tool (gcov)
- [x] Writing test code
  - [x] Test code for Triangle Problem
  - [x] Test code for NextDate Problem
  - [x] Test code for Commission Problem
- [x] Writing feature code
  - [x] Feature code for Triangle Problem
  - [x] Feature code for NextDate Problem
  - [x] Feature code for Commission Problem

## Path Testing
### 1. C0: Statement Coverage
1. C0 is subsumed by Gnode metric
   * the program graphs allows statement fragments to be individual nodes
2. Statement is the minimum

* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1 | 2 | 3 | Not a triangle |
| 2 | 5 | 5 | 5 | Equilateral |
| 3 | 5 | 5 | 1 | Isosceles |
| 4 | 3 | 4 | 5 | Scalene |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 2000 | 1 | 1 | 2000/1/2 |
| 2 | 1811 | 1 | 1 | Invalid Input |


* Example for **Commission Problem**

| Case | Lock | Stock | Barrel | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 0 | 10 | 10 | -1 |
| 2 | 35 | 40 | 45 | 640 |

### 2. C1: DD-Path coverage
1.  When every DD-path is traversed (C1 metric), each predicate outcome has been executed
    * traverse every edge in the DD-path graph
    * C1 is Gchain
 
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1 | 2 | 3 | Not a triangle |
| 2 | 5 | 5 | 5 | Equilateral |
| 3 | 5 | 5 | 1 | Isosceles |
| 4 | 3 | 4 | 5 | Scalene |
| 5 | 5 | 5 | 0 | Invalid Input |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 2000 | 11 | 29 | 2000/11/30 |
| 2 | 2000 | 11 | 30 | 2000/12/1 |
| 3 | 2000 | 12 | 31 | 2001/1/1 |
| 4 | 1811 | 1 | 1 | Invalid Input |

* Example for **Commission Problem**

| Case | Lock | Stock | Barrel | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 0 | 10 | 10 | -1 |
| 2 | 20 | 20 | 12 | 220 |
| 3 | 69 | 79 | 89 | 1400 |

### 3. C2: Simple Loop Coverage
1. C2 metric
   * DD-Path coverage (C1 metric) plus loop testing
2. Every loop involves a decision
   * one is to traverse the loop
   * one is to exit the loop (or not enter)
3. C2 metic is Gege test coverage
 
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1 | 2 | 3 | Not a triangle |
| 2 | 5 | 5 | 5 | Equilateral |
| 3 | 5 | 5 | 1 | Isosceles |
| 4 | 3 | 4 | 5 | Scalene |
| 5 | 5 | 5 | 0 | Invalid Input |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | ---- | ----- | --- | --------------- |
| 1 | 2000 | 11 | 29 | 2000/11/30 |
| 2 | 2000 | 11 | 30 | 2000/12/1 |
| 3 | 2000 | 12 | 31 | 2001/1/1 |
| 4 | 1811 | 1 | 1 | Invalid Input |

* Example for **Commission Problem**

| Case | Lock | Stock | Barrel | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 0 | 10 | 10 | -1 |
| 2 | 2 | 10 | 10 | 64 |
| 3 | 20 | 20 | 12 | 220 |
| 4 | 69 | 79 | 89 | 1400 |

## Modified Condition Decision Coverage(MCDC)
1. Every statement must be executed at least once
2. Every program entry point and exit point must be invoked at least once
3. All possible outcomes of every control statement are taken at least once
4. Every nonconstant Boolean expression has been evaluated to both true and false outcomes
5. Every nonconstant condition in a Boolean expression has been evaluated to both true and false outcomes
6. Every nonconstant condition in a Boolean expression has been shown to independently affect the outcomes (of the expression)

* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1 | 1 | 201 | Invalid Input |
| 2 | 1 | 201 | 1 | Invalid Input |
| 3 | 201 | 1 | 1 | Invalid Input |
| 4 | 1 | 1 | 0 | Invalid Input |
| 5 | 1 | 0 | 1 | Invalid Input |
| 6 | 0 | 1 | 1 | Invalid Input |
| 7 | 5 | 5 | 5 | Equilateral |
| 8 | 1 | 2 | 3 | Not a triangle |
| 9 | 2 | 1 | 3 | Not a triangle |
| 10 | 3 | 2 | 1 | Not a triangle |
| 11 | 5 | 5 | 1 | Isosceles |
| 12 | 5 | 1 | 5 | Isosceles |
| 13 | 1 | 5 | 5 | Isosceles |
| 14 | 3 | 4 | 5 | Scalene |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1811 | 6 | 10 | Invalid Input |
| 2 | 2010 | 13 | 10 | Invalid Input |
| 3 | 2000 | 10 | 0 | Invalid Input |
| 4 | 2012 | 2 | 30 | Invalid Input |
| 5 | 2012 | 11 | 31 | Invalid Input |
| 6 | 2007 | 2 | 29 | Invalid Input |
| 7 | 2007 | 2 | 30 | Invalid Input |
| 8 | 2007 | 11 | 31 | Invalid Input |
| 9 | 2000 | 12 | 31 | 2001/1/1 |
| 10 | 2012 | 12 | 31 | 2013/1/1 |
| 11 | 2012 | 1 | 31 | 2012/2/1 |
| 12 | 2012 | 12 | 30 | 2012/12/31 |
| 13 | 2012 | 2 | 29 | 2012/3/1 |
| 14 | 2012 | 2 | 28 | 2012/2/29 |
| 15 | 2012 | 11 | 30 | 2012/12/1 |
| 16 | 2012 | 4 | 30 | 2012/5/1 |
| 17 | 2012 | 11 | 29 | 2012/11/30 |
| 18 | 2007 | 12 | 31 | 2008/1/1 |
| 19 | 2007 | 1 | 31 | 2007/2/1 |
| 20 | 2007 | 12 | 30 | 2007/12/31 |
| 21 | 2007 | 2 | 28 | 2007/3/1 |
| 22 | 2007 | 11 | 30 | 2007/12/1 |
| 23 | 2007 | 4 | 30 | 2007/5/1 |
| 24 | 2007 | 11 | 29 | 2007/11/03 |

* Example for **Commission Problem**

| Case | Lock | Stock | Barrel | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | -1 | 10 | 10 | 0 |
| 2 | 0 | 1 | 1 | -1 |
| 3 | 1 | 0 | 1 | -1 |
| 4 | 1 | 1 | 0 | -1 |
| 5 | 71 | 1 | 1 | -1 |
| 6 | 1 | 81 | 1 | -1 |
| 7 | 1 | 1 | 91 | -1 |
| 8 | 10 | 10 | 50 | 260 |
| 9 | 10 | 50 | 10 | 300 |
| 10 | 50 | 10 | 10 | 420 |
| 11 | 69 | 79 | 89 | 1400 |

## Coverage Analysis
* Analyze by tool - Codecov
![](https://i.imgur.com/jRDowQy.png)
![](https://i.imgur.com/jf3n6d0.png)
![](https://i.imgur.com/w410B6f.png)


## Continuous Integration Deployment History
* Using CI tool - Travis & Github
![](https://i.imgur.com/VS96bMH.png)
![](https://i.imgur.com/HAvkGea.png)
![](https://i.imgur.com/bZcFn65.png)
![](https://i.imgur.com/66dXPis.png)

![](https://i.imgur.com/hTZt436.png)
![](https://i.imgur.com/1cdqKni.png)
![](https://i.imgur.com/MwdRv7i.png)
![](https://i.imgur.com/njLx92T.png)
![](https://i.imgur.com/B8WQDGW.png)
![](https://i.imgur.com/yeLA5cp.png)
![](https://i.imgur.com/Uq5xjJ5.png)


## Code Development History
1. ### Triangle Problem
   1. Initialized nonfunctional feature code of triangle problem.
   ![](https://i.imgur.com/pODSso5.png)

   2. Ran path testing with C0 coverage and then failed
   ![](https://i.imgur.com/hyrMSGR.png)

   3. Ran path testing with C1 coverage and then failed
   ![](https://i.imgur.com/tLDnkPR.png)

   4. Ran path testing with C2 coverage and then failed
   ![](https://i.imgur.com/BnkLsmv.png)

   5. Ran path testing with MCDC coverage and then failed
   ![](https://i.imgur.com/nKqe1Ey.png)
 
   6. Finished feature code for triangle problem.
   ![](https://i.imgur.com/eQPOmpZ.png)

   7. Ran path testing and then passed all. 
   ![](https://i.imgur.com/EJPpaFF.png)


2. ### NextDate Problem
    1. Initialize nonfunctional feature code of nextdate problem
    ![](https://i.imgur.com/nhgC5he.png) 

   2. Ran path testing with C0 coverage and then failed
    ![](https://i.imgur.com/gYaw9MQ.png)

   3. Ran path testing with C1 coverage and then failed
    ![](https://i.imgur.com/cQ3FI6N.png)

   4. Ran path testing with C2 coverage and then failed
    ![](https://i.imgur.com/UItuzU2.png) 

   5. Ran path testing with MCDC coverage and then failed
    ![](https://i.imgur.com/3I0p8il.png)

   6. Finished feature code for triangle problem.
    ![](https://i.imgur.com/BlGBEmg.png)
    ![](https://i.imgur.com/A9jqzlI.png)
    ![](https://i.imgur.com/O4DOAQ1.png)

   7. Ran path testing and then passed all. 
    ![](https://i.imgur.com/6oD2lj6.png)   


3. ### Commission Problem
    1. Initialize nonfunctional feature code of nextdate problem
    ![](https://i.imgur.com/mzaYD6Z.png)

   2. Ran path testing with C0 coverage and then failed
    ![](https://i.imgur.com/WYIs8gt.png)

   3. Ran path testing with C1 coverage and then failed
    ![](https://i.imgur.com/2semBQ6.png)

   4. Ran path testing with C2 coverage and then failed
    ![](https://i.imgur.com/lC7zli4.png)

   5. Ran path testing with MCDC coverage and then failed
    ![](https://i.imgur.com/0PwRp1U.png)
 
   6. Finished feature code for triangle problem.
    ![](https://i.imgur.com/W21M6nN.png)

   7. Ran path testing and then passed all. 
    ![](https://i.imgur.com/5rYatll.png)    
