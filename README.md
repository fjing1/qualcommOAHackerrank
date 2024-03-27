# qualcommOAHackerrank
all test passed
q1:recusive function, essentially is get calculate 3 pwoer 5, like 243
q2: find the x value after execution. this is a way to get square root
int n = 841;
int x = 1;
for (int i = 0; i < 50; i++){
    int nx = (x + n / x) / 2;
    x = nx;
}
