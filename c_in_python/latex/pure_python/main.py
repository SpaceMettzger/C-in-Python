def calculate_sum_of_squares():
    file_path = "../numbers.txt"
    with open(file_path, "r") as f:
        total = sum(int(row.strip()) ** 2 for row in f)

    print(total)


if __name__ == "__main__":
    calculate_sum_of_squares()
