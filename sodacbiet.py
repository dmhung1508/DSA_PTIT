def sieve_of_eratosthenes(limit):
    sieve = [True] * (limit + 1)
    sieve[0], sieve[1] = False, False
    for num in range(2, int(limit**0.5) + 1):
        if sieve[num]:
            for multiple in range(num*num, limit + 1, num):
                sieve[multiple] = False
    return [num for num, is_prime in enumerate(sieve) if is_prime]
# Generate all prime numbers up to 135
primes_up_to_135 = set(sieve_of_eratosthenes(135))

def is_special_number_final(n):
    total = sum(int(digit) for digit in str(n))
    return total in primes_up_to_135

def count_special_pairs_ultimate_optimized(N):
    special_nums = set(num for num in range(1, N + 1) if is_special_number_final(num))
    count = 0
    
    for x in special_nums:
        y = (N - x) // 2
        if y in special_nums:
            count += 1

    return count // 2

a= int(input())
print(count_special_pairs_ultimate_optimized(a))

