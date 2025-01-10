class Solution {
public:
    long long modPow(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) { // If the exponent is odd
                result = (result * base) % mod;
            }
            base = (base * base) % mod; // Square the base
            exp /= 2; // Halve the exponent
        }
        return result;
    }
    
    int countGoodNumbers(long long n) {
        const long long MOD = 1e9 + 7;

        long long evenPositions = (n + 1) / 2; // Count of even-indexed positions
        long long oddPositions = n / 2;       // Count of odd-indexed positions

        // Calculate the powers under modulo
        long long powerOf5 = modPow(5, evenPositions, MOD);
        long long powerOf4 = modPow(4, oddPositions, MOD);

        return (powerOf5 * powerOf4) % MOD;
    }
};
