/* QUESTIONS 8-DIVIDE TWO INTEGERS WITHOUT USING MULTIPLICATION DIVISION AND MOD OPERATOR  */
/* this is extremely naive approach -: time complexity-: O(dividend) agar divsior =1 hogya. */
//Space Comp;exity-: O(1)
class Solution {
public:
    int divide(int dividend, int divisor) {
        // Division by zero case
        if (divisor == 0) {
            return 0; // safe fallback
        }

        // Decide sign of result
        int sign;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            sign = -1;
        } else {
            sign = 1;
        }

        // Work with positive values
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long quotient = 0;
        while (a >= b) {
            a -= b;
            quotient++;
        }

        return sign * (int)quotient;
    }
};


/* OPTIMISED APPROACH */
//TIME COMPLEXITY-: O(LOG N)^2 
//SPACE COMPLEXITY-:O(1)
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) return INT_MAX; // division by zero
        if (dividend == INT_MIN && divisor == -1) return INT_MAX; // overflow

        int sign;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            sign = -1;
        } else {
            sign = 1;
        }

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long quotient = 0;

        while (a >= b) {
            long long temp = b, multiple = 1;

            // double divisor until it exceeds dividend
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;          // subtract largest chunk
            quotient += multiple; // add how many times
        }

        return sign * (int)quotient;
    }
};
