#include "stringop.h"

int main(int argc, char *argv[])
{
    vector<string> vec_str = get_str_vec(argc, argv);
    vector<int> vec_int = get_int_vec(argc, argv);

    cout << "input string_vector: " << endl;
    for(auto x: vec_str)    cout << x << " ";
    cout << endl;
    cout << "input int_vector: " << endl;
    for(auto x: vec_int)    cout << x << " ";
    cout << endl;

    string add_result = string_add(vec_str);
    string sub_result = string_sub(vec_str);
    vector<string> mul_result = string_mul(vec_str, vec_int);
    vector<string> sort_result = string_sort(vec_str);

    cout << "add_result: " << add_result << endl;
    cout << "sub_result: " << sub_result << endl;
    cout << "mul_result: " << endl;
    for(auto x: mul_result)     cout << x << " ";
    cout << endl;
    cout << "sort_result: " << endl;
    for(auto x: sort_result)    cout << x << " ";
    cout << endl;
    
    return 0;
}

