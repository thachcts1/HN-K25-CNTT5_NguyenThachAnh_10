#include <stdio.h>

int main() {
    int arr[100];
    int number = 0;
    int choice;

    do {
        printf("\n|------------------MENU------------------|\n");
        printf("1. Nhap so luong phan tu va gia tri tung phan tu cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Tinh tong cua tat ca cac so chan va so le trong mang\n");
        printf("4. In ra cac phan tu co index la so chan trong mang\n");
        printf("5. Them moi mot phan tu vao dau mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu tang dan (Selection Sort)\n");
        printf("8. Kiem tra su ton tai cua phan tu trong mang (Binary Search)\n");
        printf("9. In ra cac phan tu >= k\n");
        printf("10. Dua so duong truoc, so am sau nhung giu thu tu ban dau\n");
        printf("11. Thoat MENU\n");
        printf("=========================================\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                do {
                    printf("Nhap so luong phan tu: ");
                    scanf("%d", &number);
                    if (number <= 0 || number > 100)
                        printf("So luong khong hop le!\n");
                } while (number <= 0 || number > 100);

                for (int i = 0; i < number; i++) {
                    printf("Nhap arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            }

            case 2: {
                if (number == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                printf("Cac phan tu trong mang: ");
                for (int i = 0; i < number; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            }

            case 3: {
                if (number == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                int tongChan = 0, tongLe = 0;
                for (int i = 0; i < number; i++) {
                    if (arr[i] % 2 == 0)
                        tongChan += arr[i];
                    else
                        tongLe += arr[i];
                }
                printf("Tong so chan: %d\n", tongChan);
                printf("Tong so le: %d\n", tongLe);
                break;
            }

            case 4: {
                if (number == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                printf("Cac phan tu co index chan: ");
                for (int i = 0; i < number; i += 2)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            }

            case 5: {
                if (number >= 100) {
                    printf("Mang day, khong the them!\n");
                    break;
                }
                int value;
                printf("Nhap gia tri muon them vao dau mang: ");
                scanf("%d", &value);
                for (int i = number; i > 0; i--)
                    arr[i] = arr[i - 1];
                arr[0] = value;
                number++;
                printf("Da them %d vao dau mang!\n", value);
                break;
            }

            case 6: {
                if (number == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                int pos;
                printf("Nhap vi tri can xoa (0 -> %d): ", number - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= number) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (int i = pos; i < number - 1; i++)
                    arr[i] = arr[i + 1];
                number--;
                printf("Da xoa phan tu tai vi tri %d\n", pos);
                break;
            }

            case 7: {
                if (number == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                for (int i = 0; i < number - 1; i++) {
                    int min = i;
                    for (int j = i + 1; j < number; j++) {
                        if (arr[j] < arr[min])
                            min = j;
                    }
                    if (min != i) {
                        int temp = arr[i];
                        arr[i] = arr[min];
                        arr[min] = temp;
                    }
                }
                printf("Da sap xep mang tang dan!\n");
                break;
            }


            case 11:
                printf("Good bye!!!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 11);

    return 0;
}
