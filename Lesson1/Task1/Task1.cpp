#include <iostream>
#include <fstream>
void shift_to_left(int* arr, int N) {
    int temp = arr[0];
    for (int i = 0; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[N - 1] = temp;

}
void shift_to_right(int* arr, int M) {
    int temp = arr[M - 1];
    for (int i = M - 2; i >= 0; i--) {

        arr[i + 1] = arr[i];
    }
    arr[0] = temp;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream fin;
    int N = 0, M = 0;
    int* arr1;
    int* arr2;
    fin.open("in.txt");
    if (!fin.is_open()) {
        std::cout << "Невозможно открыть исходный файл!";
        return -1;
    }
    else {
        fin >> N;
        arr1 = new int[N];
        for (int i = 0; i <= N - 1; i++) {

            fin >> arr1[i];

        }
        fin >> M;
        arr2 = new int[M];
        for (int i = 0; i <= M - 1; i++) {

            fin >> arr2[i];

        }
        shift_to_left(arr1, N);
        shift_to_right(arr2, M);
    }
    fin.close();

    std::ofstream fout;
    fout.open("out.txt");
    if (!fout.is_open()) {
        std::cout << "Невозможно открыть файл для записи!";
        return -1;
    }
    else {
        fout << M;
        fout << std::endl;
        for (int i = 0; i <= M - 1; i++) {
            fout << arr2[i] << ' ';
        }
        fout << std::endl;
        fout << N << std::endl;
        for (int i = 0; i <= N - 1; i++) {
            fout << arr1[i] << ' ';
        }

    }

    delete[] arr1;
    delete[] arr2;
    return 0;
}