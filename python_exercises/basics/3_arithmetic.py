# Calculate area of circle pi(r)^2 and print with 2 decimals
pi = 3.14
radius = 7
area = pi * (radius ** 2)  # area = pi * (radius * radius)
print(f"Area of circle: {area:.2f}")

# Calculate compound interest
# amount = principle amount * ( 1 + Rate / 100) ^ time
principle = 5000
rate = 4
time = 6
amount = principle * ((1 + (rate / 100)) ** time)
print(
    f"Amount = {amount:.2f} after {time} years at {rate}% interest on given amount {principle}"
)

# Calculate ex: (x^2-8x+12)
# Delta of quadratic equation (Delta = b^2 - 4ac )
# Vietas formula for sum and product
# Roots x1 and x2
a = 1
b = -8
c = 12
delta = b**2 - (4 * a*c)
x1 = (-b + delta ** (1/2)) / (2 * a)
x2 = (-b - delta ** (1/2)) / (2 * a)
print(f"Delta: {delta}")
print(f"Sum: {-b/a}\tProduct: {c/a}")
print(f"Roots are: {x1} and {x2}")

# Calculate mean, variance, std.deviation
# 4,5,7
x1, x2, x3 = 4, 5, 6
mean = (x1 + x2 + x3) / 3
variance = ((x1 - mean)**2 + (x2 - mean)**2 + (x3 - mean)**2) / 3
std_dev = variance**(1/2)
print(f"data: {x1},{x2},{x3}")
print(f"mean: {mean:.3f}\tVariance:{variance:.3f}\tStd.Deviation:{std_dev:.3f}")

# // is used for integer division
# Learn Progressions(sequences like Arithmetic, Geometric and Harmonic)
