#include <iostream>
#include <vector>

using namespace std;

template <typename T>

T pop_front(vector<T>&);

template <typename T>
T pop_front(vector<T>& v){
    try {
        if (v.size() == 0) {
            throw 0;
        }
        T return_data = v.front();
        typename vector<T>::iterator iter;
        for (iter = v.begin(); iter != v.end() - 1; ++iter) {
            *(iter) = *(iter + 1);
        }
        v.erase(iter);
        return return_data;
    }
    catch (int e){
        cerr << "underFlowException";
        exit(30);
    }
}
int main() {
    vector<int> a;
    for (int i = 0; i < 10; ++i) {
        a.push_back(i);
    }
    cout << "Bastan eleman cikarmadan once \n";
    cout << "[ ";
    for (vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << "]" << endl;

    int ret = pop_front(a);
    cout << "\nCikarilan elemanin degeri\n" << ret << endl;

    cout << "\nBastan eleman cikardiktan sonra \n";
    cout << "[ ";
    for (vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << "]" << endl;
    return 0;
}


