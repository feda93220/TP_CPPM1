# from string import digits, ascii_letters, ponctuation
# from itertools import product
from timeit import Timer


def try_password(password):
    print(password)


def main():
    # for passcode in product(digits, repeat=4):
    #     try_password(passcode)

    # for passcode in product(ascii_letters, repeat=4):
    #     try_password(passcode)

    # chars = digits + ascii_letters + ponctuation
    # for passcode in product(chars, repeat=8):
    #     try_password(passcode)

    for i in range(100000):
        try_password(i)


if __name__ == "__main__":
    elapsed_time = Timer(main).timeit(number=1)
    print(f"Temps écoulé en Python: {elapsed_time} secondes.")
