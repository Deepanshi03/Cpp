#include <iostream>
using namespace std;

int i, n, total = 0, x, counter = 0, time_quantum;
int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10];
float average_wait_time, average_turnaround_time;

void compute(){
    for (total = 0, i = 0; x != 0;) {
        if (temp[i] <= time_quantum && temp[i] > 0) {
            total = total + temp[i]; // increasing total execution time
            temp[i] = 0;  // burst time to 0 i.e process completed
            counter = 1; // process completed
        } 
        else if (temp[i] > 0) {
            temp[i] = temp[i] - time_quantum; // calculating remaining burst time
            total = total + time_quantum; // increasing total execution time
        }

        if (temp[i] == 0 && counter == 1) { // check if process completed
            x--;   // reduce number of processes by 1
            
            int turnaround = total - arrival_time[i];
            int wait = total - arrival_time[i] - burst_time[i];

            cout << "Process[" << i + 1 << "]\t\t   " << burst_time[i] << "\t\t\t    " << turnaround << "\t\t\t    " << wait << endl;
            
            wait_time = wait_time + wait; // summing total wait time for all processes
            turnaround_time = turnaround_time + turnaround; // summing total turnaround time for all processes
            counter = 0; // starting the counter again
        }

        if (i == n - 1) {
            i = 0;
        } 
        else if (arrival_time[i + 1] <= total) { //Checking process arrival
            i++;
        } 
        else {
            i = 0;
        }
    }

    average_wait_time = wait_time * 1.0 / n;  // total wait time / number of processess
    average_turnaround_time = turnaround_time * 1.0 / n; //total turenaround time / number of processess

    cout << endl << "Average Waiting Time: " << average_wait_time << endl;
    cout << "Average Turnaround Time: " << average_turnaround_time << endl;

}
int main() {

    cout << "Enter Total Number of Processes to be executed: ";
    cin >> n;
    x = n; // copy of number of processes

    for (i = 0; i < n; i++) {
        cout << "Enter Details of Process[" << i + 1 << "]" << endl;

        cout << "Enter Arrival Time: ";
        cin >> arrival_time[i];

        cout << "Enter Burst Time: ";
        cin >> burst_time[i];

        temp[i] = burst_time[i];
    }

    cout << endl << "Enter Time Quantum Value: ";
    cin >> time_quantum;
    cout << endl << "Process ID\t\tBurst Time\t\tTurnaround Time\t\tWaiting Time" << endl;
    compute();
    return 0;
}
