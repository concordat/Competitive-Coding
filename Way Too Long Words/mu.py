import sys

# n = int(sys.stdin.readline().rstrip())
n = 3

result = []
for _ in range(n):
    # s = sys.stdin.readline().rstrip()
    s = "bsoiesfoiesjf soiejfoiesjfesoifoesjf skefsef sojfoiesjifiesojfoes"
    if len(s) > 10:
        result.append(s[0] + str(len(s)-2) + s[-1])
    else:
        result.append(s)
for line in result:
    print(line, file=sys.stdout)
