def bin_add(bin1, bin2):
    max_len = max(len(bin1), len(bin2))
    bin1 = bin1.zfill(max_len)
    bin2 = bin2.zfill(max_len)

    carry = 0
    result = []

    for i in range(max_len - 1, -1, -1):
        bit1 = int(bin1[i])
        bit2 = int(bin2[i])

        bit_sum = bit1 + bit2 + carry
        result.insert(0, str(bit_sum % 2))
        carry = bit_sum // 2

    if carry:
        result.insert(0, str(carry))

    return ''.join(result)

def bin_sub(bin1, bin2):
    leng = len(bin1)
    bin1 = bin1.zfill(leng)
    bin2 = bin2.zfill(leng)

    borrow = 0
    result = []

    for i in range(leng - 1, -1, -1):
        bit1 = int(bin1[i])
        bit2 = int(bin2[i])

        bit_diff = bit1 - bit2 - borrow

        if bit_diff < 0:
            bit_diff += 2
            borrow = 1
        else:
            borrow = 0

        result.insert(0, str(bit_diff))

    return ''.join(result)

def bin_mult(bin1, bin2):
    result = "0"

    for i in range(len(bin2) - 1, -1 , -1):
        if bin2[i] == "1":
            shifted_bin1 = bin1 + "0" * (len(bin2) - i - 1)
            result = bin_add(result, shifted_bin1)

    return result

while True:
    print("Дія:")
    print("1. Додавання")
    print("2. Віднімання")
    print("3. Множення")
    print("4. Вихід")

    choice = input("Виберіть операцію (1/2/3/4): ")

    if choice == '3':
        print("Дякую, що використовуєте калькулятор для двійкових чисел.")
        break

    binary_num1 = input("Введіть перше двійкове число: ")
    binary_num2 = input("Введіть друге двійкове число: ")


    if choice == '1':
        result = bin_add(binary_num1, binary_num2)
        print("Результат: " + result)
    elif choice == '2':
        result = bin_sub(binary_num1, binary_num2)
        print("Результат: " + result)
    elif choice == '3':
        result = bin_mult(binary_num1,binary_num2)
        print("Результат: " + result)
