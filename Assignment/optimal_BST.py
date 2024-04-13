def chain_mult(plist):
    N = len(plist)
    kk = {}

    def memoize(f):
        memo = {}

        def helper(x, y):
            if (x, y) not in memo:
                memo[x, y] = f(x, y)
            return memo[x, y]

        return helper

    def opt(i, j):
        if i > j:
            kk[i, j] = 0
            return 0
        if i == j:
            kk[i, j] = i
            return 1

        min = 100000
        pd = 0
        for k in range(i, j + 1):
            pd += plist[k - 1]
        for k in range(i, j + 1):
            pn1 = 0
            pn2 = 0
            for l in range(i, k):
                pn1 += plist[l - 1]
            for l in range(k + 1, j + 1):
                pn2 += plist[l - 1]
            temp = 1 + pn1 * opt(i, k - 1) / pd + pn2 * opt(k + 1, j) / pd
            if temp < min:
                min = temp
                kk[i, j] = k
        return min

    def optimal_bst(i, j):
        if i > j:
            return None

        node = {"root": None, "left": None, "right": None}
        node["root"] = kk[i, j]
        node["left"] = optimal_bst(i, node["root"] - 1)
        node["right"] = optimal_bst(node["root"] + 1, j)

        return node

    def print_tree(node, level=0):  # BST를 왼쪽으로 90도 회전된 상태로 출력한다.
        if node:
            print_tree(node["right"], level + 1)
            print("    " * level + str(node["root"]))
            print_tree(node["left"], level + 1)

    opt = memoize(opt)
    print("table of opt[i,j]\n")
    for i in range(1, N + 1):
        for j in range(1, N + 1):
            if i > j:
                print("    ", end=" ")
            else:
                print("{:.2f}".format(opt(i, j)), end=" ")
        print()
    print()

    print("table of k[i,j]\n")
    for i in range(1, N + 1):
        for j in range(1, N + 1):
            if i > j:
                print("  ", end=" ")
            else:
                print("{:2}".format(kk[i, j]), end=" ")
        print()
    print()

    tree = optimal_bst(1, N)
    print("optimal BST\n")
    print_tree(tree)
    print()


l1 = [0.4, 0.05, 0.25, 0.3]
l2 = [0.1, 0.1, 0.2, 0.3, 0.1, 0.1, 0.1]
l3 = [0.15, 0.2, 0.05, 0.3, 0.1, 0.1, 0.05, 0.05]
l4 = [0.08, 0.12, 0.05, 0.15, 0.2, 0.05, 0.05, 0.1, 0.1, 0.1]
plists = [l1, l2, l3, l4]

for plist in plists:
    chain_mult(plist)
