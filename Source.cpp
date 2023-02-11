#include<iostream>
using namespace std;
class ArrayMath {
private:
    int* intArr;
    int intArrSize;
    float* floatArr;
    int floatArrSize;
public:
    ArrayMath(int* intArr, int intArrSize, float* floatArr, int floatArrSize) : intArr(intArr), intArrSize(intArrSize), floatArr(floatArr), floatArrSize(floatArrSize) {}

    int* multiplyIntArray(float* floatArr) {
        for (int i = 0; i < intArrSize; i++) {
            intArr[i] *= floatArr[i];
        }
        return intArr;
    }

    int* divideIntArray(float* floatArr) {
        for (int i = 0; i < intArrSize; i++) {
            intArr[i] /= floatArr[i];
        }
        return intArr;
    }
};
int main() {
    int intArr[] = { 1, 2, 3, 4, 5 };
    int intArrSize = sizeof(intArr) / sizeof(intArr[0]);
    float floatArr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    int floatArrSize = sizeof(floatArr) / sizeof(floatArr[0]);

    ArrayMath arrayMath(intArr, intArrSize, floatArr, floatArrSize);

    int* multipliedIntArr = arrayMath.multiplyIntArray(floatArr);
    int* dividedIntArr = arrayMath.divideIntArray(floatArr);

    for (int i = 0; i < intArrSize; i++) {
        cout << multipliedIntArr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < intArrSize; i++) {
        cout << dividedIntArr[i] << " ";
    }

    return 0;
}
