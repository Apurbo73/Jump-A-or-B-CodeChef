# Jump A or B CodeChef

This C++ code processes multiple test cases to determine whether it's possible to split a total amount `M` into exactly `N` parts, where each part is either of value `A` or `B`. For each test case, it calculates whether there's a non-negative integer `x` (number of `A`-valued parts) such that the remaining `N - x` parts are of value `B`, and the total sum of these parts equals `M`. It solves the equation `x * A + (N - x) * B = M` and checks if `x` is an integer within the valid range `[0, N]`.

The key step is simplifying the equation to find `x = (M - N * B) / (A - B)` and validating that the denominator is non-zero, the division results in an integer, and the result lies within the valid range. If all these conditions are met, it prints "Yes"; otherwise, "No". This approach efficiently checks for a solution using basic arithmetic and avoids looping through all combinations.


In **C++**, a **loop** is a control structure that allows you to **execute a block of code repeatedly** as long as a certain condition is true. Loops are useful when you want to perform a task multiple times, such as processing arrays, taking multiple inputs, or repeating calculations.

---

### 🔄 **Types of Loops in C++:**

1. ### **`for` loop** – when you know how many times to repeat

   
   for (int i = 0; i < 5; i++) {
       cout << i << " ";
   }
    Output: 0 1 2 3 4
   

2. ### **`while` loop** – when you repeat as long as a condition is true

   
   int i = 0;
   while (i < 5) {
       cout << i << " ";
       i++;
   }
  

3. ### **`do...while` loop** – similar to `while`, but runs at least once

  
   int i = 0;
   do {
       cout << i << " ";
       i++;
   } while (i < 5);


---

### 🔁 **How Loops Work**

* **Initialization**: Set a starting value (e.g., `i = 0`)
* **Condition**: Check whether to continue (e.g., `i < 5`)
* **Update**: Change the variable (e.g., `i++`)

---

### 🧠 Example Use Case:


int sum = 0;
for (int i = 1; i <= 100; i++) {
    sum += i;  // Adds 1 to 100
}
cout << "Sum is " << sum;


> Loops make your code shorter, cleaner, and more efficient when repetition is needed.

---

