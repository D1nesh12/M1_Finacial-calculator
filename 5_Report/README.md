# Report

# Requirements

# Introduction
In this project, a version of the financial calculator program in C is developed which will perform financial calculations depending on the input from the user.

# Objective
The main objective of the project is to perform a financial calculation to make the best financial investment. To make the financial calculations easy.

# Features
This project supports the following types of financial calculations:

1. CAGR Calculation
2. Discount Calculation
3. PPF Calculation
4. EMI Calculation
5. RD Calculation
6. FD Calculation
7. LumpSum Calculation
8. SIP Calculation

# 4W's and 1 H's
## Why:
1. To reduce the complexity of financial calculations.
2. I’m making this to do all financial calculations in one place.
3. It can be used by anyone at any place.

## Where:
1. This can be used in our daily lives to make better financial decisions.
2. We can use it in the banking system for calculation.

## Who:
1. It can be used by investors.
2. Can be used as a reference for advanced financial calculations.

## When:
1. One can calculate financial costs anywhere.
2. The project can be used when the financial calculations are required and the result will be obtained fastly.

## How:
1. By giving different amounts one can find their desired output.
2. It will be helpful in performing various calculations like LumpSum and SIP. This will give accurate results.

# SWOT Analysis

## Strengths
1. Perform financial calculations easily
2. It can calculate LumpSum and SIP calculations.

## Weakness
1. Can’t perform various other calculations.

## Opportunities
1. More financial calculations can be implemented further.
2. GUI can be used to enhance the visual look of the calculator.

## Threats
1. Advanced featured calculators are already in the market.

# High Level Requirements
| ID   |      Description     |  Status |
|----------|:-------------:|------:|
| HLR_1 |  The user can calculate the CAGR | Implemented  |
| HLR_2 |    The user can calculate the Discount  | Implemented  |
| HLR_3 |    The user can calculate the PPF  | Implemented  |
| HLR_4 |    The user can calculate the EMI  | Implemented  |
| HLR_5 |    The user can calculate the RD  | Implemented  |
| HLR_6 |    The user can calculate the FD  | Implemented  |
| HLR_7 |    The user can calculate the LumpSum  | Implemented  |
| HLR_8 |    The user can calculate the SIP  | Implemented  |

# Low Level Requirements
| ID   |      Description     |  Status |
|----------|:-------------:|------:|
| LLR_1 |  List of operations displayed | Implemented  |
| LLR_2 |  Input from the user  | Implemented  |
| LLR_3 |  Exit the program  | Implemented  |


# Implementation
# Folder Structure
| Folder   |      Description     |
|----------|:-------------:|
| document | Doxygen documentation |
| inc | All header files |
| src | Main source code for financial calculator |
| test | All source code and data for testing purposes |

# Test Plan

# High Level Test Plan
| ID | Description | Expected I/P | Expected O/P | Actual O/P | Type Of Test |
|---|---|---|---|---|---|
| HLTP_1 | CAGR Operation | (Choice) | SUCCESS | SUCCESS | Requirement Based |
| HLTP_2 | Discount Operation | Choice | SUCCESS | SUCCESS | Requirement Based |
| HLTP_3 | PPF Operation | Choice | SUCCESS | SUCCESS | Requirement Based |
| HLTP_4 | EMI Operation | Choice | SUCCESS | SUCCESS | Requirement Based |
| HLTP_5 | RD Operation | Choice | SUCCESS | SUCCESS | Requirement Based |
| HLTP_6 | FD Operation | Choice | SUCCESS | SUCCESS | Requirement Based |
| HLTP_7 | SIP Operation | Choice | SUCCESS | SUCCESS | Requirement Based |
| HLTP_8 | LumpSum Operation | Choice | SUCCESS | SUCCESS | Requirement Based |

# Low Level Test Plan
| ID | Description | Expected I/P | Expected O/P | Actual O/P | Type Of Test |
|---|---|---|---|---|---|
| LLTP_1 | CAGR Calculation | (1000, 10000, 24) | 10.07 | 10.07 | Requirement Based |
| LLTP_2 | Discount Calculation | (1000, 7) | 70 | 70 | Requirement Based |
| LLTP_3 | PPF Calculation | (500, 15) | 13561 | 13561 | Requirement Based |
| LLTP_4 | EMI Calculation | (100000, 7, 1) | 8653 | 8653 | Requirement Based |
| LLTP_5 | RD Calculation | (500, 1, 7) | 6234 | 6234 | Requirement Based |
| LLTP_6 | FD Calculation | (5000, 7, 1) | 5359 | 5359 | Requirement Based |
| LLTP_7 | SIP Calculation | (500, 7, 1) | 6232 | 6232 | Requirement Based |
| LLTP_8 | LumpSum Calculation | (500, 7, 1) | 535 | 535 | Requirement Based |

