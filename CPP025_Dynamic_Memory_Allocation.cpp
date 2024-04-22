/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

// 動態記憶體由程式設計師來配置。換句話說，就是在執行程式時，才會配置記憶體。
// 動態記憶體儲存／被分配在 Heap 上。
// 動態記憶體的配置需要「指標」和「型別」來支援。
// 由程式設計師來決定記憶體釋放的時機點（好習慣）。

#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "How many numbers would you like to store in the array ? " << endl;
    cin >> amount;

    int *p = new int(amount);

    if (p != NULL)
    {
        for (int i = 0; i < amount; i++)
        {
            cout << "Enter the " << (i + 1) << " number : " << endl;
            cin >> p[i];
        }

        cout << endl
             << endl;

        for (int i = 0; i < amount; i++)
        {
            cout << "p[" << i << "] = " << p[i] << endl;
        }
    }
    else
        cout << "Not enough Memory ! " << endl;

    // To delete a dynamic array from the computer memory, you should use delete[],
    // instead of delete. The [] instructs the CPU to delete multiple variables
    // rather than one variable. The use of delete instead of delete[] when dealing
    // with a dynamic array may result in problems.

    delete[] p;

    return 0;
}
