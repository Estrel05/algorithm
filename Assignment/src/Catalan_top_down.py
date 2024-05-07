def memoize(f):
    memo = {}

    def helper(x):
        if x not in memo:
            memo[x] = f(x)
        return memo[x]

    return helper


def catalan(n):
    if n < 0:
        return 0
    if n == 0:
        return 1

    result = 0
    for i in range(n):
        result += catalan(i) * catalan(n - 1 - i)
    return result


Catalan = memoize(catalan)

print(Catalan(30))
