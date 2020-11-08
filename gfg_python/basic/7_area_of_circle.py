# Caculate area of circle
from math import pi


def area_of_circle(radius):
    return pi * pow(radius, 2)


if __name__ == "__main__":
    r = float(input("Enter radius: "))
    # Printing area with 3 precision
    print(f"Area is {area_of_circle(r):.3f}")
