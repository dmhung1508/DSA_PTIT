def most_frequent_element(N, K, A):
    frequency = {}
    for num in A:
        frequency[num] = frequency.get(num, 0) + 1

    max_frequency = max(frequency.values())
    max_frequency_elements = [num for num, freq in frequency.items() if freq == max_frequency]
    max_frequency_elements.sort()

    if K >= max_frequency:
        return max_frequency_elements[0], max_frequency
    else:
        return max_frequency_elements[0], K

# Đọc đầu vào từ bàn phím
def read_input():
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    return N, K, A

# In kết quả
def print_output(output):
    print(output[0], output[1])

# Đọc đầu ra từ chuỗi
def from_output_string(output_string):
    return tuple(map(int, output_string.strip().split()))

# Chuyển đổi đầu vào thành chuỗi
def to_input_string(inputs):
    N, K, A = inputs
    input_string = f"{N} {K}\n"
    input_string += " ".join(str(x) for x in A)
    return input_string

# Ví dụ sử dụng
inputs = read_input()
output = most_frequent_element(*inputs)
print_output(output)