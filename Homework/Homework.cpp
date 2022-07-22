#include <iostream>
#include <fstream>
#include <string> 
using namespace std;
int main() {
    bool flag = false, flag2 = false;
    ofstream file;
    file.open("File.txt");
    file.clear();

    for (size_t i = 1955; i <= 2022; i++)
    {
        if (i >= 2022 && flag2) continue;

        for (size_t j = 1; j <= 12; j++)
        {
            if (i >= 2022 && j >= 6 && flag) {
                flag2 = true;
                continue;
            }

            for (size_t k = 1; k <= 30; k++)
            {
                if (i >= 2022 && j >= 6 && k >= 22) {
                    flag = true;
                    continue;
                }
                file << i;
                if (j < 10) file << 0;
                file << j;
                if (k < 10) file << 0;
                file << k << endl;

            }
        }
    }
    file.close();
}
