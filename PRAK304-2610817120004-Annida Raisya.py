for _ in range(5):
    a = int(input("Input: "))

    if a == 0:
        hasil = "Nol"
    elif 1 <= a <= 9:
        hasil = "Satuan"
    elif 10 <= a <= 19:
        hasil = "Belasan"
    elif 20 <= a <= 99:
        hasil = "Puluhan"
    else:
        hasil = "Anda Menginput Melebihi Limit Bilangan"

    print("Output:", hasil)