//
// Created by Zhang on 2024/1/4.
//
#include "iostream"
namespace cpp_review {
// C.1
    template<class T>
    void swap(T &a, T &b) {
        T tmp = a;
        a = b;
        b = tmp;
    }

// C.2
    int count(int *a, int value, int N) {
        int flag = 0;
        for (int i = 0; i < N; i++) {
            if (a[i] == value)
                flag++;
        }
        return flag;
    }
    // C.3
    void fill(int * a, int value, int N){
        for(int i = 0; i<N; i++){
            a[i] = value;
        }
    }
    // C.4
    int * inner_product(int * a, int * b, int N){
        int * c = new int[N];
        for(int i = 0; i < N; i++){
            c[i] = a[i]*b[i];
        }
        return c;
    }
    // C/5
    int * iota(int * a, int value, int N){
        int * b = new int[N];
        for(int i=0; i<N; i++){
            b[i] = value + i;
        }
        return b;
    }
    // C.6
    bool is_sorted(int *a, int N){
        bool s = true;
        for(int i=0; i<N-1; i++) {
            if (a[i] > a[i + 1]) {
                s = false;
                break;
            }
        }
        return s;
    }
    // C.7
    int mis_match(int * a, int *b, int N){
        for(int i=0; i<N; i++){
            if (a[i] != b[i]){
                return i;
            }
        }
        return -1;
    }
    // C.9
    int abc(int a, int b){

        std::cout << "int" << std::endl;
        return a+b;
    }
    float abc(float a, float b){
        std::cout << "float" << std::endl;
        return a+b;
    }
    // C.10
    int ab(int a, int b){
        if (a < 0 || b < 0){
            throw -1;
        }
        else if (a == 0 || b == 0){
            throw -2;
        }
        return a+b;
    }
    // C.12
    template <class T>
    bool make_2d_array(T ** &x, int number_of_rows, int * &row_size){
        try {
            x = new T * [number_of_rows];
            for(int i=0; i<number_of_rows; i++){
                x[i] = new T[row_size[i]];
            }
            return true;
        }
        catch (std::bad_alloc){
            return false;
        }
    }
}

//int main(void){
//    using namespace std;
//    int a = 2;
//    int b = 3;
//    cpp_review::swap(a, b);
//    cout << a << endl;
//    cout << b << endl;
//    int c[] = {1,2,3};
//    cout << cpp_review::count(c, 2, 3) << endl;
//    C.3
//    int a[] = {1,2,3};
//    cout << a[1] << endl;
//    cpp_review::fill(a, 3, 3);
//    for(int i =0;i<3;i++){
//        cout << a[i] << endl;
//    }
//    C.4
//    int a[] = {1,2,3};
//    int b[] = {1,2,3};
//    int *c = cpp_review::inner_product(a, b, 3);
//    for(int i=0; i<3; i++){
//        cout << c[i] << endl;
//    }
//    C.5
//    int a[] = {1,2,3};
//    int *b = cpp_review::iota(a, 3, 3);
//    for(int i=0; i<3; i++){
//        cout << b[i] <<endl;
//    }
//    int a[] = {1,2,3,4, 1};
//    bool s = cpp_review::is_sorted(a, 5);
//    cout << s <<endl;
//    C.7
//    int a[] = {1,2,3,4};
//    int b[] = {1,2,3,5};
//    int c = cpp_review::mis_match(a, b, 4);
//    cout << c << endl;
//    C.9
//    int a=1;
//    int b=2;
//    int c = cpp_review::abc(a, b);
//    float d = cpp_review::abc(1.0F, 2.0F);
//    cout << c << endl;
//    cout << d << endl;
//    C.10
//    int a=0;
//    int b=-1;
//    try {
//        int c = cpp_review::ab(a,b);
//    }
//    catch (int e){
//        cout << "There is Something Wrong" << e << endl;
//        return 1;
//    }
//    return 0;
//}
//int main (void){
//    using namespace std;
//    int ** a;
//    bool c= false;
//    int * b = new int[2];
//    b[0] = 1;
//    b[1] = 2;
//    c = cpp_review::make_2d_array(a, 2, b);
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < b[i]; j++) {
//            cout << a[i][j] << endl;
//        }
//        cout << '\n' << endl;
//    }
//}