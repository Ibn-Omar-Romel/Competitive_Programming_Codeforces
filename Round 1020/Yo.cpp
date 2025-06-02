// Line 1: b = 3;
t1 = 3
b = t1

// Line 2: a = 1 + b * 3;
t2 = b * 3
t3 = 1 + t2
a = t3

// Line 3: if (a > b)
if a > b goto L1
goto L5

// Line 4–9: if-block starts
L1:
  // a = a - 2;
  t4 = a - 2
  a = t4

  // for (; a > b; a--) { ... }
  L2:
    if a <= b goto L4   // loop condition check
    // b = a + b;
    t5 = a + b
    b = t5
    // func1(b);
    param b
    call func1
    // a--;
    t6 = a - 1
    a = t6
    goto L2  // repeat loop
  L4:
  goto L5   // exit from if block

// Line 10: after if
L5:

// Line 11–16: switch (b)
L6:
  if b == 1 goto CASE1
  if b == 2 goto CASE2
  goto DEFAULT

CASE1:
  t7 = a - 1
  a = t7
  goto END_SWITCH

CASE2:
  t8 = a * 3
  t9 = -t8
  t10 = t9 + 5
  b = t10
  goto END_SWITCH

DEFAULT:
  a = 0

END_SWITCH:
