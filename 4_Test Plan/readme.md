# TEST PLAN:

## Table 1: High level test plan 

| **Test ID** | **Description**                                              | **Exp I/P**  | **Exp O/P** | **Actual Out** |**Type Of Test**  |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |               Addition                                       |  8,4|12 |12 |Requirement based |
|  H_02       |               Subtraction                                    |  8,4|4  |4  |Requirement based |
|  H_03       |               Multiplication                                 |  8,4|32 |32 |Requirement based |
|  H_04       |               Division                                      |  8,4|2 |2|Requirement based |
|  H_05       |               Power                                          |  8,4|4096 |4096  |Requirement based |
|  H_06       |               Square Root                                      |  4|2 |2 |Requirement based |
|  H_07       |               Sine                                      |  30|0.500 |0.500 |Requirement based |
|  H_08       |               Cosine                                      |  30|0.866|0.866 |Requirement based |
|  H_09       |               Tangent                                      |  30|0.577 |0.577  |Requirement based |
|  H_10       |               Sec                                      |  30|1.154 |1.154  |Requirement based |
|  H_11       |               Cosec                                      |  30|2.000 |2.000  |Requirement based |
|  H_12       |               Cot                                      |  30| 1.732|1.732 |Requirement based |



## Table 2: Low level test plan

   ## Note: return -1 is error

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|   L_01      |               Division (Quotient) divisor 0                                    |  4,0|return -1|return -1|Scenario based |
|   L_02       |               Addition  -ve numbers                                      |  -4,-1|-5 |-5|Requirement based |
|   L_03      |               Subtraction   -ve numbers                                  |  -4,-1|-3  |-3  |Requirement based |
|   L_04       |               Multiplication   -ve numbers                               |  -4,-1|4 |4 |Requirement based |
|   L_05       |               Division (Quotient)   -ve numbers                                    |  -4,-1|4|4|Requirement based |
|   L_09       |               power     -ve numbers                                      |  -4,-1|-0.25 |-0.25  |Requirement based |
|   L_11       |               Sin       -ve number                                |  -30|-0.500 |-0.500 |Requirement based |
|   L_12       |               Cos       -ve number                                |  -30|0.866|0.866|Requirement based |
|   L_12       |               Tan       -ve number                                |  -30|-0.577 |-0.577  |Requirement based |
|   L_13      |               Cot       -ve number                                |  -30|-1.732 |-1.732 |Requirement based |
|   L_14       |               Cosec     -ve number                                  |  -30|-2.000 |-2.000|Requirement based |
|   L_15       |               Sec       -ve number                                |  -30|1.154 |1.154  |Requirement based |
|   L_16      |               SquareRoot       -ve number                                |  -4|return -1 |return -1  |Scenario based |
