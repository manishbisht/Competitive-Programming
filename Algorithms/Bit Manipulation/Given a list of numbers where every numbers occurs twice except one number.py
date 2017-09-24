def answer(numbers):
    ans = numbers[0]
    for i in numbers[1:]:
        ans ^= i
    return ans
