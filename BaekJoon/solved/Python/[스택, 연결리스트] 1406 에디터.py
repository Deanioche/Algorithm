import sys
w = sys.stdin.readline
p = sys.stdout.write


def _1406(data: list, op: list) -> str:
    data = [None] + data + [None]
    nxt = [x for x in range(1, len(data))] + [None]
    pre = [None] + [x for x in range(len(data) - 1)]
    c = len(data) - 1

    for i in op:
        if i[0] == 'L' and pre[c]:
            c = pre[c]
        elif i[0] == 'D' and nxt[c] != None:
            c = nxt[c]
        elif i[0] == 'B' and pre[c]:
            nxt[pre[pre[c]]] = nxt[pre[c]]
            pre[c] = pre[pre[c]]
        elif i[0] == 'P':
            data.append(i[1])
            nxt.append(c)
            pre.append(pre[c])
            nxt[pre[c]] = len(data) - 1
            pre[c] = len(data) - 1

    res = ''
    srt = nxt[0]
    while data[srt] != None:
        res += data[srt]
        srt = nxt[srt]
    return res


if __name__ == "__main__":
    l = list(w().strip())
    M = int(w())
    op = [w().split() for _ in range(M)]
    p("%s" % _1406(l, op))
