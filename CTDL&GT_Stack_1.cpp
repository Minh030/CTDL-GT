#include <stdio.h>

#define MAX_SIZE 100 // Kích thước tối đa của stack

// Khai báo cấu trúc dữ liệu Stack
typedef struct {
    int data[MAX_SIZE]; // Mảng lưu trữ dữ liệu trong stack
    int top; // Vị trí của phần tử đầu trong stack
} Stack;

// Hàm khởi tạo stack rỗng
void init(Stack* s) {
    s->top = -1;
}

// Hàm thêm giá trị vào đỉnh stack (push)
void push(Stack* s, int value) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack tran!");
    } else {
        s->data[++(s->top)] = value;
    }
}

// Hàm xóa phần tử đầu trong stack (pop)
void pop(Stack* s) {
    if (s->top == -1) {
        printf("Stack rong!");
    } else {
        s->top--;
    }
}

// Hàm kiểm tra stack có trống hay không
int isEmpty(Stack* s) {
    return (s->top == -1);
}

// Hàm lấy giá trị phần tử đầu trong stack mà không xóa nó (top)
int getTop(Stack* s) {
    if (s->top == -1) {
        printf("Stack rong!");
        return -1;
    } else {
        return s->data[s->top];
    }
}

