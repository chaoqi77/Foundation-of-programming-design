#include <iostream>
#include <sstream>
#include <string>

using namespace std;
struct arr {
    float n1;
    char n2[5];
};

arr res[3] = {
    { 0.0, "时" }, { 0.0, "分" }, { 0.0, "秒" }
};
int main()
{
    // 11．请把从午夜О点起到中午12点(计为从00:00:00 到12:00:00)时钟的时针、分针和秒针3针
    // 重合于同一位置的时刻计算出来。为实际编程方便,当3针中两两之间的夹角小于360°/60时即认为重合了。
    int seconds = 43200, over300 = 0;
    float current_seconds = 0, current_minutes = 0, current_hours = 0;
    float arr[3] = { 0 }, temp_arr[3] = { 0 };
    float temp = 0;
    for (int i = 1; i <= seconds; i++) {
        current_seconds = i % 60 * 6;
        current_minutes = i / 60 % 60 * 6;
        current_hours = i / 120;
        if (current_seconds == current_minutes && current_minutes == current_hours) {
            cout << current_hours << "-" << current_minutes << "-" << current_seconds << endl;
        } else {
            if (current_seconds > 300) {
                over300++;
            }
            if (current_minutes > 300) {
                over300++;
            }
            res[0].n1 = i / 3600;
            res[1].n1 = i / 60 % 60;
            res[2].n1 = i % 60;
            arr[0] = current_hours;
            arr[1] = current_minutes;
            arr[2] = current_seconds;
            for (int i = 0; i < 3; i++) {
                for (int j = i + 1; j < 3; j++) {
                    if (arr[i] > arr[j]) {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            if (arr[2] - arr[1] < 60 && arr[1] - arr[0] < 60 && arr[2] - arr[0] < 60) {
                cout << res[0].n1 << res[0].n2 << res[1].n1 << res[1].n2 << res[2].n1 << res[2].n2 << endl;
            } else {
                if (over300 == 1) {
                    temp_arr[0] = arr[0];
                    temp_arr[1] = arr[1];
                    temp_arr[2] = arr[2];
                    if (temp_arr[0] < 60) {
                        temp_arr[0] += 360;
                    }
                    if (temp_arr[1] < 60) {
                        temp_arr[1] += 360;
                    }
                    for (int i = 0; i < 3; i++) {
                        for (int j = i + 1; j < 3; j++) {
                            if (temp_arr[i] > temp_arr[j]) {
                                temp = temp_arr[i];
                                temp_arr[i] = temp_arr[j];
                                temp_arr[j] = temp;
                            }
                        }
                    }
                    if (temp_arr[2] - temp_arr[1] < 59 && temp_arr[1] - temp_arr[0] < 48 && temp_arr[2] - temp_arr[0] < 59) {
                        cout << res[0].n1 << res[0].n2 << res[1].n1 << res[1].n2 << res[2].n1 << res[2].n2 << endl;
                    }
                }
                over300 = 0;
            }
        }
    }
    return 0;
}
