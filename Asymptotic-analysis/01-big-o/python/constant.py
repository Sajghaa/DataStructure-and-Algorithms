
def demonstrate_constant_time():

    print("=" * 60)
    print("O(1) - Constant Time Examples")
    print("=" * 60)

    print("Example 1: Array access by index")
    arr = [10, 20, 30, 40, 50, 60, 70, 80, 80, 90, 100]
    index = 5
    value = arr[index]
    print(f"1. Access arr[{index}] = {value} (Instant ! 0(1))")

    print("Example 2: Array update by index")
    arr[3] = 999
    print(f"2. Update arr[3] = 999 -> {arr} (Instant! 0(1))")

    print("Example 3: Arithmetic operations")
    a = 5
    b = 10
    result = (a * b) + (b / a) -3
    print(f"3. Arithmetic: ({a} * {b}) + ({b} / {a}) - 3 = {result:.2f} (0(1))")

    print("Example 3: Hash map lookup (dictionary)")
    phone_book = {"Alice": 123456, "Bob": 789012, "Charlie": 345678}
    name = "Bob"
    phone = phone_book[name]
    print(f"4. Dict lookup: {name} -> {phone} (O(1) average case)")

    print("Example 5. Fixed number of operations")
    x = 10
    y = 20
    z = x + y
    w = z * 2
    print(f"5. Fixed operations: {x} + {y} = {z}, {z} * 2 = {w} (0(1))")


def analyze_complexity():
    print("\n" + "=" * 60)
    print("Complexity Analysis")
    print("=" * 60)
    print("Time Complexity: 0(1)")
    print("Space Complexity: O(1)")
    print("\nWhy?")
    print("- No loops or iterations.")
    print("- Each operations take a constant number of steps.")
    print("- The input size (n) doesn't affect the runtime.")


def is_constant_time(code_pattern):

    print("Rule: If there are no loops and no recursive calls, it's almost certainly O(1)")
    patterns = ["arr[index]", "dict[key]", "set.add()", "len(arr)"]

    print("\n" + "=" * 60)
    print("How to Spot O(1) in Code")
    print("=" * 60)
    print("Look for:")
    print("- Direct array access: arr[i]")
    print("- Hash map lookups: dict[key]")
    print("- Arithmetic operations: a + b * c")
    print("- Fixed number of statements")
    print("- No loops or recursion")
    print("\nIf you see these, it's O(1)!")



if __name__ == "__main__":
    demonstrate_constant_time()
    analyze_complexity()
    is_constant_time(None)