for _ in range(3):
    line = input("Input: ")
    if not line.strip():
        continue
    data = list(map(int, line.split()))

    if len(data) == 2:
        if data[0] > data[1]:
            data[0], data[1] = data[1], data[0]
    elif len(data) == 3:
        if data[0] > data[1]:
            data[0], data[1] = data[1], data[0]
        if data[0] > data[2]:
            data[0], data[2] = data[2], data[0]
        if data[1] > data[2]:
            data[1], data[2] = data[2], data[1]

    print("Output:", *data)