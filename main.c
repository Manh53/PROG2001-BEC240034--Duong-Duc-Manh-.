Bai1.c

#include <stdio.h>

int main() {
    int a, b, n;
    int sum = 0;

    printf("Nhap a, b, n: ");
    scanf("%d %d %d", &a, &b, &n);

    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            sum += i;
        }
    }

    printf("Tong = %d", sum);

    return 0;
}

Bai2.c

#include <stdio.h>

int main() {
    for (int i = 10; i <= 99; i++) {
        int a = i / 10;   // hàng chục
        int b = i % 10;   // hàng đơn vị

        if (a * b == 2 * (a + b)) {
            printf("%d ", i);
        }
    }

    return 0;
}


Bai3.c

#include <stdio.h>

void giaiPT(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        float x = -b / a;
        printf("Nghiem x = %.2f\n", x);
    }
}

int main() {
    float a, b;

    printf("Nhap a, b: ");
    scanf("%f %f", &a, &b);

    giaiPT(a, b);

    return 0;
}

Bai7.c

#include <stdio.h>

int main() {
    char c;

    printf("Nhap ky tu: ");
    scanf(" %c", &c);  // có dấu cách trước %c để tránh lỗi

    if (c >= '0' && c <= '9') {
        printf("Ky tu so la: %c\n", c);
    } 
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        
        // chuyển sang chữ hoa nếu là chữ thường
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }

        printf("Ky tu chu la: %c\n", c);
    } 
    else {
        printf("Khong phai so hoac chu cai\n");
    }

    return 0;
}
