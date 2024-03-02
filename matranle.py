def is_odd_matrix(matrix):
    N = len(matrix)
    
    def get_submatrix_sum(x, y, size):
        total = 0
        for i in range(size):
            for j in range(size):
                total += matrix[x + i][y + j]
        return total

    for size in range(1, N + 1):
        all_submatrices_even = True
        for i in range(N - size + 1):
            for j in range(N - size + 1):
                if get_submatrix_sum(i, j, size) % 2 != 0:
                    all_submatrices_even = False
                    break
            if not all_submatrices_even:
                break
        if all_submatrices_even:
            return "NO"
    return "YES"

def check_matrices(test_cases):
    return [is_odd_matrix(matrix) for matrix in test_cases]

def from_input_string(input_string):
    lines = input_string.strip().split("\n")
    t = int(lines[0])
    test_cases = []
    index = 1
    for _ in range(t):
        n = int(lines[index])
        index += 1
        matrix = [list(map(int, lines[index + i].split())) for i in range(n)]
        test_cases.append(matrix)
        index += n
    return test_cases

def to_output_string(output):
    return "\n".join(output)

def main(input_string):
    test_cases = from_input_string(input_string)
    output = check_matrices(test_cases)
    output_string = to_output_string(output)
    return output_string

def user_interface():
    t = int(input().strip())
    input_string = str(t) + "\n"
    
    for _ in range(t):
        n = int(input().strip())
        input_string += str(n) + "\n"
        for _ in range(n):
            row = input().strip()
            input_string += row + "\n"
    print(main(input_string))

if __name__ == "__main__":
    user_interface()
