#include <iostream>
using namespace std;
//�������� ������������� �������
int* create(int n) {
    int* arr = new int[n];
    int element, i = 0;
    while (element != 0) {
        cin >> element;
        arr[i] = element;
        i++;
    }
    return arr;
}
//�������� �������
void destroy(int* arr) {
    delete[] arr;
}
//����� ����� �������
int length(int* arr) {
    int i = 0;
    while (arr[i] != 0) {
        i++;
    }
    return i;;
}
//������ ������� � ��� �����
void print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl << size;
}
//�������� ���������
int* deletefromarr(int* arr, int& size) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] < 5) {
            int tmp = arr[count];
            arr[count] = arr[i];
            arr[i] = tmp;
            count++;
        }
    size = size - count;
    int* newarr = new int[size];
    for (int i = 0; i < size; i++)
        newarr[i] = arr[i + count];

    return newarr;

}

int main() {
    int n = 100000;
    int* arr = create(n);
    int size = length(arr);
    int* newarr = deletefromarr(arr, size);
    int newsize = length(newarr);
    print(newarr, newsize);
    destroy(arr);
    destroy(newarr);
    return 0;
}
