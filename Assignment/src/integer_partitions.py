def partition(n):
    memo = {}

    for i in range(1, n + 1):
        memo[i, 1] = 1

        for j in range(2, n + 1):
            if i == j:
                memo[i, j] = 1
            else:
                memo[i, j] = 0

    for i in range(3, n + 1):
        for j in range(2, i):
            memo[i, j] = memo[i - j, j] + memo[i - 1, j - 1]

    result = 0
    for i in range(1, n + 1):
        result += memo[n, i]

    return result


for i in range(1, 201):
    print(i, partition(i))
