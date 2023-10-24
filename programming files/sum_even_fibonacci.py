// Commented by Connor Brown on 10/24/23

a, b = 0, 1 // variable a is set to 0 and variable b is set to 1
sum_even = 0
while b < 4000000:
    if b % 2 == 0:    // If b is even,
        sum_even += b // add b to sum_even
    a, b = b, a+b     // add the previous value of b to b

print(sum_even) // print sum_even

# answer should be 4613732
