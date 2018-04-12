# [NCTU CS IOC5167] Software Testing HW1

## Requirement
* Implement the Triangle, NextDate, and Commission problems by TDD
  * using XUnit for writing testing code
  * In this time, we use google testing framework
* Analyze boundary value, equivalence class, edge values, and decision table based
  * writing test code using these analyses
* Organize your testing code in four forms: week/strong and robust/normal

* **Deadline：2018/4/12**

## To Do
- [x] 1. Installing google testing framework and related libraries
- [x] 2. Analyze & write test code
  - [x] Test code for Triangle Problem
  - [x] Test code for NextDate Problem
  - [x] Test code for Commission Problem
- [x] 3. Execute testing (should dispaly failed)
- [x] 4. Write feature code
  - [x] Feature code for Triangle Problem
  - [x] Feature code for NextDate Problem
  - [x] Feature code for Commission Problem
- [x] 5. Revise the code until all tests pass

## Boundary Value Testing
1. ### Normal Boundary Value
* Assume variables are independent
* single fault assumption
* normal boundry value fo function F of two variables x1 and x2
  * min
  * min+
  * nom
  * max-
  * max 
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 100 | 100 | 1 | Isosceles |
| 2 | 100 | 100 | 2 | Isosceles |
| 3 | 100 | 100 | 100 | Equilateral |
| 4 | 100 | 100 | 199 | Isosceles |
| 5 | 100 | 100 | 200 | Not a triangle |
| 6 | 100 | 1 | 100 | Isosceles |
| 7 | 100 | 2 | 100 | Isosceles |
| 8 | 100 | 199 | 100 | Isosceles |
| 9 | 100 | 200 | 100 | Not a triangle |
| 10 | 1 | 100 | 100 | Isosceles |
| 11 | 2 | 100 | 100 | Isosceles |
| 12 | 199 | 100 | 100 | Isosceles |
| 13 | 200 | 100 | 100 | Not a triangle |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1812 | 4 | 10 | 1812/4/11 |
| 2 | 1813 | 4 | 10 | 1813/4/11 |
| 3 | 2000 | 4 | 10 | 2000/4/11 |
| 4 | 2011 | 4 | 10 | 2011/4/11 |
| 5 | 2012 | 4 | 10 | 2012/4/11 |
| 6 | 2000 | 1 | 10 | 2000/1/11 |
| 7 | 2000 | 2 | 10 | 2000/2/11 |
| 8 | 2000 | 6 | 10 | 2000/6/11 |
| 9 | 2000 | 11 | 10 | 2000/11/11 |
| 10 | 2000 | 12 | 10 | 2000/12/11 |
| 11 | 2000 | 3 | 1 | 2000/3/2 |
| 12 | 2000 | 3 | 2 | 2000/3/3 |
| 13 | 2000 | 3 | 10 | 2000/3/11 |
| 14 | 2000 | 3 | 30 | 2000/3/31 |
| 15 | 2000 | 3 | 31 | 2000/4/1 |

* Example for **Commission Problem**
![](https://i.imgur.com/fUFJp2s.png)

2. ### Robust Boundry Value
* a simple extension of normal boundary value testing
  * min-
  * max+
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 14 | 100 | 100 | 0 | Not a triangle |
| 15 | 100 | 100 | 201 | Not a triangle |
| 16 | 0 | 100 | 100 | Not a triangle |
| 17 | 201 | 100 | 100 | Not a triangle |
| 18 | 100 | 0 | 100 | Not a triangle |
| 19 | 100 | 201 | 100 | Not a triangle |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | ---- | ----- | --- | --------------- |
| 16 | 1811 | 4 | 10 | Invalid Input |
| 17 | 2012 | 4 | 10 | Invalid Input |
| 18 | 2000 | 0 | 10 | Invalid Input |
| 19 | 2000 | 13 | 10 | Invalid Input |
| 20 | 2000 | 1 | 0 | Invalid Input |
| 21 | 2000 | 1 | 32 | Invalid Input |
| 22 | 2000 | 2 | 30 | Invalid Input |
| 23 | 2001 | 2 | 29 | Invalid Input |
| 24 | 2000 | 4 | 31 | Invalid Input |

* Example for **Commission Problem**
![](https://i.imgur.com/YaoBvQX.png)

## Equivalence Class Testing
1. ### Weak Normal Equivalence Test
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 5 | 5 | 5 | Equilateral |
| 2 | 2 | 2 | 3 | Isosceles |
| 3 | 3 | 4 | 5 | Scalene |
| 4 | 4 | 1 | 2 | Not a triangle |

* Example for **Nextdate Problem**

| Case | Year | Month | Day | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 2000 | 6 | 14 | 2000/6/15 |
| 2 | 1996 | 7 | 29 | 1996/7/30 |
| 3 | 2002 | 2 | 30 | Invalid Input |
| 4 | 2000 | 6 | 31 | Invalid Input |

* Example for **Commission Problem**

| Case | Lock | Stock | Barrel | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 35 | 40 | 45 | 640 |

2. ### Strong Normal Equivalence Test
* Example for **Triangle Problem**
  * Since no valid subintervals of variables a, b and c exist, so the strong normal equivalence class test cases are identical to the weak normal equivalence class test cases.

* Example for **Nextdate Problem**
![](https://i.imgur.com/I4oNDSP.png)

* Example for **Commission Problem**

| Case | Lock | Stock | Barrel | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 35 | 40 | 45 | 640 |

3. ### Weak Robust Equivalence Test
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | -1 | 5 | 5 | Invalid Input |
| 2 | 5 | -1 | 5 | Invalid Input |
| 3 | 5 | 5 | -1 | Invalid Input |
| 4 | 201 | 5 | 5 | Invalid Input |
| 5 | 5 | 201 | 5 | Invalid Input |
| 6 | 5 | 5 | 201 | Invalid Input |

* Example for **Nextdate Problem**
![](https://i.imgur.com/lV1K9C0.png)

* Example for **Commission Problem**
![](https://i.imgur.com/o3a8tbv.png)

4. ### Strong Robust Equivalence Test
* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | -1 | 5 | 5 | Invalid Input |
| 2 | 5 | -1 | 5 | Invalid Input |
| 3 | 5 | 5 | -1 | Invalid Input |
| 4 | -1 | -1 | 5 | Invalid Input |
| 5 | 5 | -1 | -1 | Invalid Input |
| 6 | -1 | 5 | -1 | Invalid Input |
| 7 | -1 | -1 | -1 | Invalid Input |

* Example for **Nextdate Problem**
![](https://i.imgur.com/FcdRt5Q.png)

* Example for **Commission Problem**
![](https://i.imgur.com/D168ptk.png)

## Edge Testing
* a hybrid
  * boundary value analysis
  * equivalence class testing

* Example for **Triangle Problem**

| Case | a | b | c | Expected Output |
| ---- | - | - | - | --------------- |
| 1 | 1 | 1 | 1 | Equilateral |
| 2 | 200 | 200 | 200 | Equilateral |
| 3 | 2 | 2 | 1 | Isosceles |
| 4 | 2 | 1 | 2 | Isosceles |
| 5 | 1 | 2 | 2 | Isosceles |
| 6 | 1 | 200 | 200 | Isosceles |
| 7 | 199 | 200 | 200 | Isosceles |
| 8 | 2 | 100 | 101 | Scalene |
| 9 | 2 | 199 | 200 | Scalene |
| 10 | 199 | 2 | 200 | Scalene |
| 11 | 199 | 200 | 2 | Scalene |
| 12 | 199 | 200 | 1 | Not a triangle |
| 13 | 1 | 1 | 2 | Not a triangle |
| 14 | 1 | 1 | 2 | Not a triangle |
| 15 | 1 | 199 | 200 | Not a triangle |
| 16 | 199 | 1 | 200 | Not a triangle |
| 17 | 199 | 200 | 1 | Not a triangle |
| 18 | 1 | 2 | 200 | Not a triangle |

* Example for **Nextdate Problem**
![](https://i.imgur.com/tyn0nqb.png)

* Example for **Commission Problem**
![](https://i.imgur.com/5t64SNI.png)

## Decision Table-Based Testing

* Example for **Triangle Problem**
![](https://i.imgur.com/qMiVA2P.png)

* Example for **Nextdate Problem**
![](https://i.imgur.com/GzwrKGi.png)

* Example for **Commission Problem**
![](https://i.imgur.com/EIAOemy.png)


## Development History
1. ### Triangle Problem
   1. Finsih initial feature code for triangle problem.
   ![](https://i.imgur.com/wUbuLaO.png)
   
   2. Finish test code for triangle problem and all tests failed.
   ![](https://i.imgur.com/eq4JtDO.png)
 
   3. Finish feature code for triangle problem.
   ![](https://i.imgur.com/syTbwOd.png)

   4. Do testing and pass all test. 
   ![](https://i.imgur.com/MFdSNGU.png)


2. ### NextDate Problem
    1. Finsih initial nextdate problem feature code
     ![](https://i.imgur.com/ixF6iCr.png)

    2. Finish test code and all tests failed.
     ![](https://i.imgur.com/kZLjt6T.png)

    3. Finish feature code.
    ![](https://i.imgur.com/XKujrT2.png)

    4. Do testing and then passed 5 tests, failed 3 tests. 
    ![](https://i.imgur.com/384CmfI.png)

    5. Find the bugs in unittest program and fix them. 
    ![](https://i.imgur.com/qWJ3tIi.png) 
    ![](https://i.imgur.com/pBtD7R5.png)

    6. Pass 7 tests and 1 test fail .
    ![](https://i.imgur.com/mRMzo2g.png)

    7. Pass all tests after fixing the last bug.
    ![](https://i.imgur.com/zc3Zkyf.png)


3. ### Commission Problem
    1. Finsih initial commission problem feature code
    ![](https://i.imgur.com/ZGKvaHX.png)

    2. Finish test code and all tests failed.
    ![](https://i.imgur.com/YlyYp63.png)

    3. Finish feature code.
    ![](https://i.imgur.com/FFfLroG.png)

    4. Do testing and then passed 5 tests, failed 3 tests. 
    ![](https://i.imgur.com/xcW2RTI.png)

    5. Find the bugs in unittest program and fix them. 
    ![](https://i.imgur.com/1JVZONO.png)

    6. Pass all tests after fixing the last bug.
    ![](https://i.imgur.com/vLCfSm4.png)
