int main() {
    Stack s; // Khởi tạo đối tượng Stack

    init(&s); // Khởi tạo stack rỗng

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("Top of stack: %d\n", getTop(&s)); // In giá trị phần tử đầu trong stack
    pop(&s); // Xóa phần tử đầu trong stack
    printf("Top of stack after pop: %d\n", getTop(&s)); // In giá trị phần tử đầu trong stack sau khi pop

    if (isEmpty(&s)) {
        printf("Stack rong!\n"); // Kiểm tra stack có trống hay không
    } else {
        printf("Stack khong rong!\n");
    }

    return 0;
}
