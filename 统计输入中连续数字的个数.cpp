#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int judging_number = 0;
    int input_number = 0;
    int current_count = 0;
    bool is_first_input = true;

    while (cin >> input_number)
    {
        // 如果是第一个输入的数字，
        //  则同步一下judging_number
        if (is_first_input)
        {
            is_first_input = false;
            judging_number = input_number;
            current_count = 1;
            continue;
        }

        if (judging_number == input_number)
        {
            current_count++;
        }
        else
        {
            // 切换数字了，需要打印上一个数字出现次数
            cout << "number: " << judging_number << " had " << current_count << " times" << endl;
            judging_number = input_number;
            current_count = 1;
        }
    }

    // 最后一个数字还没输出，输出一下
    cout << "number: " << judging_number << " had " << current_count << " times" << endl;
    return 0;
}