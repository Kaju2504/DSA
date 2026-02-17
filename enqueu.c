#include <stdio.h>
#define N 5

int queue[N];
int f = -1, r= -1;

void EQ(int value) {
    if (r == N - 1) {
        printf("Queue Overflow\n");
        return;
    }

    if (f == -1)  
        f = 0;

    r++;
    queue[r] = value;
    printf("%d inserted into queue\n", value);
}

void display() {
    if (f == -1) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = f; i <= r; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    EQ(10);
    EQ(20);
    EQ(30);
    display();
}















