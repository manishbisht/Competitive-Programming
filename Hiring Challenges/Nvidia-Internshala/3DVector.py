class ThreeDVector:
    # Constructor
    def __init__(self, a, b, c):
        self.a = float(a)
        self.b = float(b)
        self.c = float(c)

    # Vector Addition
    def add(self, second):
        return ThreeDVector(self.a + second.a, self.b + second.b, self.c + second.c)

    # Vector Subtraction
    def sub(self, second):
        return ThreeDVector(self.a - second.a, self.b - second.b, self.c - second.c)

    # Scalar Multiplication
    def multiply(self, number):
        return ThreeDVector(self.a * number, self.b * number, self.c * number)

    # Vector Magnitude
    def magnitude(self):
        return (self.a ** 2 + self.b ** 2 + self.c ** 2) ** 0.5
