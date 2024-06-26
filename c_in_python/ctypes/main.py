import ctypes

lib = ctypes.CDLL('./sum_of_squares_ctypes.so')

lib.calculate_sum_of_squares.argtypes = [ctypes.c_char_p]
lib.calculate_sum_of_squares.restype = ctypes.c_long

total = lib.calculate_sum_of_squares(b"../numbers.txt")
print(total)
