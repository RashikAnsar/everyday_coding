def compound_interest(principle, time, rate):
    amount = principle * (pow((1 + (rate / 100)), time))
    CI = amount - principle
    return CI


if __name__ == "__main__":
    print("==== Compound Interest Calc ====")
    amount = float(input("Enter Amount: "))
    time = float(input("Enter time: "))
    rate = float(input("Enter rate: "))
    print(f"The C.I is {compound_interest(amount, time, rate)}")
