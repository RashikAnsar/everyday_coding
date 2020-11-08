# print ASCII Value and character for alphabet (AZaz)
# chr() to convert a number to ascii
# ord() to convert a character to an integer
def ascii_val():
    print("ASCII val - ASCII`` char")
    for i in range(65, 91):
        print(f"{i:^5} - {chr(i):^5}")

    for i in range(97, 123):
        print(f"{i:^5} - {chr(i):^5}")


if __name__ == "__main__":
    ascii_val()
