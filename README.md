# 100 Days of C Programming

A structured 96-day C programming challenge covering **146 problems** from [100 Days of Code — UPES](https://maitysoumik.github.io/basic-coding-with-c/), organized by day, compiled with GCC, and automated for Windows + VS Code + GitHub.

## Project Overview

- **Programming Language:** C (C11 standard)
- **Development Environment:** Windows 10/11 + Visual Studio Code (PowerShell terminal)
- **Compiler:** GCC (MinGW-w64 / MSYS2)
- **Official Question Website:** https://maitysoumik.github.io/basic-coding-with-c/
- **GitHub Repository:** https://github.com/pj0628/100-Days-of-C
- **Total Completed Days:** 96 (Day 01 – Day 96)
- **Total Solved Questions:** 146 (2 per day for Days 01–50; 1 per day for Days 51–96)

> **Note on Challenge Timeline vs. Git Commit Dates:** The challenge dates listed below (`23 Aug 2026` – `26 Nov 2026`) represent the documented 96-day project timeline. Actual Git commit author and committer timestamps reflect when the commits were truthfully created.

## Folder Structure

```text
100-Days-of-C/
├── README.md
├── progress.md
├── .gitignore
├── setup-100-days.ps1
├── Day-01/
│   ├── Q1.c
│   └── Q2.c
├── ...
├── Day-50/
│   ├── Q1.c
│   └── Q2.c
├── Day-51/
│   └── Q1.c
├── ...
└── Day-96/
    └── Q1.c
```

## Compiling and Running Programs (Windows PowerShell)

Compile any solution using GCC and run the generated executable:

```powershell
gcc .\Day-01\Q1.c -o .\Day-01\Q1.exe -lm
.\Day-01\Q1.exe
```

Or run the included automation script to verify dependencies, compile all 146 programs, run sample tests, and create day-wise Git commits:

```powershell
.\setup-100-days.ps1
```

## Day-wise Progress Table

| Day | Questions | Challenge Date | Status | Solutions |
| :--- | :---: | :--- | :--- | :--- |
| 01 | 2 | 23 Aug 2026 | Completed | [Q1 (Q1.c)](./Day-01/Q1.c), [Q2 (Q2.c)](./Day-01/Q2.c) |
| 02 | 2 | 24 Aug 2026 | Completed | [Q3 (Q1.c)](./Day-02/Q1.c), [Q4 (Q2.c)](./Day-02/Q2.c) |
| 03 | 2 | 25 Aug 2026 | Completed | [Q5 (Q1.c)](./Day-03/Q1.c), [Q6 (Q2.c)](./Day-03/Q2.c) |
| 04 | 2 | 26 Aug 2026 | Completed | [Q7 (Q1.c)](./Day-04/Q1.c), [Q8 (Q2.c)](./Day-04/Q2.c) |
| 05 | 2 | 27 Aug 2026 | Completed | [Q9 (Q1.c)](./Day-05/Q1.c), [Q10 (Q2.c)](./Day-05/Q2.c) |
| 06 | 2 | 28 Aug 2026 | Completed | [Q11 (Q1.c)](./Day-06/Q1.c), [Q12 (Q2.c)](./Day-06/Q2.c) |
| 07 | 2 | 29 Aug 2026 | Completed | [Q13 (Q1.c)](./Day-07/Q1.c), [Q14 (Q2.c)](./Day-07/Q2.c) |
| 08 | 2 | 30 Aug 2026 | Completed | [Q15 (Q1.c)](./Day-08/Q1.c), [Q16 (Q2.c)](./Day-08/Q2.c) |
| 09 | 2 | 31 Aug 2026 | Completed | [Q17 (Q1.c)](./Day-09/Q1.c), [Q18 (Q2.c)](./Day-09/Q2.c) |
| 10 | 2 | 01 Sep 2026 | Completed | [Q19 (Q1.c)](./Day-10/Q1.c), [Q20 (Q2.c)](./Day-10/Q2.c) |
| 11 | 2 | 02 Sep 2026 | Completed | [Q21 (Q1.c)](./Day-11/Q1.c), [Q22 (Q2.c)](./Day-11/Q2.c) |
| 12 | 2 | 03 Sep 2026 | Completed | [Q23 (Q1.c)](./Day-12/Q1.c), [Q24 (Q2.c)](./Day-12/Q2.c) |
| 13 | 2 | 04 Sep 2026 | Completed | [Q25 (Q1.c)](./Day-13/Q1.c), [Q26 (Q2.c)](./Day-13/Q2.c) |
| 14 | 2 | 05 Sep 2026 | Completed | [Q27 (Q1.c)](./Day-14/Q1.c), [Q28 (Q2.c)](./Day-14/Q2.c) |
| 15 | 2 | 06 Sep 2026 | Completed | [Q29 (Q1.c)](./Day-15/Q1.c), [Q30 (Q2.c)](./Day-15/Q2.c) |
| 16 | 2 | 07 Sep 2026 | Completed | [Q31 (Q1.c)](./Day-16/Q1.c), [Q32 (Q2.c)](./Day-16/Q2.c) |
| 17 | 2 | 08 Sep 2026 | Completed | [Q33 (Q1.c)](./Day-17/Q1.c), [Q34 (Q2.c)](./Day-17/Q2.c) |
| 18 | 2 | 09 Sep 2026 | Completed | [Q35 (Q1.c)](./Day-18/Q1.c), [Q36 (Q2.c)](./Day-18/Q2.c) |
| 19 | 2 | 10 Sep 2026 | Completed | [Q37 (Q1.c)](./Day-19/Q1.c), [Q38 (Q2.c)](./Day-19/Q2.c) |
| 20 | 2 | 11 Sep 2026 | Completed | [Q39 (Q1.c)](./Day-20/Q1.c), [Q40 (Q2.c)](./Day-20/Q2.c) |
| 21 | 2 | 12 Sep 2026 | Completed | [Q41 (Q1.c)](./Day-21/Q1.c), [Q42 (Q2.c)](./Day-21/Q2.c) |
| 22 | 2 | 13 Sep 2026 | Completed | [Q43 (Q1.c)](./Day-22/Q1.c), [Q44 (Q2.c)](./Day-22/Q2.c) |
| 23 | 2 | 14 Sep 2026 | Completed | [Q45 (Q1.c)](./Day-23/Q1.c), [Q46 (Q2.c)](./Day-23/Q2.c) |
| 24 | 2 | 15 Sep 2026 | Completed | [Q47 (Q1.c)](./Day-24/Q1.c), [Q48 (Q2.c)](./Day-24/Q2.c) |
| 25 | 2 | 16 Sep 2026 | Completed | [Q49 (Q1.c)](./Day-25/Q1.c), [Q50 (Q2.c)](./Day-25/Q2.c) |
| 26 | 2 | 17 Sep 2026 | Completed | [Q51 (Q1.c)](./Day-26/Q1.c), [Q52 (Q2.c)](./Day-26/Q2.c) |
| 27 | 2 | 18 Sep 2026 | Completed | [Q53 (Q1.c)](./Day-27/Q1.c), [Q54 (Q2.c)](./Day-27/Q2.c) |
| 28 | 2 | 19 Sep 2026 | Completed | [Q55 (Q1.c)](./Day-28/Q1.c), [Q56 (Q2.c)](./Day-28/Q2.c) |
| 29 | 2 | 20 Sep 2026 | Completed | [Q57 (Q1.c)](./Day-29/Q1.c), [Q58 (Q2.c)](./Day-29/Q2.c) |
| 30 | 2 | 21 Sep 2026 | Completed | [Q59 (Q1.c)](./Day-30/Q1.c), [Q60 (Q2.c)](./Day-30/Q2.c) |
| 31 | 2 | 22 Sep 2026 | Completed | [Q61 (Q1.c)](./Day-31/Q1.c), [Q62 (Q2.c)](./Day-31/Q2.c) |
| 32 | 2 | 23 Sep 2026 | Completed | [Q63 (Q1.c)](./Day-32/Q1.c), [Q64 (Q2.c)](./Day-32/Q2.c) |
| 33 | 2 | 24 Sep 2026 | Completed | [Q65 (Q1.c)](./Day-33/Q1.c), [Q66 (Q2.c)](./Day-33/Q2.c) |
| 34 | 2 | 25 Sep 2026 | Completed | [Q67 (Q1.c)](./Day-34/Q1.c), [Q68 (Q2.c)](./Day-34/Q2.c) |
| 35 | 2 | 26 Sep 2026 | Completed | [Q69 (Q1.c)](./Day-35/Q1.c), [Q70 (Q2.c)](./Day-35/Q2.c) |
| 36 | 2 | 27 Sep 2026 | Completed | [Q71 (Q1.c)](./Day-36/Q1.c), [Q72 (Q2.c)](./Day-36/Q2.c) |
| 37 | 2 | 28 Sep 2026 | Completed | [Q73 (Q1.c)](./Day-37/Q1.c), [Q74 (Q2.c)](./Day-37/Q2.c) |
| 38 | 2 | 29 Sep 2026 | Completed | [Q75 (Q1.c)](./Day-38/Q1.c), [Q76 (Q2.c)](./Day-38/Q2.c) |
| 39 | 2 | 30 Sep 2026 | Completed | [Q77 (Q1.c)](./Day-39/Q1.c), [Q78 (Q2.c)](./Day-39/Q2.c) |
| 40 | 2 | 01 Oct 2026 | Completed | [Q79 (Q1.c)](./Day-40/Q1.c), [Q80 (Q2.c)](./Day-40/Q2.c) |
| 41 | 2 | 02 Oct 2026 | Completed | [Q81 (Q1.c)](./Day-41/Q1.c), [Q82 (Q2.c)](./Day-41/Q2.c) |
| 42 | 2 | 03 Oct 2026 | Completed | [Q83 (Q1.c)](./Day-42/Q1.c), [Q84 (Q2.c)](./Day-42/Q2.c) |
| 43 | 2 | 04 Oct 2026 | Completed | [Q85 (Q1.c)](./Day-43/Q1.c), [Q86 (Q2.c)](./Day-43/Q2.c) |
| 44 | 2 | 05 Oct 2026 | Completed | [Q87 (Q1.c)](./Day-44/Q1.c), [Q88 (Q2.c)](./Day-44/Q2.c) |
| 45 | 2 | 06 Oct 2026 | Completed | [Q89 (Q1.c)](./Day-45/Q1.c), [Q90 (Q2.c)](./Day-45/Q2.c) |
| 46 | 2 | 07 Oct 2026 | Completed | [Q91 (Q1.c)](./Day-46/Q1.c), [Q92 (Q2.c)](./Day-46/Q2.c) |
| 47 | 2 | 08 Oct 2026 | Completed | [Q93 (Q1.c)](./Day-47/Q1.c), [Q94 (Q2.c)](./Day-47/Q2.c) |
| 48 | 2 | 09 Oct 2026 | Completed | [Q95 (Q1.c)](./Day-48/Q1.c), [Q96 (Q2.c)](./Day-48/Q2.c) |
| 49 | 2 | 10 Oct 2026 | Completed | [Q97 (Q1.c)](./Day-49/Q1.c), [Q98 (Q2.c)](./Day-49/Q2.c) |
| 50 | 2 | 11 Oct 2026 | Completed | [Q99 (Q1.c)](./Day-50/Q1.c), [Q100 (Q2.c)](./Day-50/Q2.c) |
| 51 | 1 | 12 Oct 2026 | Completed | [Q101 (Q1.c)](./Day-51/Q1.c) |
| 52 | 1 | 13 Oct 2026 | Completed | [Q102 (Q1.c)](./Day-52/Q1.c) |
| 53 | 1 | 14 Oct 2026 | Completed | [Q103 (Q1.c)](./Day-53/Q1.c) |
| 54 | 1 | 15 Oct 2026 | Completed | [Q104 (Q1.c)](./Day-54/Q1.c) |
| 55 | 1 | 16 Oct 2026 | Completed | [Q105 (Q1.c)](./Day-55/Q1.c) |
| 56 | 1 | 17 Oct 2026 | Completed | [Q106 (Q1.c)](./Day-56/Q1.c) |
| 57 | 1 | 18 Oct 2026 | Completed | [Q107 (Q1.c)](./Day-57/Q1.c) |
| 58 | 1 | 19 Oct 2026 | Completed | [Q108 (Q1.c)](./Day-58/Q1.c) |
| 59 | 1 | 20 Oct 2026 | Completed | [Q109 (Q1.c)](./Day-59/Q1.c) |
| 60 | 1 | 21 Oct 2026 | Completed | [Q110 (Q1.c)](./Day-60/Q1.c) |
| 61 | 1 | 22 Oct 2026 | Completed | [Q111 (Q1.c)](./Day-61/Q1.c) |
| 62 | 1 | 23 Oct 2026 | Completed | [Q112 (Q1.c)](./Day-62/Q1.c) |
| 63 | 1 | 24 Oct 2026 | Completed | [Q113 (Q1.c)](./Day-63/Q1.c) |
| 64 | 1 | 25 Oct 2026 | Completed | [Q114 (Q1.c)](./Day-64/Q1.c) |
| 65 | 1 | 26 Oct 2026 | Completed | [Q115 (Q1.c)](./Day-65/Q1.c) |
| 66 | 1 | 27 Oct 2026 | Completed | [Q116 (Q1.c)](./Day-66/Q1.c) |
| 67 | 1 | 28 Oct 2026 | Completed | [Q117 (Q1.c)](./Day-67/Q1.c) |
| 68 | 1 | 29 Oct 2026 | Completed | [Q118 (Q1.c)](./Day-68/Q1.c) |
| 69 | 1 | 30 Oct 2026 | Completed | [Q119 (Q1.c)](./Day-69/Q1.c) |
| 70 | 1 | 31 Oct 2026 | Completed | [Q120 (Q1.c)](./Day-70/Q1.c) |
| 71 | 1 | 01 Nov 2026 | Completed | [Q121 (Q1.c)](./Day-71/Q1.c) |
| 72 | 1 | 02 Nov 2026 | Completed | [Q122 (Q1.c)](./Day-72/Q1.c) |
| 73 | 1 | 03 Nov 2026 | Completed | [Q123 (Q1.c)](./Day-73/Q1.c) |
| 74 | 1 | 04 Nov 2026 | Completed | [Q124 (Q1.c)](./Day-74/Q1.c) |
| 75 | 1 | 05 Nov 2026 | Completed | [Q125 (Q1.c)](./Day-75/Q1.c) |
| 76 | 1 | 06 Nov 2026 | Completed | [Q126 (Q1.c)](./Day-76/Q1.c) |
| 77 | 1 | 07 Nov 2026 | Completed | [Q127 (Q1.c)](./Day-77/Q1.c) |
| 78 | 1 | 08 Nov 2026 | Completed | [Q128 (Q1.c)](./Day-78/Q1.c) |
| 79 | 1 | 09 Nov 2026 | Completed | [Q129 (Q1.c)](./Day-79/Q1.c) |
| 80 | 1 | 10 Nov 2026 | Completed | [Q130 (Q1.c)](./Day-80/Q1.c) |
| 81 | 1 | 11 Nov 2026 | Completed | [Q131 (Q1.c)](./Day-81/Q1.c) |
| 82 | 1 | 12 Nov 2026 | Completed | [Q132 (Q1.c)](./Day-82/Q1.c) |
| 83 | 1 | 13 Nov 2026 | Completed | [Q133 (Q1.c)](./Day-83/Q1.c) |
| 84 | 1 | 14 Nov 2026 | Completed | [Q134 (Q1.c)](./Day-84/Q1.c) |
| 85 | 1 | 15 Nov 2026 | Completed | [Q135 (Q1.c)](./Day-85/Q1.c) |
| 86 | 1 | 16 Nov 2026 | Completed | [Q136 (Q1.c)](./Day-86/Q1.c) |
| 87 | 1 | 17 Nov 2026 | Completed | [Q137 (Q1.c)](./Day-87/Q1.c) |
| 88 | 1 | 18 Nov 2026 | Completed | [Q138 (Q1.c)](./Day-88/Q1.c) |
| 89 | 1 | 19 Nov 2026 | Completed | [Q139 (Q1.c)](./Day-89/Q1.c) |
| 90 | 1 | 20 Nov 2026 | Completed | [Q140 (Q1.c)](./Day-90/Q1.c) |
| 91 | 1 | 21 Nov 2026 | Completed | [Q141 (Q1.c)](./Day-91/Q1.c) |
| 92 | 1 | 22 Nov 2026 | Completed | [Q142 (Q1.c)](./Day-92/Q1.c) |
| 93 | 1 | 23 Nov 2026 | Completed | [Q143 (Q1.c)](./Day-93/Q1.c) |
| 94 | 1 | 24 Nov 2026 | Completed | [Q144 (Q1.c)](./Day-94/Q1.c) |
| 95 | 1 | 25 Nov 2026 | Completed | [Q145 (Q1.c)](./Day-95/Q1.c) |
| 96 | 1 | 26 Nov 2026 | Completed | [Q146 (Q1.c)](./Day-96/Q1.c) |
