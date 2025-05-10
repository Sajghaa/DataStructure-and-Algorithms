 How It Works (Step-by-Step)

1. Get the length of the array 'n'.

2. Start a loop for 'i' from '0' to 'n-2':
   - Set a flag 'swapped = False' before each round.

3. Inside this loop, start another loop for 'j' from '0' to 'n-i-2':
   - Compare each pair of elements: 'my_array[j]' and 'my_array[j+1]'.
   - If they're in the wrong order (left is bigger), " swap them " and set 'swapped = True'.

4. After the inner loop:
   - If 'swapped' is still 'False', " break out early " — the array is sorted.

