# Jump A or B CodeChef

This C++ code processes multiple test cases to determine whether it's possible to split a total amount `M` into exactly `N` parts, where each part is either of value `A` or `B`. For each test case, it calculates whether there's a non-negative integer `x` (number of `A`-valued parts) such that the remaining `N - x` parts are of value `B`, and the total sum of these parts equals `M`. It solves the equation `x * A + (N - x) * B = M` and checks if `x` is an integer within the valid range `[0, N]`.

The key step is simplifying the equation to find `x = (M - N * B) / (A - B)` and validating that the denominator is non-zero, the division results in an integer, and the result lies within the valid range. If all these conditions are met, it prints "Yes"; otherwise, "No". This approach efficiently checks for a solution using basic arithmetic and avoids looping through all combinations.
