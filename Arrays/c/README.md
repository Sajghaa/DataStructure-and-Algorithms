# Array Insertion in C

this project demonstrates how to **insert an element into an array** The program checks for overflow, validates the position, shifts elements to make space, and then insets the new element.

---

## 📌 Features
- **Overflow protection**: prevents inserting when the array is full.
- **Position validations**: ensures insertions happens at a valid index.
- **Element Shifting**: moves elements to the right to create space.
- **Size update**: increments the array size after successful insertion.

---

## 🧠 Algorithm

1. **Check overflow**
    - If current size `*n >= capacity`, print error and stop.
2. **Check position validity**
    - If `pos < 0 || pos > *n`, print error and stop.

3. **Shift elements right**
    - For `i = *n` down to `pos+1`,move each element one step right.

4. **Insert element**
    - Place the new element at `arr[pos]`.

5. **Update Size**
    - Increment `(*n)++`