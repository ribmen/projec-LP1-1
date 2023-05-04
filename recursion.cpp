//make a recursive funtion that returns powers of n numbers, being n an integer and n >= 0

int power(int base, int exponent) {
    if(exponent = 1) return base;
    return base * power(int base, int exponent - 1);
}

    int main( ) {
        int x = 10;
        int y = 3;
        int z = power(x, y);
        cout << z << endl;
    }
        