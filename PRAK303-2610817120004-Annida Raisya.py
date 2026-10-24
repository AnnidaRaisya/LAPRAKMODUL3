for _ in range(3):
    N = int(input("Input: "))

    if N > 0:
        hasil = "positif"
    elif N < 0:
        hasil = "negatif"
    else:
        hasil = "nol"

    print("Output:", hasil)