int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers <= 1 are not prime
    }
    if (num == 2 || num == 3) {
        return 1;  // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;  // Eliminate even numbers and multiples of 3
    }

    // Check divisibility from 5 onwards, skipping even numbers
    for (int i = 5; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;  // Found a divisor, not prime
        }
    }

    return 1;  // Prime number
}