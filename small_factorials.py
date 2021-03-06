test_case = int(input())

while (test_case):
    value = int(input())
    factorial = 1
    i = value
    while (i != 1):
        factorial = factorial * i
        i = i - 1
    print(factorial)
    test_case = test_case - 1