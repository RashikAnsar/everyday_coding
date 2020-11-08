# Find Simple interest
# Simple Interest = PTR / 100

def simple_interest(principle, time, rate):
    return (principle * time * rate) / 100


if __name__ == "__main__":
    print("==== Simple Interest Calc ====")
    amount = float(input("Enter Amount: "))
    time = float(input("Enter time: "))
    rate = float(input("Enter rate: "))
    print(f"The S.I is {simple_interest(amount, time, rate)}")
