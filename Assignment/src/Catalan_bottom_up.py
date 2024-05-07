def Catalan(n):
    memo = {}

    if n < 0:
        return 0
    memo[0] = 1

    for i in range(1, n + 1):
        result = 0

        for j in range(i):
            result += memo[j] * memo[i - 1 - j]

        memo[i] = result

    return memo[n]


print(Catalan(5))
