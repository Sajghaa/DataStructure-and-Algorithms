import sys
import time
from array import array


def visualize_array_in_memory():
    """
    Before we code, let's see what an array looks like in memory.

    Imagine your computer's RAM as a giant street with houses:

    RAM Street:
    Address: 1000 1001 1002 1003 1004 1005 1006 1007
            |____||___||__| |__||___| |__| |__| |__|
    
    An array [10, 20, 30, 40] reserves 4 consecutive house:

    Address: 1000 1004 1008 1012 1016 1020 1024 1028 
             [__] |__| |__| |__| |___||__| |__| |__|
              ^                    ^
              |                    |
            arr[0]              arr[3]

    Key INSIGHT:
    -   The array ONLY remembers address 1000 (base address)
    -   To find arr[2]: base_address + (2 x  size_of_element)
    -   That's why array access is 0(1) - it's just math!

    if each integer uses 4 bytes

    arr[0] -> 1000
    arr[1] -> 1004
    arr[2] -> 1008
    arr[3] -> 1012

    Formula: address_of_element = base_address + (index x size_of_element)

    So to find arr[2]:

    Why arrays are fast:

    1000 + (2 x 4) = 1008

    - The computer calculates the address instantly using math.
    - It does not search one-by-one.

    That's why array access is 0(1)
    (Constant Time)
    """