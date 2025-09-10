int romanToInt(char* s) {
    int values[128];  
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    int result = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int curr = values[(int)s[i]];
        int next = values[(int)s[i+1]];
        if (next > curr) {   // subtraction 
            result -= curr;
        } else {
            result += curr;
        }
    }
    return result;
}
